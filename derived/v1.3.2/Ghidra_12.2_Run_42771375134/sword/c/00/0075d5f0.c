/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075d5f0; name: FUN_0075d5f0
 */


void FUN_0075d5f0(undefined8 *param_1,undefined8 *param_2,long *param_3,byte *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte local_50 [32];
  
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = 0;
  local_50[0x1c] = 0;
  local_50[0x1d] = 0;
  local_50[0x1e] = 0;
  local_50[0x1f] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  local_50[0x15] = 0;
  local_50[0x16] = 0;
  local_50[0x17] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  bVar3 = *param_4;
  uVar12 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar12 = *(ulong *)(param_4 + 8);
  }
  if (uVar12 == 0) {
    lVar1 = *param_3;
    lVar11 = param_3[1];
    lVar2 = lVar11 + lVar1;
    uVar12 = 0;
    if (lVar1 != 0) {
      uVar13 = 0;
      do {
        local_50[uVar13] = *(byte *)(lVar11 + uVar13);
        uVar12 = uVar13 + 1;
        if (0x1b < uVar12) break;
        bVar5 = lVar1 - 1U != uVar13;
        uVar13 = uVar12;
      } while (bVar5);
      lVar11 = lVar11 + uVar12;
    }
    uVar13 = uVar12;
    if (lVar11 != lVar2) {
      uVar13 = uVar12 + 3;
      local_50[uVar12 + 2] = 0x2e;
      (local_50 + uVar12)[0] = 0x2e;
      (local_50 + uVar12)[1] = 0x2e;
    }
    param_4 = local_50;
    param_4[uVar13] = 0;
  }
  else if ((bVar3 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  else {
    param_4 = *(byte **)(param_4 + 0x10);
  }
  uVar9 = *param_2;
  lVar2 = *param_3;
  lVar11 = param_3[1];
  if ((*PTR_DAT_02715fb8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_02715fb8,lVar11,lVar2);
    puVar4 = PTR_DAT_02715fc0;
    if (iVar8 != 0) {
      *(undefined8 *)PTR_DAT_02715fc0 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *puVar4 = 4;
      *(undefined2 *)(puVar4 + 1) = 0x7462;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      puVar4[0x1a] = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined2 *)(puVar4 + 0x18) = 0x7402;
      puVar4[3] = 0;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined2 *)(puVar4 + 0x30) = 0x6202;
      puVar4[0x32] = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(undefined8 *)(puVar4 + 0x40) = 0;
      FUN_001001c0(PTR_LAB_02715fc8,puVar4,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715fb8);
    }
  }
  if ((PTR_DAT_02715fc0[(long)param_5 * 0x18] & 1) == 0) {
    pbVar10 = PTR_DAT_02715fc0 + (long)param_5 * 0x18 + 1;
  }
  else {
    pbVar10 = *(byte **)(PTR_DAT_02715fc0 + (long)param_5 * 0x18 + 0x10);
  }
  uVar6 = FUN_0175e160(uVar9,lVar11,lVar2,param_4,pbVar10);
  uVar9 = *param_2;
  uVar7 = FUN_0175eed0(uVar9,0xffffffff);
  *param_1 = uVar9;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined8 *)((long)param_1 + 0xc) = 0x100000001;
  *(undefined4 *)((long)param_1 + 0x14) = uVar6;
  return;
}


