/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a58b0; name: FUN_004a58b0
 */


void FUN_004a58b0(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712ac0);
  fVar3 = fVar2 * DAT_01d4bec0;
  fVar1 = (float)param_1 * DAT_01d4c6ac;
  *(uint *)PTR_DAT_02712b38 = param_1;
  *(int *)PTR_DAT_02712e58 = (int)(fVar2 / fVar1);
  *(int *)PTR_DAT_02712ea8 = (int)((fVar3 / (float)param_1) * 0.25);
  *(uint *)PTR_DAT_027133e8 = (param_1 << 7) / 48000;
  return;
}


