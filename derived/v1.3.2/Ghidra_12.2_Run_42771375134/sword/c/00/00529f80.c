/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529f80; name: FUN_00529f80
 */


float FUN_00529f80(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x298);
  }
  lVar1 = *(long *)(param_1 + 0x2a8);
  fVar2 = *(float *)(lVar1 + (long)param_2 * 0x50 + 0x1c);
  if (fVar2 <= 0.0) {
    if (*(long *)(lVar1 + (long)param_2 * 0x50 + 0x48) == 0) {
      return 0.0;
    }
    fVar2 = *(float *)(lVar1 + (long)param_2 * 0x50 + 0x34);
  }
  return fVar2;
}


