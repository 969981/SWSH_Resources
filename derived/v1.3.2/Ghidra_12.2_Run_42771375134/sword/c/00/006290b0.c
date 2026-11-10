/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006290b0; name: FUN_006290b0
 */


void FUN_006290b0(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if (*(long *)(param_1 + 0x1e0) == 0) {
    sVar5 = *(short *)(param_1 + 0x224);
    if (sVar5 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x1c8);
    }
    else {
      sVar6 = *(short *)(param_1 + 0x222);
      if (sVar6 == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x1d0);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x1c8);
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar11 = (uint)sVar6;
        uVar8 = -uVar11;
        if (-1 < sVar6) {
          uVar8 = uVar11;
        }
        uVar7 = (uVar1 & 0xffff) * uVar8;
        uVar8 = (uVar1 >> 0x10) * uVar8;
        uVar1 = uVar8 * 0x10000 | 0x2000;
        uVar8 = uVar8 >> 0x10;
        if (CARRY4(uVar1,uVar7)) {
          uVar8 = uVar8 + 1;
        }
        iVar3 = (int)(CONCAT44(uVar8,uVar1 + uVar7) >> 0xe);
        iVar2 = -iVar3;
        if (-1 < (int)(uVar4 ^ uVar11)) {
          iVar2 = iVar3;
        }
        uVar4 = *(uint *)(param_1 + 0x1d0);
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar11 = (uint)sVar5;
        uVar8 = -uVar11;
        if (-1 < sVar5) {
          uVar8 = uVar11;
        }
        uVar7 = (uVar1 & 0xffff) * uVar8;
        uVar8 = (uVar1 >> 0x10) * uVar8;
        uVar1 = uVar8 * 0x10000 | 0x2000;
        uVar8 = uVar8 >> 0x10;
        if (CARRY4(uVar1,uVar7)) {
          uVar8 = uVar8 + 1;
        }
        iVar9 = (int)(CONCAT44(uVar8,uVar1 + uVar7) >> 0xe);
        iVar3 = -iVar9;
        if (-1 < (int)(uVar4 ^ uVar11)) {
          iVar3 = iVar9;
        }
        uVar10 = FUN_00602370((long)iVar2,(long)iVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  }
  uVar10 = FUN_006025a0(param_3);
  *(undefined8 *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) = uVar10;
  return;
}


