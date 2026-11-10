/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00452e50; name: FUN_00452e50
 */


float FUN_00452e50(long param_1,int param_2)

{
  float *pfVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  
  plVar2 = (long *)0x0;
  if (param_2 == 0) {
    plVar2 = (long *)(param_1 + 0x100);
  }
  plVar3 = (long *)(param_1 + 0x128);
  if (param_2 != 5) {
    plVar3 = plVar2;
  }
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) {
    fVar4 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xd0)) {
      fVar4 = *(float *)(param_1 + 0xd0);
    }
    return fVar4;
  }
  fVar4 = 0.0;
  do {
    pfVar1 = (float *)(plVar3 + 5);
    plVar3 = (long *)*plVar3;
    fVar4 = *pfVar1 + fVar4;
  } while (plVar3 != (long *)0x0);
  if (fVar4 <= *(float *)(param_1 + 0xd0)) {
    fVar4 = *(float *)(param_1 + 0xd0);
  }
  return fVar4;
}


