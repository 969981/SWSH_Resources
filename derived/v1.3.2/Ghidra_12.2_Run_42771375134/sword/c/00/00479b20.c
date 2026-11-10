/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479b20; name: FUN_00479b20
 */


float FUN_00479b20(long *param_1,ulong *param_2)

{
  float *pfVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 1.0;
  }
  fVar5 = 1.0;
  do {
    if (*(uint *)(param_1 + 3) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 3) * 0xc;
      puVar2 = (uint *)(param_1[2] + 8);
      do {
        if ((1L << ((ulong)*puVar2 & 0x3f) & *param_2) != 0) {
          lVar4 = *(long *)(param_1[1] + 0x50);
          pfVar1 = (float *)(param_1[1] + 0x70);
          if (lVar4 != 0) {
            pfVar1 = (float *)(lVar4 + 0x10);
          }
          fVar5 = ((float)puVar2[-2] + *pfVar1 * (float)puVar2[-1]) * fVar5;
        }
        puVar2 = puVar2 + 3;
        lVar3 = lVar3 + -0xc;
      } while (lVar3 != 0);
    }
    param_1 = (long *)*param_1;
  } while (param_1 != (long *)0x0);
  return fVar5;
}


