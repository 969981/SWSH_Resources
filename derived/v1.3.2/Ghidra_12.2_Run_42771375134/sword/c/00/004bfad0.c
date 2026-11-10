/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bfad0; name: FUN_004bfad0
 */


undefined8 FUN_004bfad0(float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  
  fVar5 = *(float *)(PTR_DAT_02712b90 + 0x10);
  if (fVar5 < 1.0) {
    local_28 = 0;
    FUN_00404a00(*(undefined4 *)PTR_DAT_02712a90,&local_28);
    if ((int)local_28 != 0) {
      fVar4 = (float)NEON_ucvtf(local_28._4_4_);
      if (fVar5 < fVar4 / (float)(local_28 & 0xffffffff)) goto LAB_004bfb80;
    }
  }
  fVar5 = *(float *)(PTR_DAT_02712e50 + 0x80);
  if (1.0 <= fVar5) {
    return 1;
  }
  local_28 = 0;
  FUN_00404a00(*(undefined4 *)PTR_DAT_02712e28,&local_28);
  if ((int)local_28 == 0) {
    return 1;
  }
  fVar4 = (float)NEON_ucvtf(local_28._4_4_);
  if (fVar4 / (float)(local_28 & 0xffffffff) <= fVar5) {
    return 1;
  }
LAB_004bfb80:
  lVar3 = *(long *)(PTR_DAT_027134a8 + 0x10);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = 0;
  fVar5 = DAT_01d4bee4;
  do {
    while ((*(uint *)(lVar3 + 0x26b) & 0x16010000) == 0) {
      lVar1 = lVar3;
      fVar4 = *(float *)(lVar3 + 0x270);
      if (fVar5 < *(float *)(lVar3 + 0x270)) {
        lVar1 = lVar2;
        fVar4 = fVar5;
      }
      fVar5 = fVar4;
      lVar3 = *(long *)(lVar3 + 400);
      lVar2 = lVar1;
      if (lVar3 == 0) goto LAB_004bfbd4;
    }
    lVar3 = *(long *)(lVar3 + 400);
  } while (lVar3 != 0);
LAB_004bfbd4:
  if (lVar2 == 0) {
    return 0;
  }
  if (fVar5 < param_1) {
    FUN_0048e060(lVar2,3);
    return 1;
  }
  return 0;
}


