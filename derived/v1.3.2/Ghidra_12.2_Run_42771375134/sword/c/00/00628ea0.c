/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00628ea0; name: FUN_00628ea0
 */


void FUN_00628ea0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  
  uVar5 = *(undefined2 *)(param_1 + 0x1d8);
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_00602580(uVar5);
    return;
  }
  sVar6 = *(short *)(param_1 + 0x224);
  if (sVar6 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x1c8);
  }
  else {
    sVar7 = *(short *)(param_1 + 0x222);
    if (sVar7 == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x1d0);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1c8);
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar12 = (uint)sVar7;
      uVar9 = -uVar12;
      if (-1 < sVar7) {
        uVar9 = uVar12;
      }
      uVar8 = (uVar1 & 0xffff) * uVar9;
      uVar9 = (uVar1 >> 0x10) * uVar9;
      uVar1 = uVar9 * 0x10000 | 0x2000;
      uVar9 = uVar9 >> 0x10;
      if (CARRY4(uVar1,uVar8)) {
        uVar9 = uVar9 + 1;
      }
      iVar3 = (int)(CONCAT44(uVar9,uVar1 + uVar8) >> 0xe);
      iVar2 = -iVar3;
      if (-1 < (int)(uVar4 ^ uVar12)) {
        iVar2 = iVar3;
      }
      uVar4 = *(uint *)(param_1 + 0x1d0);
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar12 = (uint)sVar6;
      uVar9 = -uVar12;
      if (-1 < sVar6) {
        uVar9 = uVar12;
      }
      uVar8 = (uVar1 & 0xffff) * uVar9;
      uVar9 = (uVar1 >> 0x10) * uVar9;
      uVar1 = uVar9 * 0x10000 | 0x2000;
      uVar9 = uVar9 >> 0x10;
      if (CARRY4(uVar1,uVar8)) {
        uVar9 = uVar9 + 1;
      }
      iVar10 = (int)(CONCAT44(uVar9,uVar1 + uVar8) >> 0xe);
      iVar3 = -iVar10;
      if (-1 < (int)(uVar4 ^ uVar12)) {
        iVar3 = iVar10;
      }
      uVar11 = FUN_00602370((long)iVar2,(long)iVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = uVar11;
  FUN_00602580(uVar5);
  return;
}


