---
title: 剑盾 v1.3.2 训练家 ID：Heap 地址与 Main 原生指针链
tags: [SWSH, v1.3.2, TrainerID, ID32, heap, main, ARM64, Ghidra, Obsidian]
source-run: Ghidra_12.2_Run_42771375134
date: 2026-11-11
status: STATIC_VERIFIED_RUNTIME_PENDING
---

# 剑盾 v1.3.2 训练家 ID：Heap 地址与 Main 原生指针链

> 研究目的：把 SysBot.NET 固定 Heap-relative 训练家地址与 Sword/Shield v1.3.2 原生 ELF 的动态指针链闭合，区分 **ID32**、**六位显示 ID**、**MyStatus 数据区域**、**资料/profile 缓存**，并给出可直接运行的只读对账脚本。
>
> **状态：双版 ELF ARM64 指令/函数与开源结构静态证据确认；Heap 固定偏移与对象运行时实际地址相等尚未实机验证。**
>
> 相关研究：[[28-剑盾训练家ID-双版ELF与Ghidra逐行审计]]、[[29-剑盾训练家ID-双版ARM64指令与盾版C]]。

## 1. 关键结论

**SysBot.NET 的 0x45068F18 是 Heap-relative 偏移，不是绝对虚拟地址，也不是 main+RVA。**

- MyStatus 训练家数据起点：**heap+0x45068F18**。
- 原始 32-bit 训练家 ID：**heap+0x45068FB8** = 数据起点 +0xA0；低 16 位 TID16，高 16 位 SID16。
- 显示六位 ID：**ID32 % 1000000**，计算结果而非另一个独立随机数。
- 动态原生 ID32：**status+0x100**，通过 main 的静态指针槽位解析 status；这一点已在两版生成器 ARM64 和 setter/getter 中确认。
- 静态布局支持 **MyStatusData = status+0x60**，因为 ID32 位于 +0xA0，Watt 位于 +0xD0，二者与 status+0x100 / status+0x130 完全吻合；另有 status+0x60 getter。
- 所以在 SysBot 固定 Heap 地址对应此运行时对象的前提下，可以推算 **status = heap+0x45068EB8**。该等式是待动态证明的结论，不能把推算值说成 ELF 内硬编码的堆指针。

**原生 main 指针链：**

~~~text
slot   = mainBase + 0x02610798             // ELF 静态全局指针槽位
holder = read64(slot)                      // 从 main .data 取持有者指针
mgr    = read64(holder)                    // 从 holder 取得管理器对象
status = read64(mgr + 0x1E8)               // 训练家 Status 对象
rawID  = read32(status + 0x100)            // 原始 ID32
tid6   = rawID % 1_000_000                // 六位显示 ID

profile = read64(mgr + 0x288)              // 玩家资料对象，另一条独立分支
profileDisplayIDCandidate = read32(profile + 0x7C)
                                            // 新建账号时资料回写的显示 ID 缓存
~~~

**不要省略第二次 read64。** 由 ARM64 的两次 LDR 可见，slot 不是直接给出 manager；也不要写成 main+0x45068FB8。

## 2. 版本/ELF 来源与 Ghidra 地址规则

| 项目 | Sword 1.3.2 | Shield 1.3.2 |
|---|---|---|
| Title ID | 0100ABF008968000 | 01008DB008C2C000 |
| 源 ELF | v1.3.2/0/sword_main.elf | v1.3.2/0/shield_main.elf |
| ELF SHA-256 | 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43 | a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a |
| Ghidra 镜像基址 | 0x00100000 | 0x00100000 |
| main 全局指针槽位 | main+0x02610798 | main+0x02610798 |
| Ghidra 全局槽位 VA | 0x02710798 | 0x02710798 |

此仓库的 ELF 是从 v1.3.2 NSO 经 nx2elf 重建的 ELF64/AArch64，不是 Nintendo 原始带符号 C 源码。Ghidra 给出的 FUN_xxxxxxxx 是反编译函数标识。转换规则：**main RVA = Ghidra VA - 0x00100000**。实际进程虚拟地址：**MainBase + RVA**。反之，SysBot 的 heap offset 要由 **HeapBase + offset** 才能得到绝对地址。

