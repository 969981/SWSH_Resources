/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f16d0; name: FUN_007f16d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f16d0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  string sVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  string *psVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte *pbVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  byte local_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  void *local_88;
  undefined8 *local_80;
  ulong local_78;
  void *local_70;
  string local_68;
  byte bStack_67;
  undefined6 uStack_66;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  
  uVar6 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar6;
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_2 + 0x28);
  param_4[3] = param_3;
  pbVar7 = (byte *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),param_3[1]);
  if ((*pbVar7 & 1) == 0) {
    bVar13 = *pbVar7 >> 1;
    pbVar17 = (byte *)*param_3;
    bVar16 = *pbVar17;
  }
  else {
    bVar13 = (byte)*(undefined8 *)(pbVar7 + 8);
    pbVar17 = (byte *)*param_3;
    bVar16 = *pbVar17;
  }
  if ((bVar16 & 1) == 0) {
    bVar16 = bVar16 >> 1;
  }
  else {
    bVar16 = (byte)*(undefined8 *)((long)pbVar17 + 8);
  }
  std::string::resize((ulong)pbVar7,bVar13 - bVar16);
  pbVar14 = (byte *)*param_4;
  pbVar17 = *(byte **)(pbVar14 + 0x10);
  if ((*pbVar14 & 1) == 0) {
    pbVar17 = pbVar14 + 1;
  }
  std::string::append((char *)pbVar7,(ulong)pbVar17);
  param_4[1] = pbVar7;
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pbVar7,param_2);
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    param_4[4] = 0;
  }
  else {
    lVar15 = *(long *)(param_2 + 0x20);
    if (lVar15 == 0) {
      lVar15 = *(long *)(*(long *)PTR_DAT_02716e68 + 0x20);
    }
    FUN_007fda80(param_1,param_4[1],param_4[1],lVar15,param_4);
  }
  uVar8 = FUN_007f02f0(param_1,param_4[1],param_3[3],*param_4,param_2,5,param_4);
  uVar9 = FUN_007f1b30(*(undefined8 *)(param_1 + 0x58),param_3,*param_4,5,param_4);
  if (((uVar8 & 1) == 0) && ((uVar9 & 1) != 0)) {
    local_60 = 0;
    uStack_5c = 0;
    local_58 = (undefined1 *)0x0;
    local_68 = (string)0x0;
    bStack_67 = 0;
    uStack_66 = 0;
    lVar15 = param_3[3];
    if (lVar15 == 0) {
      lVar15 = *(long *)(param_1 + 0x50);
    }
    std::string::operator=(&local_68,*(string **)(lVar15 + 8));
    uVar8 = (ulong)((byte)local_68 >> 1);
    if (((byte)local_68 & 1) != 0) {
      uVar8 = CONCAT44(uStack_5c,local_60);
    }
    if (uVar8 == 0) {
      std::string::assign((char *)&local_68);
    }
    else {
      std::operator+("\"",&local_68);
      psVar10 = (string *)std::string::append((char *)&local_80);
      uVar6 = *(undefined8 *)(psVar10 + 1);
      puVar2 = *(undefined1 **)(psVar10 + 0x10);
      sVar3 = *psVar10;
      uStack_90 = (undefined7)((ulong)*(undefined8 *)(psVar10 + 8) >> 8);
      local_98 = (byte)uVar6;
      uStack_97 = (undefined6)((ulong)uVar6 >> 8);
      uStack_91 = (undefined1)((ulong)uVar6 >> 0x38);
      *(undefined8 *)psVar10 = 0;
      *(undefined8 *)(psVar10 + 8) = 0;
      *(undefined8 *)(psVar10 + 0x10) = 0;
      if (((byte)local_68 & 1) != 0) {
        *local_58 = 0;
        local_60 = 0;
        uStack_5c = 0;
        if (((byte)local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      uVar5 = uStack_90;
      uVar4 = uStack_91;
      uStack_66 = uStack_97;
      bStack_67 = local_98;
      local_98 = 0;
      uStack_97 = 0;
      uStack_91 = 0;
      uStack_90 = 0;
      uStack_5c = (undefined4)((uint7)uVar5 >> 0x18);
      local_60 = CONCAT31((int3)uVar5,uVar4);
      local_68 = sVar3;
      local_58 = puVar2;
      if (((byte)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    uVar6 = param_4[1];
    std::operator+("Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of it.  Therefore, \""
                   ,(string *)*param_4);
    puVar11 = (ulong *)std::string::append((char *)local_f8);
    local_e0 = *puVar11;
    local_d8 = puVar11[1];
    local_d0 = (void *)puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    puVar2 = (undefined1 *)((ulong)&local_68 | 1);
    if (((byte)local_68 & 1) != 0) {
      puVar2 = local_58;
    }
    puVar11 = (ulong *)std::string::append((char *)&local_e0,(ulong)puVar2);
    local_c8 = *puVar11;
    local_c0 = puVar11[1];
    local_b8 = (void *)puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    puVar11 = (ulong *)std::string::append((char *)&local_c8);
    local_b0 = *puVar11;
    local_a8 = puVar11[1];
    local_a0 = (void *)puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    pbVar17 = (byte *)*param_3;
    pbVar7 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar7 = pbVar17 + 1;
    }
    puVar12 = (undefined8 *)std::string::append((char *)&local_b0,(ulong)pbVar7);
    uVar1 = *puVar12;
    local_88 = (void *)puVar12[2];
    uStack_90 = (undefined7)puVar12[1];
    uStack_89 = (undefined1)((ulong)puVar12[1] >> 0x38);
    local_98 = (byte)uVar1;
    uStack_97 = (undefined6)((ulong)uVar1 >> 8);
    uStack_91 = (undefined1)((ulong)uVar1 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    puVar11 = (ulong *)std::string::append((char *)&local_98);
    local_80 = (undefined8 *)*puVar11;
    local_78 = puVar11[1];
    local_70 = (void *)puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    FUN_007eaaf0(param_1,uVar6,param_2,0,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    if (((byte)local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  uVar6 = param_4[3];
  local_60 = *(undefined4 *)(param_4 + 2);
  local_68 = SUB81(uVar6,0);
  bStack_67 = (byte)((ulong)uVar6 >> 8);
  uStack_66 = (undefined6)((ulong)uVar6 >> 0x10);
  local_80 = param_4;
  FUN_007e17f0(*(long *)(param_1 + 0x58) + 0xa0,&local_68,&local_80);
  return;
}


