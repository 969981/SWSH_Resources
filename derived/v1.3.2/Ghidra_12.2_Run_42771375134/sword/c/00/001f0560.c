/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f0560; name: FUN_001f0560
 */


void FUN_001f0560(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_003d9790(param_1 + 0x20);
  plVar2 = (long *)(lVar1 + 0x28);
  if (*(short *)(lVar1 + 0x30) != 1) {
    plVar2 = (long *)*plVar2;
  }
  *param_2 = (long)plVar2;
  return;
}


