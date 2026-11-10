/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad17b0; name: FUN_00ad17b0
 */


void FUN_00ad17b0(float param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = param_1;
  if ((*(int *)(param_2 + 0x4f0) == 0x37a) && (*(int *)(param_2 + 0x504) == 2)) {
    bVar1 = true;
    if ((param_1 < 1.0) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 == 0.0;
    }
    fVar2 = 1.0;
    if (bVar1) {
      fVar2 = param_1;
    }
  }
  *(float *)(param_2 + 0x4e8) = fVar2;
  FUN_00acda00();
  return;
}


