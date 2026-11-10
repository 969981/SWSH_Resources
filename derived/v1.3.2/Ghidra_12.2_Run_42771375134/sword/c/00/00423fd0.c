/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00423fd0; name: FUN_00423fd0
 */


void FUN_00423fd0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  lVar1 = *(long *)(param_1 + 0x158);
  fVar4 = *(float *)(lVar1 + 8);
  if ((fVar4 != *(float *)(param_1 + 0x168)) ||
     (*(float *)(lVar1 + 0xc) != *(float *)(param_1 + 0x16c))) {
    if (*(int *)(param_1 + 0x128) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_00428e10(fVar4,*(undefined4 *)(lVar1 + 0xc),*(long *)(param_1 + 0x140) + lVar2,
                     *(undefined4 *)(param_1 + 0x130));
        lVar1 = *(long *)(param_1 + 0x158);
        uVar3 = uVar3 + 1;
        fVar4 = *(float *)(lVar1 + 8);
        lVar2 = lVar2 + 0xa8;
      } while (uVar3 < *(uint *)(param_1 + 0x128));
    }
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    *(int *)(param_1 + 0x120) = (int)((fVar4 + DAT_01d4c6ac * *(float *)(lVar1 + 0x60)) * fVar8);
  }
  uVar7 = DAT_01d4c0c8;
  fVar8 = DAT_01d4bf2c;
  fVar4 = DAT_01d4bd2c;
  if (*(float *)(lVar1 + 0x10) != *(float *)(param_1 + 0x170)) {
    fVar5 = DAT_01d4be00 + DAT_01d4bd2c * *(float *)(lVar1 + 0x10);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,DAT_01d4c0c8);
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    fVar5 = DAT_01d4bed4;
    fVar8 = fVar8 + fVar4 * *(float *)(lVar1 + 0x10);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar8,uVar7);
    *(undefined4 *)(param_1 + 0x34) = uVar6;
    fVar5 = fVar5 + fVar4 * *(float *)(lVar1 + 0x10);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    uVar6 = NEON_fminnm(fVar5,uVar7);
    *(undefined4 *)(param_1 + 0x4c) = uVar6;
    fVar4 = *(float *)(lVar1 + 0x10) * fVar4;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    uVar7 = NEON_fminnm(fVar4,uVar7);
    *(undefined4 *)(param_1 + 100) = uVar7;
  }
  if (((*(float *)(lVar1 + 0x18) != *(float *)(param_1 + 0x178)) ||
      (*(float *)(lVar1 + 0x1c) != *(float *)(param_1 + 0x17c))) ||
     (*(float *)(lVar1 + 0x20) != *(float *)(param_1 + 0x180))) {
    FUN_00422b00(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  if (((*(float *)(lVar1 + 0x24) != *(float *)(param_1 + 0x184)) ||
      (*(float *)(lVar1 + 0x28) != *(float *)(param_1 + 0x188))) ||
     (*(float *)(lVar1 + 0x2c) != *(float *)(param_1 + 0x18c))) {
    FUN_00423160(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  if (((*(float *)(lVar1 + 0x30) != *(float *)(param_1 + 400)) ||
      (*(float *)(lVar1 + 0x34) != *(float *)(param_1 + 0x194))) ||
     (*(float *)(lVar1 + 0x38) != *(float *)(param_1 + 0x198))) {
    FUN_00423240(param_1);
    lVar1 = *(long *)(param_1 + 0x158);
  }
  *(undefined1 *)(lVar1 + 0x58) = 0;
  return;
}


