/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00699ec0; name: FUN_00699ec0
 */


void FUN_00699ec0(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = *param_1;
  uVar2 = (uint)uVar3;
  uVar1 = uVar2 & 3;
  if (uVar1 == 1) {
    fVar4 = (float)(uVar2 >> 3 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar5 = (float)(uVar3 >> 0x12 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar6 = (float)(uVar3 >> 0x21 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar4 = 1.0 - (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (NAN(SQRT(fVar4))) {
      sqrtf(fVar4);
    }
  }
  else if (uVar1 == 2) {
    fVar4 = (float)(uVar2 >> 3 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar5 = (float)(uVar3 >> 0x12 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar6 = (float)(uVar3 >> 0x21 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar4 = 1.0 - (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (NAN(SQRT(fVar4))) {
      sqrtf(fVar4);
    }
  }
  else if (uVar1 == 3) {
    fVar4 = (float)(uVar2 >> 3 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar5 = (float)(uVar3 >> 0x12 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar6 = (float)(uVar3 >> 0x21 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar4 = 1.0 - (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (NAN(SQRT(fVar4))) {
      sqrtf(fVar4);
    }
  }
  else {
    fVar4 = (float)(uVar2 >> 3 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar5 = (float)(uVar3 >> 0x12 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar6 = (float)(uVar3 >> 0x21 & 0x7fff) * DAT_01d4c4b8 + DAT_01d4c360;
    fVar4 = 1.0 - (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (NAN(SQRT(fVar4))) {
      sqrtf(fVar4);
    }
  }
  return;
}


