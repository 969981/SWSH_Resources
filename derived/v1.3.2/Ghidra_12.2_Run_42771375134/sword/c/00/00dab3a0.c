/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab3a0; name: FUN_00dab3a0
 */


void FUN_00dab3a0(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_c;
  float fStack_8;
  float local_4;
  
  local_c = 1.0;
  fStack_8 = 0.0;
  pfVar1 = &local_c;
  if (param_1 <= 1.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= param_1) {
    pfVar2 = pfVar1;
  }
  local_4 = param_1;
  *(float *)(param_2 + 0xa340) = *pfVar2;
  *(undefined1 *)(param_2 + 0x82) = 1;
  return;
}


