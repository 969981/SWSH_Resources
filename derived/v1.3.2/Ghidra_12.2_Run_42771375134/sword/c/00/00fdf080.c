/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdf080; name: FUN_00fdf080
 */


void FUN_00fdf080(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_4;
  
  if (*(int *)(param_1 + 0x5cc) - 1U < 2) {
    fVar2 = *(float *)(param_1 + 0x5d0);
    fVar3 = 1.0;
  }
  else {
    if (*(int *)(param_1 + 0x5cc) != 0) {
      fVar2 = *(float *)(param_1 + 0x5d0);
      local_4 = 0.0;
      goto joined_r0x00fdf0e4;
    }
    fVar2 = *(float *)(param_1 + 0x5d0);
    fVar3 = -1.0;
  }
  fVar2 = fVar2 + fVar3;
  *(float *)(param_1 + 0x5d0) = fVar2;
  local_4 = 0.0;
joined_r0x00fdf0e4:
  if (0.0 <= fVar2) {
    pfVar1 = (float *)(param_1 + 0x5d4);
    if (fVar2 <= *(float *)(param_1 + 0x5d4)) {
      pfVar1 = (float *)(param_1 + 0x5d0);
    }
  }
  else {
    pfVar1 = &local_4;
  }
  local_4 = 0.0;
  fVar2 = *pfVar1;
  *(float *)(param_1 + 0x5d0) = fVar2;
  FUN_00ffd510(fVar2,param_1 + 0x100,&DAT_02162188);
  return;
}