### 函数位置（剑盾必须分别使用）

| 业务意义 | 剑版 Ghidra VA | 盾版 Ghidra VA | 剑版 main+RVA | 盾版 main+RVA |
|---|---|---|---|---|
| 上层初始化状态分发 | 0x00D87D80 | 0x00D87D80 | 0x00C87D80 | 0x00C87D80 |
| 创建训练家 ID/资料初始化 | 0x01006F50 | 0x01006F80 | 0x00F06F50 | 0x00F06F80 |
| 调用密码学随机源 | 0x01006F98 | 0x01006FC8 | 0x00F06F98 | 0x00F06FC8 |
| 调用 ID32 setter | 0x01006FA4 | 0x01006FD4 | 0x00F06FA4 | 0x00F06FD4 |
| ID32 setter | 0x01524CF0 | 0x01524D20 | 0x01424CF0 | 0x01424D20 |
| ID32 getter | 0x01524D00 | 0x01524D30 | 0x01424D00 | 0x01424D30 |
| 六位显示 ID getter | 0x01524D10 | 0x01524D40 | 0x01424D10 | 0x01424D40 |

其中 **Ghidra 函数 VA** 不等于运行时实际 MainBase+RVA，双版函数不能直接互相替换；静态槽位 RVA 在所审计双版中相同。

## 3. 原始 ARM64：main 槽位 → manager → status

剑版 **Ghidra 0x01006F68** 起；盾版 **Ghidra 0x01006F98** 起，原始关键指令逻辑相同：

