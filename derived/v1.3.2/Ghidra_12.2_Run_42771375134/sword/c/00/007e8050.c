/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8050; name: FUN_007e8050
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007e8050(undefined8 *param_1,uint param_2,int param_3,char *param_4,char *param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  size_t sVar4;
  undefined8 *puVar6;
  byte *pbVar5;
  byte *pbVar8;
  byte *pbVar7;
  uint uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  byte local_328 [8];
  uint local_320;
  void *local_318;
  ulong local_310;
  uint local_308;
  void *local_300;
  void *local_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  undefined1 *puStack_2d0;
  ulong local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  void *local_2a0;
  byte *local_298;
  byte *local_290;
  undefined8 uStack_288;
  undefined2 local_280;
  char local_27e;
  string local_278 [16];
  void *local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  char *local_1a0;
  undefined4 local_198;
  undefined1 auStack_194 [36];
  byte *local_170;
  uint local_168;
  undefined1 *local_140;
  uint local_138;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_e0;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  undefined1 auStack_68 [8];
  
  uVar10 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar9 = (uint)((ulong)param_2 << 1);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (0xffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (0x16 < uVar9) {
    uVar12 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = operator_new(uVar12);
    local_80 = uVar12 | 1;
    local_78 = uVar10;
    local_70 = pvVar11;
LAB_007e80d8:
                    /* WARNING: Subroutine does not return */
    memset(pvVar11,0x20,uVar10);
  }
  local_80 = (ulong)(byte)(param_2 << 2);
  pvVar11 = (void *)((ulong)&local_80 | 1);
  if (param_2 != 0) goto LAB_007e80d8;
  *(undefined1 *)((long)pvVar11 + uVar10) = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (undefined1 *)0x0;
  if ((*(int *)((long)param_1 + 0x3c) == 0xb) &&
     (*(char *)(*(long *)(param_1[0xd] + 0x20) + 0x53) != '\0')) {
    FUN_007e8da0(&local_310,*(undefined8 *)(param_1[0xd] + 0x30));
    local_2e0 = (void *)((ulong)&local_310 | 1);
    local_2d8 = (uint)((byte)local_310 >> 1);
    if ((local_310 & 1) != 0) {
      local_2d8 = local_308;
      local_2e0 = local_300;
    }
    FUN_007e8da0(&local_e0,*(long *)(param_1[0xd] + 0x30) + 0x90);
    local_c8 = (void *)((ulong)&local_e0 | 1);
    local_110 = (void *)0x0;
    local_140 = (undefined1 *)0x0;
    uVar9 = (uint)((byte)local_e0 >> 1);
    if ((local_e0 & 1) != 0) {
      uVar9 = (uint)local_d8;
      local_c8 = local_d0;
    }
    local_108 = CONCAT44(local_108._4_4_,0xffffffff);
    local_138 = 0xffffffff;
    local_c0 = (void *)CONCAT44(local_c0._4_4_,uVar9);
    local_168 = 0xffffffff;
    local_198 = 0xffffffff;
    local_1c8 = 0xffffffff;
    local_1f8 = 0xffffffff;
    local_228 = 0xffffffff;
    local_258 = 0xffffffff;
    local_170 = (byte *)0x0;
    local_1a0 = (char *)0x0;
    local_1d0 = 0;
    local_200 = 0;
    local_230 = 0;
    local_260 = 0;
    FUN_00863060(&local_98,"map<$0, $1>",&local_2e0,&local_c8,&local_110,&local_140,&local_170,
                 &local_1a0,&local_1d0,&local_200,&local_230,&local_260);
    if (((byte)local_e0 & 1) == 0) {
      if ((local_310 & 1) != 0) goto LAB_007e87e8;
    }
    else {
      operator_delete(local_d0);
      if (((byte)local_310 & 1) != 0) {
LAB_007e87e8:
        operator_delete(local_300);
      }
    }
  }
  else {
    FUN_007e8da0(&local_2e0,param_1);
    if (((ulong)local_98 & 1) != 0) {
      *local_88 = 0;
      local_90 = 0;
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    }
    local_90 = CONCAT44(uStack_2d4,local_2d8);
    local_88 = puStack_2d0;
    local_98 = local_2e0;
  }
  local_e0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = 0;
  if (param_3 == 0) {
    local_d0 = (void *)0x0;
    local_d8 = 0;
    local_e0 = 0;
    if ((*(int *)((long)param_1 + 0x3c) != 0xb) ||
       (*(char *)(*(long *)(param_1[0xd] + 0x20) + 0x53) == '\0')) {
      std::string::assign((char *)&local_e0);
      std::string::push_back((char)auStack_68 + -0x78);
    }
  }
  local_290 = (byte *)0x0;
  uStack_288 = 0;
  local_2a0 = (void *)0x0;
  local_298 = (byte *)0x0;
  local_2c8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2c0 = 0;
  local_2b8 = (void *)0x0;
  local_280 = *(undefined2 *)param_5;
  local_27e = param_5[2];
  std::string::string(local_278,(string *)&local_80);
  bVar3 = 0;
  if (*param_5 != '\0') {
    local_c0 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_c8 = (void *)0x0;
    FUN_007e9b10(param_1,&local_c8);
    bVar3 = FUN_007e9420(param_1[6],&local_c8,&local_2d8);
    if (local_c8 != (void *)0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
    bVar3 = bVar3 & 1;
  }
  local_2e0 = (void *)CONCAT71(local_2e0._1_7_,bVar3);
  FUN_007e68d0(&local_2e0,param_4);
  local_c8 = (void *)((ulong)&local_80 | 1);
  uVar9 = (uint)((byte)local_80._0_1_ >> 1);
  if ((local_80 & 1) != 0) {
    uVar9 = (uint)local_78;
    local_c8 = local_70;
  }
  local_110 = (void *)((ulong)&local_e0 | 1);
  uVar1 = (uint)((byte)local_e0 >> 1);
  if ((local_e0 & 1) != 0) {
    uVar1 = (uint)local_d8;
    local_110 = local_d0;
  }
  local_140 = (undefined1 *)((ulong)&local_98 | 1);
  local_138 = (uint)((byte)local_98 >> 1);
  if (((ulong)local_98 & 1) != 0) {
    local_138 = (uint)local_90;
    local_140 = local_88;
  }
  if (*(int *)((long)param_1 + 0x3c) == 10) {
    puVar6 = (undefined8 *)param_1[0xd];
  }
  else {
    puVar6 = param_1;
  }
  pbVar5 = (byte *)*puVar6;
  local_170 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    local_170 = pbVar5 + 1;
  }
  local_168 = (uint)(*pbVar5 >> 1);
  if ((*pbVar5 & 1) != 0) {
    local_168 = (uint)*(undefined8 *)(pbVar5 + 8);
  }
  local_108._0_4_ = uVar1;
  local_c0._0_4_ = uVar9;
  local_1a0 = (char *)FUN_007ff7d0(*(undefined4 *)(param_1 + 7),auStack_194);
  sVar4 = strlen(local_1a0);
  local_198 = (undefined4)sVar4;
  local_1d0 = 0;
  local_1c8 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_230 = 0;
  local_228 = 0xffffffff;
  local_260 = 0;
  local_258 = 0xffffffff;
  local_310 = 0;
  local_308 = 0xffffffff;
  FUN_00863060(param_4,"$0$1$2 $3 = $4",&local_c8,&local_110,&local_140,&local_170,&local_1a0,
               &local_1d0,&local_200,&local_230,&local_260,&local_310);
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = false;
  }
  else {
    FUN_007e4b60(local_328,param_1,1);
    local_110 = (void *)0x0;
    bVar2 = (local_328[0] & 1) != 0;
    local_108 = CONCAT44(local_108._4_4_,0xffffffff);
    local_c8 = (void *)((ulong)local_328 | 1);
    if (bVar2) {
      local_c8 = local_318;
    }
    local_140 = (undefined1 *)0x0;
    local_138 = 0xffffffff;
    local_170 = (byte *)0x0;
    local_168 = 0xffffffff;
    local_1a0 = (char *)0x0;
    local_198 = 0xffffffff;
    local_1d0 = 0;
    local_c0._0_4_ = (uint)(local_328[0] >> 1);
    if (bVar2) {
      local_c0._0_4_ = local_320;
    }
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_1c8 = 0xffffffff;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    local_310 = 0;
    local_308 = 0xffffffff;
    FUN_00863060(param_4," [default = $0",&local_c8,&local_110,&local_140,&local_170,&local_1a0,
                 &local_1d0,&local_200,&local_230,&local_260,&local_310);
    if ((local_328[0] & 1) != 0) {
      operator_delete(local_318);
    }
    bVar2 = true;
  }
  local_108 = 0;
  local_100 = (void *)0x0;
  local_110 = (void *)0x0;
  uVar10 = FUN_007e8e80(0,param_1[0xf],&local_110);
  if ((uVar10 & 1) == 0) {
    if (!bVar2) goto LAB_007e85f8;
  }
  else {
    std::string::append(param_4);
    pvVar11 = (void *)((ulong)&local_110 | 1);
    if (((ulong)local_110 & 1) != 0) {
      pvVar11 = local_100;
    }
    std::string::append(param_4,(ulong)pvVar11);
  }
  std::string::append(param_4);
LAB_007e85f8:
  if (*(int *)((long)param_1 + 0x3c) == 10) {
    if (param_5[1] == '\0') {
      FUN_007e70b0(param_1[0xd],0,param_4,param_5,0);
    }
    else {
      std::string::append(param_4);
    }
  }
  else {
    std::string::append(param_4);
  }
  if ((char)local_2e0 != '\0') {
    uVar10 = local_2b0 >> 1 & 0x7f;
    if ((local_2b0 & 1) != 0) {
      uVar10 = local_2a8;
    }
    if (uVar10 != 0) {
      FUN_007f7ff0(&local_c8,&local_2e0,&local_2b0);
      pvVar11 = (void *)((ulong)&local_c8 | 1);
      if (((ulong)local_c8 & 1) != 0) {
        pvVar11 = local_b8;
      }
      std::string::append(param_4,(ulong)pvVar11);
      if (((ulong)local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
    }
  }
  if (((ulong)local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if (((byte)local_278[0] & 1) == 0) {
    pbVar5 = local_298;
  }
  else {
    operator_delete(local_268);
    pbVar5 = local_298;
  }
  local_298 = pbVar5;
  if (pbVar5 != (byte *)0x0) {
    if (local_290 != pbVar5) {
      pbVar8 = local_290;
      do {
        pbVar7 = pbVar8 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + -8));
        }
        pbVar8 = pbVar7;
      } while (pbVar5 != pbVar7);
    }
    local_290 = pbVar5;
    operator_delete(local_298);
  }
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
  if ((local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  return;
}


