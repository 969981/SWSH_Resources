/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5940; name: FUN_004a5940
 */


void FUN_004a5940(uint param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = PTR_DAT_027133e8;
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
  fVar3 = (float)param_1 * DAT_01d4bec0;
  fVar5 = fVar4 * DAT_01d4c6ac;
  *(uint *)PTR_DAT_02712ac0 = param_1;
  uVar1 = 0;
  if (*(uint *)puVar2 != 0) {
    uVar1 = (undefined2)(param_1 / *(uint *)puVar2);
  }
  *(int *)PTR_DAT_02712e58 = (int)((float)param_1 / fVar5);
  *(int *)PTR_DAT_02712ea8 = (int)((fVar3 / fVar4) * 0.25);
  *(undefined2 *)PTR_DAT_027133f0 = uVar1;
  return;
}


