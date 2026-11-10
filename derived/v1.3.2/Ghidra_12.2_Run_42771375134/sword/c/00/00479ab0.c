/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479ab0; name: FUN_00479ab0
 */


float FUN_00479ab0(long *param_1,ulong *param_2)

{
  uint *puVar1;
  long lVar2;
  float fVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 1.0;
  }
  fVar3 = 1.0;
  do {
    if (*(uint *)(param_1 + 3) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 3) * 0xc;
      puVar1 = (uint *)(param_1[2] + 8);
      do {
        if ((1L << ((ulong)*puVar1 & 0x3f) & *param_2) != 0) {
          fVar3 = ((float)puVar1[-2] + *(float *)(param_1[1] + 0x70) * (float)puVar1[-1]) * fVar3;
        }
        puVar1 = puVar1 + 3;
        lVar2 = lVar2 + -0xc;
      } while (lVar2 != 0);
    }
    param_1 = (long *)*param_1;
  } while (param_1 != (long *)0x0);
  return fVar3;
}


