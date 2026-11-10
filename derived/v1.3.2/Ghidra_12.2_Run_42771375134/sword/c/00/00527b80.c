/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527b80; name: FUN_00527b80
 */


bool FUN_00527b80(long param_1)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *(float *)(param_1 + 0x90c);
  fVar7 = *(float *)(param_1 + 0x8f4);
  if (0.0 < fVar3) {
    fVar5 = *(float *)(param_1 + 0x8f8);
    if (fVar3 <= *(float *)(param_1 + 0x8f8)) {
      fVar5 = fVar3;
    }
    fVar4 = *(float *)(param_1 + 0x910);
    if (fVar7 <= fVar3) {
      fVar7 = fVar5;
    }
    if ((0.0 < fVar4) && (fVar4 <= fVar7)) {
      fVar7 = fVar4;
    }
  }
  fVar4 = *(float *)(param_1 + 0x6c4);
  fVar3 = *(float *)(param_1 + 0xef0);
  fVar6 = *(float *)(param_1 + 0xeec);
  uVar2 = FUN_00562390(fVar4,*(undefined4 *)(param_1 + 0x6c8),fVar6,fVar3);
  fVar5 = fVar4;
  if ((uVar2 & 1) != 0) {
    if (fVar6 <= fVar3) {
      fVar3 = fVar4;
    }
    fVar5 = fVar3;
    if (fVar3 <= fVar4) {
      fVar5 = fVar4;
    }
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar7 == *(float *)(param_1 + 0x6c4)) {
    fVar3 = *(float *)(param_1 + 0x910);
    fVar7 = *(float *)(param_1 + 0x8f8);
    if (0.0 < fVar3) {
      if (fVar3 <= fVar7) {
        fVar7 = fVar3;
      }
      fVar4 = *(float *)(param_1 + 0x90c);
      fVar5 = *(float *)(param_1 + 0x8f4);
      if (*(float *)(param_1 + 0x8f4) <= fVar3) {
        fVar5 = fVar7;
      }
      fVar7 = fVar5;
      if ((0.0 < fVar4) && (fVar5 <= fVar4)) {
        fVar7 = fVar4;
      }
    }
    fVar5 = *(float *)(param_1 + 0x6c8);
    fVar4 = *(float *)(param_1 + 0xef0);
    fVar6 = *(float *)(param_1 + 0xeec);
    uVar2 = FUN_00562390(*(float *)(param_1 + 0x6c4),fVar5,fVar6,fVar4);
    fVar3 = fVar5;
    if ((uVar2 & 1) != 0) {
      fVar3 = fVar4;
      if (fVar4 <= fVar6) {
        fVar3 = fVar5;
      }
      bVar1 = false;
      if ((fVar3 < fVar5) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar4))) {
        bVar1 = fVar6 < fVar4;
      }
      fVar3 = fVar4;
      if (!bVar1) {
        fVar3 = fVar5;
      }
    }
    if (fVar3 <= fVar7) {
      fVar7 = fVar3;
    }
    bVar1 = fVar7 != *(float *)(param_1 + 0x6c8);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


