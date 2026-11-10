/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c2460; name: FUN_006c2460
 */


void FUN_006c2460(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (0.0 < *(float *)(param_1 + 0x50)) {
    lVar2 = *(long *)(param_1 + 0x18);
    for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
      FUN_006c2760(lVar1,param_2);
    }
  }
  return;
}


