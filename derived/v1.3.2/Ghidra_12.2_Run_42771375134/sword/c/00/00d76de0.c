/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d76de0; name: FUN_00d76de0
 */


void FUN_00d76de0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x194) == '\0') {
    return;
  }
  uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  if (*(char *)(param_1 + 0x195) != '\0') {
    uVar1 = FUN_01020270(uVar3,0x1000);
    uVar2 = FUN_01020270(uVar3,0x4000);
    if ((uVar1 & 1) == 0) {
      if ((uVar2 & 1) != 0) {
        fVar5 = 1.0;
        goto LAB_00d76e9c;
      }
    }
    else if ((uVar1 & (uVar2 ^ 0xffffffff) & 1) != 0) {
      fVar5 = -1.0;
      goto LAB_00d76e9c;
    }
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (*(char *)(param_1 + 0x196) != '\0') {
    pfVar4 = (float *)FUN_01020300(uVar3);
    fVar6 = *pfVar4;
  }
  if (*(char *)(param_1 + 0x197) != '\0') {
    pfVar4 = (float *)FUN_01020320(uVar3);
    fVar5 = *pfVar4;
  }
  if (ABS(fVar5) <= ABS(fVar6)) {
    fVar5 = fVar6;
  }
LAB_00d76e9c:
  FUN_00d83dd0(fVar5 * (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                       6.0,param_1);
  return;
}