~~~asm
ADRP X22, 0x2610000
LDR  X22, [X22, #0x798]  ; X22 = read64(main+0x02610798)
LDR  X8,  [X22]           ; X8  = read64(X22) = manager
LDR  X19, [X8, #0x1E8]   ; X19 = read64(manager+0x1E8) = status
~~~

剑版的关键指令 RVA 为 0x00F06F68、0x00F06F6C、0x00F06F70、0x00F06F74；盾版分别为 0x00F06F98、0x00F06F9C、0x00F06FA0、0x00F06FA4。

注意 **ADRP** 得到 4 KiB 页对齐的 main 相对页地址，随后 **LDR [X22,#0x798]** 才取得槽位中的指针。静态槽位 **main+0x02610798** 不是最终 manager，也不是 ID32。获取管理器后，还需取 **manager+0x1E8** 的指针。

对应 Ghidra 剑版生成器中的代码：

~~~c
/* Ghidra 重建 C，不是 Nintendo 源码 */
puVar1 = PTR_DAT_02710798;
lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
nn::crypto::GenerateCryptographicallyRandomBytes(local_208, 4);
FUN_01524cf0(lVar2, local_208[0]);
~~~

这里 **lVar2 = status**；经过调用参数传递后 **FUN_01524CF0(status, rawID32)** 执行写入。在新建身份初始化的这条路径下，随机源只写入四个字节；不能据此推断游戏每次启动都会重新随机生成训练家 ID。

## 4. ELF 内的 ID32 对象偏移与完整结构交叉证明

### 4.1 ID32 写入 / 读取

~~~c
// Sword Ghidra: 0x01524CF0，main+0x01424CF0
void SetRawID32(long status, uint32_t id32) {
    *(uint32_t *)(status + 0x100) = id32;
}

// Sword Ghidra: 0x01524D00，main+0x01424D00
uint32_t GetRawID32(long status) {
    return *(uint32_t *)(status + 0x100);
}

// Sword Ghidra: 0x01524D10，main+0x01424D10
uint32_t GetVisibleTID6(long status) {
    return *(uint32_t *)(status + 0x100) % 1000000;
}
~~~

上述 C 为按 Ghidra C 重命名后的语义伪代码。Shield 对应三个 Ghidra VA 依次为 0x01524D20、0x01524D30、0x01524D40。

PKHeX 的 **MyStatus8.ID32** 定义在 MyStatus+0xA0；**TID16** 位于 +0xA0，**SID16** 位于 +0xA2。于是：

~~~text
status+0x100 = status+0x60+0xA0 = MyStatusData+0xA0 = ID32
~~~

### 4.2 MyStatus 起点的原生 getter

剑版 Ghidra **0x01524DF0**：

~~~c
long FUN_01524df0(long status) {
    return status + 0x60;
}
~~~

这是运行时对象包含一个以 +0x60 起始的数据区域的直接静态证据；该区域与 PKHeX/SysBot MyStatus 的对应关系由多个字段偏移同时验证。

### 4.3 Watt 交叉验证（不是只靠 ID32 推算）

剑版 Ghidra **0x01524E10**：

~~~c
uint FUN_01524e10(long status, uint amount) {
    if (amount > 9999999)
        amount = 9999999;
    *(uint32_t *)(status + 0x130) = amount;
    return amount;
}
~~~

PKHeX **MyStatus8.Watt** 位于 +0xD0，且最大值同为 9,999,999，故 **0x60+0xD0=0x130**。这是与原生功能行为相吻合的第二个独立字段。

### 4.4 MyStatus 和资料对象（profile）不能混为一谈

Sword 生成器另外获取 **profile = read64(manager+0x288)**，通过 Ghidra **FUN_014FBA00** 获取模板数据，临时构造资料，在 **FUN_014FBA10(profile, local_208, 0)** 中执行：

~~~c
memcpy((void *)(profile + 0x60), local_208, 0x1c4);
~~~

Ghidra 生成器中的 **local_1ec = FUN_01524D10(status)** 位于 **local_208+0x1C**，因此新建身份这条路径构造的六位 ID 在 profile 里的回写偏移为 **profile+0x60+0x1C=profile+0x7C**。

**profile+0x7C 是另一对象中的资料/显示缓存，不是原始 ID32 的 status+0x100，更不能当作固定 heap+0x45068FB8 的别名。** 这一缓存偏移是根据本次 Ghidra 栈布局和复制关系静态推导，独立生命周期/保存持久化仍未由运行时确认。

## 5. Heap 数据与 Main 动态对象双地址对照表

基础常量（SysBot.NET v1.3.2）：

~~~csharp
public const uint TrainerDataOffset = 0x45068F18; // Heap-relative
public const uint TrainerID32Offset = TrainerDataOffset + 0xA0; // 0x45068FB8
public const int TrainerDataLength = 0x110;
~~~

| 字段 | MyStatus 内偏移 | 推导的 Status 对象偏移 | SysBot Heap-relative | 数据长度 | 证据 |
|---|---|---|---|---|---|
| Status 对象起点 | N/A | +0x00 | **0x45068EB8（推导）** | 对象，不固定读取整块 | MyStatus heap-offset - 0x60 |
| MyStatus 数据起点 | +0x00 | +0x60 | **0x45068F18** | SysBot 读取 0x110 | SysBot + 原生 getter |
| 原始 ID32 | +0xA0 | +0x100 | **0x45068FB8** | 4 | PKHeX + ELF setter/getter |
| TID16 | +0xA0 | +0x100 | 0x45068FB8 | 2 | ID32 小端低 16 位 |
| SID16 | +0xA2 | +0x102 | 0x45068FBA | 2 | ID32 小端高 16 位 |
| Game | +0xA4 | +0x104 | 0x45068FBC | 1 | PKHeX |
| Gender | +0xA5 | +0x105 | 0x45068FBD | 1 | PKHeX |
| Language | +0xA7 | +0x107 | 0x45068FBF | 1 | PKHeX |
| OT（UTF-16，最大 0x1A 字节） | +0xB0 | +0x110 | 0x45068FC8 | 0x1A | PKHeX |
| Watt | +0xD0 | +0x130 | **0x45068FE8** | 4 | PKHeX + 原生 9,999,999 上限逻辑 |

- **CONFIRMED（代码层）**：SysBot 的 Heap API 地址类型；PKHeX 的 MyStatus 字段偏移；Sword/Shield 原生 setter/read/display 函数与原生全局管理器访问。
- **CORROBORATED（结构对账）**：MyStatusData = status+0x60；ID32 和 Watt 均满足两个独立结构布局关系。
- **RUNTIME_PENDING**：status 的 Heap-relative 偏移实际是否等于 0x45068EB8；profile+0x7C 的缓存生存期；保存/重启后更新时序。

### 5.1 运行时应该满足的等式

~~~text
MainBase + 0x02610798 = 全局指针槽位地址

A = read64(MainBase + 0x02610798)
M = read64(A)
S = read64(M + 0x1E8)

Expected: S                  == HeapBase + 0x45068EB8
Expected: S + 0x60           == HeapBase + 0x45068F18
Expected: S + 0x100          == HeapBase + 0x45068FB8
Expected: read32(S+0x100)   == read32(HeapBase+0x45068FB8)

P = read64(M + 0x288)
Candidate: read32(P + 0x7C) == read32(S+0x100) % 1_000_000
// 最后一行应只在新建身份资料构造完成后验证
~~~

任一等式不成立，都**不能**直接认定该静态 heap 偏移等于对象偏移；应保留 MainBase/HeapBase、对象指针、读取时机、游戏版本和设备信息，分析是否为不同对象副本、不同生命周期或对应关系有误。

## 6. SysBot.NET 读接口证明：偏移类型是 Heap，不是 Main

SysBot.NET 的 **GetFakeTrainerSAV()** 调用：

~~~csharp
var read = await Connection.ReadBytesAsync(
    TrainerDataOffset, TrainerDataLength, token);
read.CopyTo(sav.MyStatus.Data);
~~~

SwitchSocketAsync 与 SwitchUSBAsync 都区分：

~~~csharp
ReadBytesAsync(offset, length, token);          // Heap-relative
ReadBytesMainAsync(offset, length, token);      // Main NSO-relative
ReadBytesAbsoluteAsync(offset, length, token);  // Absolute process VA
~~~

底层命令分别为 **peek**、**peekMain**、**peekAbsolute**。因此 **heap+0x45068FB8** 不能通过 **ReadBytesMainAsync(0x45068FB8)** 访问，也不能通过绝对地址 API 直接拿 0x45068FB8 当作 VA。

源：
- [SysBot PokeDataOffsetsSWSH.cs](https://github.com/kwsch/SysBot.NET/blob/master/SysBot.Pokemon/SWSH/Vision/PokeDataOffsetsSWSH.cs)
- [SysBot PokeRoutineExecutor8SWSH.cs](https://github.com/kwsch/SysBot.NET/blob/master/SysBot.Pokemon/SWSH/PokeRoutineExecutor8SWSH.cs)
- [SysBot SwitchSocketAsync.cs](https://github.com/kwsch/SysBot.NET/blob/master/SysBot.Base/Connection/Switch/Wireless/SwitchSocketAsync.cs)
- [SysBot SwitchUSBAsync.cs](https://github.com/kwsch/SysBot.NET/blob/master/SysBot.Base/Connection/Switch/USB/SwitchUSBAsync.cs)
- [PKHeX MyStatus8.cs](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/SWSH/MyStatus8.cs)

## 7. 只读运行时核验（可放入已有 SysBot 执行器方法）

以下为**只读**诊断例程，假设当前类内已有 **SwitchConnection** 和 **token** 可用。运行时须在剑/盾 v1.3.2 已进入游戏、相关对象初始化完毕后执行。先读指针和验证数据，再决定是否进一步跟踪；**不执行 poke、不修改 ID 或存档**。

~~~csharp
using System;
using System.Buffers.Binary;
using System.Threading;
using System.Threading.Tasks;

// 在具有 SwitchConnection 的 executor 中调用
public async Task AuditTrainerIdHeapAndMain(CancellationToken token)
{
    const ulong MainSlotRva = 0x02610798;
    const uint MyStatusHeapOffset = 0x45068F18;
    const uint Id32HeapOffset = 0x45068FB8;
    const ulong ExpectedStatusHeapOffset = 0x45068EB8;

    ulong mainBase = await SwitchConnection.GetMainNsoBaseAsync(token);
    ulong heapBase = await SwitchConnection.GetHeapBaseAsync(token);
    if (mainBase == 0 || heapBase == 0)
        throw new InvalidOperationException("未取得 main / heap 基址");

    async Task<ulong> ReadAbsoluteU64(ulong absolute)
    {
        var bytes = await SwitchConnection.ReadBytesAbsoluteAsync(
            absolute, 8, token);
        if (bytes.Length != 8) throw new InvalidOperationException("read64 不完整");
        return BinaryPrimitives.ReadUInt64LittleEndian(bytes);
    }

    async Task<uint> ReadAbsoluteU32(ulong absolute)
    {
        var bytes = await SwitchConnection.ReadBytesAbsoluteAsync(
            absolute, 4, token);
        if (bytes.Length != 4) throw new InvalidOperationException("read32 不完整");
        return BinaryPrimitives.ReadUInt32LittleEndian(bytes);
    }

    var slotBytes = await SwitchConnection.ReadBytesMainAsync(
        MainSlotRva, 8, token);
    if (slotBytes.Length != 8) throw new InvalidOperationException("main 指针槽位读取失败");

    ulong holder = BinaryPrimitives.ReadUInt64LittleEndian(slotBytes);
    if (holder == 0) throw new InvalidOperationException("main 槽位为 null");

    ulong manager = await ReadAbsoluteU64(holder);
    if (manager == 0) throw new InvalidOperationException("manager 为 null");

    ulong status = await ReadAbsoluteU64(manager + 0x1E8);
    if (status == 0) throw new InvalidOperationException("status 未初始化");

    uint idFromStatus = await ReadAbsoluteU32(status + 0x100);

    var idHeapBytes = await SwitchConnection.ReadBytesAsync(
        Id32HeapOffset, 4, token);
    if (idHeapBytes.Length != 4) throw new InvalidOperationException("heap ID32 读取失败");

    uint idFromHeap = BinaryPrimitives.ReadUInt32LittleEndian(idHeapBytes);
    bool statusInHeap = status >= heapBase;
    ulong statusHeapOffset = statusInHeap ? status - heapBase : 0;

    Console.WriteLine($"MainBase:            0x{mainBase:X16}");
    Console.WriteLine($"HeapBase:            0x{heapBase:X16}");
    Console.WriteLine($"Main slot absolute:  0x{mainBase + MainSlotRva:X16}");
    Console.WriteLine($"Slot holder:         0x{holder:X16}");
    Console.WriteLine($"Manager:             0x{manager:X16}");
    Console.WriteLine($"Status:              0x{status:X16}");
    Console.WriteLine($"Status heap offset:  {(statusInHeap ? $"0x{statusHeapOffset:X}" : "OUTSIDE_HEAP")}");
    Console.WriteLine($"MyStatus pointer:    0x{status + 0x60:X16}");
    Console.WriteLine($"Expected MyStatus:   0x{heapBase + MyStatusHeapOffset:X16}");
    Console.WriteLine($"ID32 pointer:        0x{status + 0x100:X16}");
    Console.WriteLine($"Expected ID32:       0x{heapBase + Id32HeapOffset:X16}");
    Console.WriteLine($"Main-chain ID32:     {idFromStatus}");
    Console.WriteLine($"Heap-fixed ID32:     {idFromHeap}");
    Console.WriteLine($"Display TID6:        {idFromStatus % 1_000_000:D6}");
    Console.WriteLine($"ID32 SID7 quotient:  {idFromStatus / 1_000_000}");
    Console.WriteLine($"TID16:               {(ushort)idFromStatus}");
    Console.WriteLine($"SID16:               {(ushort)(idFromStatus >> 16)}");

    bool pointerMatches =
        statusInHeap &&
        statusHeapOffset == ExpectedStatusHeapOffset &&
        status + 0x60 == heapBase + MyStatusHeapOffset &&
        status + 0x100 == heapBase + Id32HeapOffset;
    bool rawIdMatches = idFromStatus == idFromHeap;

    Console.WriteLine($"Pointer mapping:     {(pointerMatches ? "PASS" : "MISMATCH")}");
    Console.WriteLine($"ID32 byte parity:    {(rawIdMatches ? "PASS" : "MISMATCH")}");

    // 可选的 profile/cache 检查：仅在身份初始化完成后才有意义
    ulong profile = await ReadAbsoluteU64(manager + 0x288);
    Console.WriteLine($"Profile:             0x{profile:X16}");
    if (profile != 0)
    {
        uint cachedDisplay = await ReadAbsoluteU32(profile + 0x7C);
        Console.WriteLine($"Profile cached TID6: {cachedDisplay}");
        Console.WriteLine($"Cached six-digit match: " +
            (cachedDisplay == idFromStatus % 1_000_000 ? "PASS" : "MISMATCH/NOT_READY"));
    }
}
~~~

**诊断代码特意不把 MISMATCH 当作断言崩溃**，因为该差异本身就是需要记录的证据；读取失败、空指针则中止。若连接方式不能公开 main/heap 基址，则无法执行这套完全相同的绝对地址对账，需适配当前 botbase；不能凭猜测填充基址。

## 8. 验收顺序和结论边界

1. 确认 Title ID 是 Sword/Shield，并验证游戏版本严格为 v1.3.2。不要混用其他补丁或版本偏移。
2. 在角色数据加载完成后读 main+0x02610798；记录 holder、manager、status；确认 holder 和 status 都非零。
3. 读取两个基址，计算 status-HeapBase，和推导的 0x45068EB8 比较。
4. 从原生 main 指针链和固定 heap 偏移两条路径各读四字节 ID32；逐字节、数值同时比对。
5. 对比 ID32 % 1000000 与游戏显示的六位训练家 ID；必要时记录十六进制小端字节。
6. 只在新建身份资料构造完成后读取 profile+0x7C；重新进入游戏或重启后复查是否仍有效。
7. 如需证明 **原生运行时写入者**，在新建存档流程中对 ID setter（Sword main+0x01424CF0；Shield main+0x01424D20）只读观察 X0/X1 与 status 指针、随机数输出与回写；不要把读回相等误报成已证明保存持久化。

### 证据判定

- **STATIC_CONFIRMED：** 全局入口及指针访存指令、原生 ID32 setter/getter、显示六位取模、SysBot heap API 语义、PKHeX 数据布局、Watt 边界写入。
- **STRUCTURAL_CORROBORATION：** Status+0x60 对应 MyStatus 数据区、原始 ID32/性别/语言/OT/Watt 的多字段偏移关系。
- **RUNTIME_PENDING：** 实机 status heap 偏移为 0x45068EB8；两种读取法的 ID32 一致；Profile 缓存与存档重启行为。
- **NOT_CLAIMED：** main 中存在固定 ID32 绝对指针；不同进程/启动之间 status 的绝对地址恒定；普通启动重新生成 ID；修改 heap 数据保证正常存档持久化。

## 9. 静态证据入口

- [Sword Ghidra 原始生成器 C](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01006f50.c)
- [Sword Ghidra 原始 ID32 setter C](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524cf0.c)
- [Sword Ghidra 原始六位 ID C](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524d10.c)
- [Sword Ghidra 原始 MyStatus 起点 getter](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524df0.c)
- [Sword Ghidra 原始 Watt setter](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/01524e10.c)
- [Sword Ghidra 资料结构拷贝](../../../derived/v1.3.2/Ghidra_12.2_Run_42771375134/sword/c/01/014fba10.c)
- 双版 Shield C/ARM64、真实 BL 目标及按原始 ELF SHA 校验的导出结果：[[29-剑盾训练家ID-双版ARM64指令与盾版C]]。

> 上述原始 Ghidra C 链接相对于本篇文档的目录，使用 ../../../derived/ 回到仓库根目录。
