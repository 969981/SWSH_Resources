---
tags: [SWSH, Sword, Shield, ELF, ARM64, Ghidra, TrainerID, RE]
game_version: "1.3.2"
tool: "Ghidra 12.2"
source_run: "42771375134"
evidence: "SWORD_AND_SHIELD_STATIC_CORE_CONFIRMED / RUNTIME_PENDING"
date: "2026-11-11"
---

# 剑盾 v1.3.2 新建训练家 ID — 双版 ELF / 逐行注释 / 状态机

> **结论先行：** 剑版原生链条已能由仓库 Ghidra C 独立验证：`nn::crypto::GenerateCryptographicallyRandomBytes(&value, 4)` → `status+0x100 = value` → `value % 1000000` → 资料快照的 `+0x1C` → `profile+0x60` 复制回写。**但它不是 Nintendo Account Uid 的生成算法，也不等于玩家在线账户的六位 ID。** 盾版已由真实 ELF 反汇编与盾版独立 Ghidra C 核实五个核心函数及四个 BL 调用点，详见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]]；运行时状态分发及存档持久化仍未验证。

## 1. 完整 ELF 与证据来源

| 游戏 | 完整重建 ELF（仓库原件，只读） | 字节 | SHA-256 |
|---|---|---:|---|
| 剑 Sword | [`v1.3.2/0/sword_main.elf`](https://github.com/969981/SWSH_Resources/blob/master/v1.3.2/0/sword_main.elf) | 40,065,128 | `4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43` |
| 盾 Shield | [`v1.3.2/0/shield_main.elf`](https://github.com/969981/SWSH_Resources/blob/master/v1.3.2/0/shield_main.elf) | 40,065,272 | `a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a` |

二者是 **nx2elf 从原始 NSO 重建的 ELF64/AArch64**，不是附原厂调试符号的 ELF。源 provenance 见 [nx2elf manifest](../../../manifests/v1.3.2/nx2elf-main-manifest.json)；Ghidra [Run #42771375134](https://github.com/969981/SWSH_Resources/actions/runs/42771375134)。**Ghidra IMAGE_BASE=0x00100000**，故 `main+RVA = Ghidra VA - 0x100000`；不能直接把 VA 当作运行时绝对地址。原始二进制保持原位，不重新提交或改写。

| 语义 | 剑 Ghidra VA → main+RVA | 盾 Ghidra VA → main+RVA | 证据 |
|---|---|---|---|
| 状态分发 | `00D87D80 → C87D80` | `00D87D80 → C87D80` | 双版静态验证，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| 新建流程 | `01006F50 → F06F50` | `01006F80 → F06F80` | 双版静态验证，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| ID32 setter | `01524CF0 → 1424CF0` | `01524D20 → 1424D20` | 双版静态验证，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| ID32 getter | `01524D00 → 1424D00` | `01524D30 → 1424D30` | 双版静态验证，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| 六位显示 ID | `01524D10 → 1424D10` | `01524D40 → 1424D40` | 双版静态验证，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| RNG callsite | `01006F98 → F06F98` | `01006FC8 → F06FC8` | 双版原始 BL 已核对，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| ID setter callsite | `01006FA4 → F06FA4` | `01006FD4 → F06FD4` | 双版原始 BL 已核对，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |
| 分发两处生成器调用 | `00D87F18 / 00D87F4C → C87F18 / C87F4C` | 相同候选位置 | 双版 BL 指向各自生成器，见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]] |

**注意：** `00D87F18` 等是**调用指令的位置**，不能视作新函数入口。本页主要呈现剑版 Ghidra C 逐行附注；已完成的双版 ARM64 指令窗口和盾版 C 见 [[29-剑盾训练家ID-双版ARM64指令与盾版C]]。

## 2. status / profile 对象关系（剑版静态 CONFIRMED）

```text
*(PTR_DAT_02710798) + 0x1E8  -> status对象指针
status + 0x100                 -> 32-bit raw ID
*(PTR_DAT_02710798) + 0x288  -> profile对象指针
FUN_014FBA00(profile)         -> profile + 0x60 (记录基址)
local_208                      -> 0x1C4 字节记录的临时副本
local_1EC                      -> local_208 + 0x1C (display ID)
FUN_014FBA10(profile,local_208,0)
                                memcpy(profile+0x60, local_208, 0x1C4)
profile + 0x7C                -> display ID 在 profile 内的候选字段偏移
```

因为 `local_208` 与 `local_1EC` 是同一个栈对象的偏移关系（`0x208-0x1EC=0x1C`），Ghidra 的两条语句合起来给出：`local_1EC = rawID % 1000000`，随后存回记录。此处的 **资料对象+0x7C** 是从字节布局推得的静态位置；尚无重启读档和序列化追踪证明其最终持久化。

## 3. 上层状态机（剑版；状态的业务命名尚未确认）

```c
uint32_t requested = ((flags & 1) != 0) ? 2 : 1;
int state = FUN_0153D5A0(manager, requested);
this->field_94 = state;
if (state == 4)
    FUN_0153D540(manager, &zero);

if ((state | 1U) != 3U) {
    // state 不等于 2、3 时：新建/重置路径（业务名称待确认）
    FUN_01006F50(optionalObj); 
} else {
    if ((flags & 1) == 0)
        this->field_1F8 = FUN_01524D00(status);
    FUN_010072D0(optionalObj);
}
// 后续共用处理：账号游玩统计、游戏内部状态映射、依赖对象初始化。
FUN_00D87FC0(...);
FUN_00D88170(...);
FUN_0100C420(...);
```

解释：`(state|1)!=3` 对 32 位无符号状态的**准确判断是 state 不为2或3**。函数 `FUN_0153D5A0` 含 mutex、线程等待与其他回调，仅凭比较值不能给状态 0/1/2/3/4 起“第一次创建/加载成功”这种已验证名称。两处 `FUN_01006F50` 调用对应“传入空指针/非空指针”两支，不代表抽取了两次 ID。**是否执行哪一支，必须记录实际返回状态。**

## 4. 恢复出的关键语义伪代码（并非 Nintendo 原始源代码）

```c
// 语义重命名；每个具体读取/写入点均来自剑版 Ghidra C。
struct StatusIDView { unsigned char unknown[0x100]; uint32_t rawID32; };
uint32_t ReadRawID32(StatusIDView* status) {
    return status->rawID32;
}
uint32_t ReadDisplayID6(StatusIDView* status) {
    return status->rawID32 % 1000000u;
}
void SetRawID32(StatusIDView* status, uint32_t randomValue) {
    status->rawID32 = randomValue;
}
void NewTrainerInitialization(StatusIDView* status, Profile* profile, Other* other) {
    uint32_t raw = 0;
    nn::crypto::GenerateCryptographicallyRandomBytes(&raw, 4);
    SetRawID32(status, raw);
    // 后续还有多组初始化/复制/回写行为，并非只有以上三行。
    unsigned char buffer[0x1c4];
    memcpy(buffer, (unsigned char*)profile + 0x60, 0x1c4);
    *(uint32_t*)(buffer + 0x1c) = ReadDisplayID6(status);
    memcpy((unsigned char*)profile + 0x60, buffer, 0x1c4);
}
```

这不证明上述 Profile 类或字段名是原游戏真实 C++ 名称。实际 `FUN_01006F50` 会调用 `FUN_0150DEC0`、`FUN_014BE100`、对索引 0/1/2 调用 `FUN_0100A950`，并调用 `FUN_0168E710`；不能把这些调用从真实流程中删除后当成等效实现。

## 5. 剑版完整 Ghidra C：逐行附注

以下以仓库 Ghidra 导出 **完整函数内容** 为底本，不省略有行为的语句；每条有效语句的尾注区分能证实的用途和仍未知的表达式。原始文件的注释之外，新增中文尾注是人工/规则辅助的解释，**不是原生符号**。

### 上层状态分发 — `00d87d80.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/00/00d87d80.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d87d80; name: FUN_00d87d80
 */


void FUN_00d87d80(long param_1,ulong param_2) // 反编译变量或函数声明；具体类型可能未恢复

{
  undefined *puVar1; // 反编译变量或函数声明；具体类型可能未恢复
  undefined *puVar2; // 反编译变量或函数声明；具体类型可能未恢复
  int iVar3; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 uVar4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uVar5; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar6; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar7; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar8; // 反编译变量或函数声明；具体类型可能未恢复
  long *plVar9; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_54; // 反编译变量或函数声明；具体类型可能未恢复
  
  puVar1 = PTR_DAT_02710798; // 值传递/局部赋值；未单独恢复业务字段名
  uVar4 = 1; // 值传递/局部赋值；未单独恢复业务字段名
  if ((param_2 & 1) != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    uVar4 = 2; // 值传递/局部赋值；未单独恢复业务字段名
  }
  iVar3 = FUN_0153d5a0(*(undefined8 *)PTR_DAT_02710798,uVar4); // CONFIRMED：依据 flag bit0 选择参数1或2并取得状态码；状态枚举语义未定
  *(int *)(param_1 + 0x94) = iVar3;
  if (iVar3 == 4) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    local_54 = 0; // 值传递/局部赋值；未单独恢复业务字段名
    FUN_0153d540(*(undefined8 *)puVar1,&local_54); // 状态4时对指定管理器执行进一步处理；不是ID setter
  }
  puVar2 = PTR_DAT_02710848; // 值传递/局部赋值；未单独恢复业务字段名
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar6 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  lVar7 = *(long *)(lVar6 + 2000); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar7 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  lVar8 = *(long *)(lVar7 + 0x80); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar8 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    FUN_00fa7da0(0); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  else { // 反编译控制流
    plVar9 = (long *)(lVar8 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    (**(code **)(*plVar9 + 0x10))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
    FUN_00fa7da0(lVar8); // 保持Ghidra原始表达式；具体业务含义未验证
    (**(code **)(*plVar9 + 0x18))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  if ((*(uint *)(param_1 + 0x94) | 1) != 3) { // CONFIRMED：读/写状态字段+0x94；(state|1)!=3排除state 2与3
    lVar6 = *(long *)puVar2; // 值传递/局部赋值；未单独恢复业务字段名
    lVar7 = *(long *)(lVar6 + 0x90); // 值传递/局部赋值；未单独恢复业务字段名
    if (lVar7 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
      uVar5 = FUN_01006f50(0); // CONFIRMED：新建资料生成器；两个分支只是传入有/无对象
      goto LAB_00d87f74; // Ghidra重建控制流跳转标签
    }
    plVar9 = (long *)(lVar7 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    (**(code **)(*plVar9 + 0x10))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
    uVar5 = FUN_01006f50(lVar7); // CONFIRMED：新建资料生成器；两个分支只是传入有/无对象
    goto LAB_00d87f1c; // Ghidra重建控制流跳转标签
  }
  if ((param_2 & 1) == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    lVar6 = *(long *)(*(long *)puVar1 + 0x1e8); // 从全局管理器+0x1E8取得 status 对象（引用保持语义待核）
    if (lVar6 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
      plVar9 = (long *)(lVar6 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
      (**(code **)(*plVar9 + 0x10))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
      uVar4 = FUN_01524d00(lVar6); // CONFIRMED：读取 status+0x100 的原始 uint32；与显示六位ID不同
      *(undefined4 *)(param_1 + 0x1f8) = uVar4;
      (**(code **)(*plVar9 + 0x18))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
      goto LAB_00d87ec8; // Ghidra重建控制流跳转标签
    }
    uVar4 = FUN_01524d00(0); // CONFIRMED：读取 status+0x100 的原始 uint32；与显示六位ID不同
    *(undefined4 *)(param_1 + 0x1f8) = uVar4;
    lVar6 = *(long *)puVar2; // 值传递/局部赋值；未单独恢复业务字段名
    lVar7 = *(long *)(lVar6 + 0x90); // 值传递/局部赋值；未单独恢复业务字段名
  }
  else { // 反编译控制流
LAB_00d87ec8:
    lVar6 = *(long *)puVar2; // 值传递/局部赋值；未单独恢复业务字段名
    lVar7 = *(long *)(lVar6 + 0x90); // 值传递/局部赋值；未单独恢复业务字段名
  }
  if (lVar7 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    uVar5 = FUN_010072d0(0); // CONFIRMED：其他状态走已有数据处理路径；不应误称为ID重生成器
LAB_00d87f74:
    uVar5 = FUN_00d87fc0(uVar5,lVar6); // 分发后继续平台账户/游玩统计检查；见原始C
    FUN_00d88170(uVar5,lVar6); // 分发后继续存档标志映射等处理；见原始C
    FUN_0100c420(*(undefined8 *)(param_1 + 0x88)); // 末尾进一步执行依赖对象初始化（原生子系统，非六位ID公式）
    return; // 函数返回
  }
  plVar9 = (long *)(lVar7 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
  (**(code **)(*plVar9 + 0x10))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
  uVar5 = FUN_010072d0(lVar7); // CONFIRMED：其他状态走已有数据处理路径；不应误称为ID重生成器
LAB_00d87f1c:
  uVar5 = FUN_00d87fc0(uVar5,lVar6); // 分发后继续平台账户/游玩统计检查；见原始C
  FUN_00d88170(uVar5,lVar6); // 分发后继续存档标志映射等处理；见原始C
  FUN_0100c420(*(undefined8 *)(param_1 + 0x88)); // 末尾进一步执行依赖对象初始化（原生子系统，非六位ID公式）
  (**(code **)(*plVar9 + 0x18))(plVar9); // 保持Ghidra原始表达式；具体业务含义未验证
  return; // 函数返回
}
```

### 随机 ID 与存档初始化 — `01006f50.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01006f50.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01006f50; name: FUN_01006f50
 */


void FUN_01006f50(undefined8 param_1) // 反编译变量或函数声明；具体类型可能未恢复

{
  undefined *puVar1; // 反编译变量或函数声明；具体类型可能未恢复
  void *__src; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar2; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar3; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_208 [7]; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_1ec; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_140; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_13c; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_138; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_134; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_133; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_130; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_12c; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_128; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_124; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_120; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_11c; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_118; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_117; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_114; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_110; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_10c; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_108; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_104; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_100; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_fc; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_fb; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_f8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_f4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_f0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_ec; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_e8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_e4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_e0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_df; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_dc; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_d8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_d4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_d0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_cc; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_c8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_c4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_c3; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_c0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_bc; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_b8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_b4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined2 local_b0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_ac; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_a8; // 反编译变量或函数声明；具体类型可能未恢复
  undefined1 local_a7; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_a4; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_a0; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_9c; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_98; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_90; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uStack_88; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_80; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uStack_78; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_70; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uStack_68; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_60; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 local_58; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uStack_50; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 local_48; // 反编译变量或函数声明；具体类型可能未恢复
  
  puVar1 = PTR_DAT_02710798; // 值传递/局部赋值；未单独恢复业务字段名
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8); // 从全局管理器+0x1E8取得 status 对象（引用保持语义待核）
  if (lVar2 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  nn::crypto::GenerateCryptographicallyRandomBytes(local_208,4); // CONFIRMED：向栈缓冲区写入4字节密码学随机数据（不是六位十进制文本）
  FUN_01524cf0(lVar2,local_208[0]); // CONFIRMED：调用 ID32 setter；第二参数来自随机缓冲区首4字节
  lVar3 = *(long *)(*(long *)puVar1 + 0x1f0); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar3 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  FUN_0150dec0(lVar3); // 从另一个对象+0x60读取状态位（具体 enum 未证实）
  FUN_014be100(); // 写一个全局四字节标志；Ghidra当前参数传播存在不确定性
  FUN_0100a950(param_1,0,1); // 对索引0/1/2分别初始化数据；具体游戏语义不据此推断
  FUN_0100a950(param_1,1,1); // 对索引0/1/2分别初始化数据；具体游戏语义不据此推断
  FUN_0100a950(param_1,2,1); // 对索引0/1/2分别初始化数据；具体游戏语义不据此推断
  lVar4 = *(long *)(*(long *)puVar1 + 0x288); // 从全局管理器+0x288取得 profile/资料对象（候选命名）
  if (lVar4 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  __src = (void *)FUN_014fba00(lVar4); // CONFIRMED：取得 profile+0x60 起始的资料记录
  memcpy(local_208,__src,200); // CONFIRMED：先拷贝记录前0xC8字节；随后的显式赋值补齐后半段
  local_140 = *(undefined4 *)((long)__src + 200); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_13c = *(undefined2 *)((long)__src + 0xcc); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_138 = *(undefined4 *)((long)__src + 0xd0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_134 = *(undefined1 *)((long)__src + 0xd4); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_133 = *(undefined1 *)((long)__src + 0xd5); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_130 = *(undefined4 *)((long)__src + 0xd8); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_12c = *(undefined4 *)((long)__src + 0xdc); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_128 = *(undefined4 *)((long)__src + 0xe0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_124 = *(undefined4 *)((long)__src + 0xe4); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_120 = *(undefined2 *)((long)__src + 0xe8); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_11c = *(undefined4 *)((long)__src + 0xec); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_118 = *(undefined1 *)((long)__src + 0xf0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_117 = *(undefined1 *)((long)__src + 0xf1); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_114 = *(undefined4 *)((long)__src + 0xf4); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_110 = *(undefined4 *)((long)__src + 0xf8); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_10c = *(undefined4 *)((long)__src + 0xfc); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_108 = *(undefined4 *)((long)__src + 0x100); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_104 = *(undefined2 *)((long)__src + 0x104); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_100 = *(undefined4 *)((long)__src + 0x108); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_fc = *(undefined1 *)((long)__src + 0x10c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_fb = *(undefined1 *)((long)__src + 0x10d); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_f8 = *(undefined4 *)((long)__src + 0x110); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_f4 = *(undefined4 *)((long)__src + 0x114); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_f0 = *(undefined4 *)((long)__src + 0x118); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_ec = *(undefined4 *)((long)__src + 0x11c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_e8 = *(undefined2 *)((long)__src + 0x120); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_e4 = *(undefined4 *)((long)__src + 0x124); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_e0 = *(undefined1 *)((long)__src + 0x128); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_df = *(undefined1 *)((long)__src + 0x129); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_dc = *(undefined4 *)((long)__src + 300); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_d8 = *(undefined4 *)((long)__src + 0x130); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_d4 = *(undefined4 *)((long)__src + 0x134); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_d0 = *(undefined4 *)((long)__src + 0x138); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_cc = *(undefined2 *)((long)__src + 0x13c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_c8 = *(undefined4 *)((long)__src + 0x140); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_c4 = *(undefined1 *)((long)__src + 0x144); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_c3 = *(undefined1 *)((long)__src + 0x145); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_c0 = *(undefined4 *)((long)__src + 0x148); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_bc = *(undefined4 *)((long)__src + 0x14c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_b8 = *(undefined4 *)((long)__src + 0x150); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_b4 = *(undefined4 *)((long)__src + 0x154); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_b0 = *(undefined2 *)((long)__src + 0x158); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_ac = *(undefined4 *)((long)__src + 0x15c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_a8 = *(undefined1 *)((long)__src + 0x160); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_a7 = *(undefined1 *)((long)__src + 0x161); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_a4 = *(undefined4 *)((long)__src + 0x164); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_a0 = *(undefined4 *)((long)__src + 0x168); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_9c = *(undefined4 *)((long)__src + 0x16c); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_98 = *(undefined8 *)((long)__src + 0x170); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_90 = *(undefined8 *)((long)__src + 0x178); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  uStack_88 = *(undefined8 *)((long)__src + 0x180); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_80 = *(undefined8 *)((long)__src + 0x188); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  uStack_78 = *(undefined8 *)((long)__src + 400); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_70 = *(undefined8 *)((long)__src + 0x198); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  uStack_68 = *(undefined8 *)((long)__src + 0x1a0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  uStack_50 = *(undefined8 *)((long)__src + 0x1b8); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_60 = *(undefined8 *)((long)__src + 0x1a8); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_58 = *(undefined8 *)((long)__src + 0x1b0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_48 = *(undefined4 *)((long)__src + 0x1c0); // 从源记录给栈中的同布局字段赋值；不是新随机数生成
  local_1ec = FUN_01524d10(lVar2); // CONFIRMED：读取并对1000000取模；local_1ec位于 local_208+0x1C
  FUN_014fba10(lVar4,local_208,0); // CONFIRMED：将修改后的资料记录回写到 profile+0x60，详见该函数
  FUN_0168e710(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288)); // 从全局管理器+0x288取得 profile/资料对象（候选命名）
  if (lVar4 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  }
  if (lVar3 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  }
  if (lVar2 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  }
  return; // 函数返回
}
```

### ID32 写入 — `01524cf0.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524cf0.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524cf0; name: FUN_01524cf0
 */


void FUN_01524cf0(long param_1,undefined4 param_2) // 反编译变量或函数声明；具体类型可能未恢复

{
  *(undefined4 *)(param_1 + 0x100) = param_2;
  return; // 函数返回
}
```

### 原始 ID32 读取 — `01524d00.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524d00.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524d00; name: FUN_01524d00
 */


undefined4 FUN_01524d00(long param_1) // 反编译变量或函数声明；具体类型可能未恢复

{
  return *(undefined4 *)(param_1 + 0x100); // CONFIRMED：访问 status+0x100 的 uint32（注意对象指针与 main 地址无关）
}
```

### 六位 ID 计算 — `01524d10.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524d10.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524d10; name: FUN_01524d10
 */


uint FUN_01524d10(long param_1) // 反编译变量或函数声明；具体类型可能未恢复

{
  return *(uint *)(param_1 + 0x100) % 1000000; // CONFIRMED：无符号余数0..999999；展示6位时需补前导零
}
```

### 资料区域定位 — `014fba00.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/014fba00.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fba00; name: FUN_014fba00
 */


long FUN_014fba00(long param_1) // 反编译变量或函数声明；具体类型可能未恢复

{
  return param_1 + 0x60; // CONFIRMED：profile 记录首地址=对象+0x60
}
```

### 资料写回 — `014fba10.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/014fba10.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fba10; name: FUN_014fba10
 */


void FUN_014fba10(long param_1,void *param_2,ulong param_3) // 反编译变量或函数声明；具体类型可能未恢复

{
  time_t tVar1; // 反编译变量或函数声明；具体类型可能未恢复
  tm tStack_58; // 反编译变量或函数声明；具体类型可能未恢复
  
  memcpy((void *)(param_1 + 0x60),param_2,0x1c4); // CONFIRMED：将0x1C4字节资料复制进对象内部+0x60
  if ((param_3 & 1) != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    FUN_0102ad30(&tStack_58); // 在 param_3 bit0 为1时读取时间
    tVar1 = mktime(&tStack_58); // 调用平台C库转换日期时间
    *(time_t *)(param_1 + 0x208) = tVar1;
  }
  return; // 函数返回
}
```

### 既有身份分支 — `010072d0.c`

[原始 Ghidra C](https://github.com/969981/SWSH_Resources/blob/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/010072d0.c)

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010072d0; name: FUN_010072d0
 */


void FUN_010072d0(void) // 反编译变量或函数声明；具体类型可能未恢复

{
  undefined *puVar1; // 反编译变量或函数声明；具体类型可能未恢复
  undefined4 uVar2; // 反编译变量或函数声明；具体类型可能未恢复
  uint uVar3; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar4; // 反编译变量或函数声明；具体类型可能未恢复
  long lVar5; // 反编译变量或函数声明；具体类型可能未恢复
  long *plVar6; // 反编译变量或函数声明；具体类型可能未恢复
  undefined8 uVar7; // 反编译变量或函数声明；具体类型可能未恢复
  
  puVar1 = PTR_DAT_02710798; // 值传递/局部赋值；未单独恢复业务字段名
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar4 != 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // 虚表偏移+0x10的对象保持/获取操作；身份与真实类型未恢复
  }
  FUN_0150dec0(lVar4); // 从另一个对象+0x60读取状态位（具体 enum 未证实）
  FUN_014be100(); // 写一个全局四字节标志；Ghidra当前参数传播存在不确定性
  lVar5 = *(long *)(*(long *)puVar1 + 0x1f0); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar5 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    FUN_0150dfb0(0); // 保持Ghidra原始表达式；具体业务含义未验证
    uVar2 = FUN_008d4060(); // 值传递/局部赋值；未单独恢复业务字段名
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    uVar3 = FUN_0150df70(0); // 值传递/局部赋值；未单独恢复业务字段名
    FUN_008d37c0(uVar2,uVar7,uVar3 & 1); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  else { // 反编译控制流
    plVar6 = (long *)(lVar5 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    (**(code **)(*plVar6 + 0x10))(plVar6); // 保持Ghidra原始表达式；具体业务含义未验证
    FUN_0150dfb0(lVar5); // 保持Ghidra原始表达式；具体业务含义未验证
    uVar2 = FUN_008d4060(); // 值传递/局部赋值；未单独恢复业务字段名
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    uVar3 = FUN_0150df70(lVar5); // 值传递/局部赋值；未单独恢复业务字段名
    FUN_008d37c0(uVar2,uVar7,uVar3 & 1); // 保持Ghidra原始表达式；具体业务含义未验证
    (**(code **)(*plVar6 + 0x18))(plVar6); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  FUN_012b2bf0(*(undefined8 *)(*(long *)PTR_DAT_02710870 + 0x60)); // 保持Ghidra原始表达式；具体业务含义未验证
  FUN_0168e710(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288)); // 从全局管理器+0x288取得 profile/资料对象（候选命名）
  lVar5 = *(long *)(*(long *)puVar1 + 0x248); // 值传递/局部赋值；未单独恢复业务字段名
  if (lVar5 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    FUN_01526440(0); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  else { // 反编译控制流
    plVar6 = (long *)(lVar5 + 0x48); // 值传递/局部赋值；未单独恢复业务字段名
    (**(code **)(*plVar6 + 0x10))(plVar6); // 保持Ghidra原始表达式；具体业务含义未验证
    FUN_01526440(lVar5); // 保持Ghidra原始表达式；具体业务含义未验证
    (**(code **)(*plVar6 + 0x18))(plVar6); // 保持Ghidra原始表达式；具体业务含义未验证
  }
  if (lVar4 == 0) { // 条件分支；保留原始表达式，勿推断未验证的状态名称
    return; // 函数返回
  }
                    /* WARNING: Could not recover jumptable at 0x01007438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // 虚表偏移+0x18的配对释放/解锁候选；需要运行时确认
  return; // 函数返回
}
```

## 6. 盾版完整提取方法及当前限制

盾版 Ghidra 导出是 `47984` 个函数、`47979` 个成功 C、`5` 个失败；原生数据库在 [shield/database](https://github.com/969981/SWSH_Resources/tree/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/shield/database)，完整的逐函数注释 C 位于 [shield/annotations_v1](https://github.com/969981/SWSH_Resources/tree/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/annotations_v1/shield) 的分片 ZIP，原始记录是 [shield/ndjson](https://github.com/969981/SWSH_Resources/tree/master/derived/v1.3.2/Ghidra_12.2_Run_42771375134/shield/ndjson)。**GitHub 文本接口不能直接读取二进制 ZIP/ELF，但定向 CI 已按 SHA-256 校验两份 ELF 并恢复了盾版 ZIP 内的五个核心函数 C，产出 [[29-剑盾训练家ID-双版ARM64指令与盾版C]]。** 这些是静态反汇编窗口与 C 恢复证据，不是原 Ghidra 精确非连续 CFG/实机保存验收。

同仓库的 `tools/ghidra/swsh_trainer_id_extract.py` 是面向 **原版双 ELF + 真实 Ghidra SQLite** 的只读提取器。恢复 SQLite（先运行已有的 `swsh_restore_split.py`），调用提取器可以输出全部指定函数的 Ghidra 指令地址、真实 instruction bytes、分支引用、已恢复 C 伪代码和中性逐行汇编注释，生成单独的 Sword/Shield 两份 Markdown，填补本笔记当前缺失的双版汇编。


### 从仓库数据实际生成双版原生汇编（只读）

在仓库根目录执行；恢复脚本会校验 SQLite 完整性及分片 SHA，下面的目录必须是尚未存在或空目录：

```bash
RUN=derived/v1.3.2/Ghidra_12.2_Run_42771375134
python3 tools/ghidra/swsh_restore_split.py --source "$RUN/sword" --out artifacts/id-sword-restored --no-project
python3 tools/ghidra/swsh_restore_split.py --source "$RUN/shield" --out artifacts/id-shield-restored --no-project
python3 tools/ghidra/swsh_trainer_id_extract.py \
  --repo . \
  --sword-sqlite artifacts/id-sword-restored/sword.sqlite \
  --shield-sqlite artifacts/id-shield-restored/shield.sqlite \
  --out artifacts/swsh-trainer-id
```

预期输出文件：`sword-trainer-id-asm.md`、`shield-trainer-id-asm.md`、`summary.json`。**只有真正执行并看到 `ELF_MATCH` 的指令才有原始机器码核验证据**；脚本自身提交不等于已经执行。检查 `summary.json` 中指定 BL 位置是否为 `CALL_INSTRUCTION`，并阅读 Ghidra 的 `references_full` 调用目标；如果任何函数为 `NOT_FOUND`、`PARTIAL` 或 ELF hash 不符，应停止做“双版本已验证”结论。

## 7. 尚需验收的断点与对账

1. **两版函数真实边界：** 在 Ghidra SQLite 中核对 entry、body_min/max、body_bytes、body_sha256；以实际 `instructions` 和 `references_full` 表为准，核查 01006F98/01006FC8、01006FA4/01006FD4、00D87F18/00D87F4C 的 BL 目标。
2. **随机数入参：** 在随机数调用返回后记录目标栈 4 字节、调用 setter 前 W1、`status+0x100` 写后读回，确认相等；记录模块 Build ID、ELF SHA、代码字节。
3. **显示字段：** 比较 `rawID32 % 1000000`、`local_208+0x1C`、`profile+0x7C` 三个值，确认首次创建与读档路径差异。
4. **持久化：** 经正式保存、冷重启再观察 `status+0x100` 与 `profile+0x7C`，并追踪真实保存回调；不能因为内存写入就宣称存档完成。
5. **账户区别：** `nn::account::ListOpenUsers` 在后处理 `FUN_00D87FC0` 中存在，但不是 4 字节随机训练家 ID 的生成调用；不要把 Switch 平台 Uid、游戏原始 ID32、六位显示 ID 混作一个字段。

**证据状态：** 剑版 C 静态恢复 **CONFIRMED**；盾版核心函数入口/五份 Ghidra C/四个调用指令 **CONFIRMED（源于 ELF 静态反汇编和已保存的 Ghidra C）**；完整函数非连续范围仍需 Ghidra SQLite 核对；两版运行时 ID 写回和冷启动持久化 **NOT_OBSERVED**。
