/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604480; name: FUN_00604480
 */


void FUN_00604480(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    for (lVar1 = *param_1; (lVar1 != 0 && (*(long *)(lVar1 + 0x10) != param_2));
        lVar1 = *(long *)(lVar1 + 8)) {
    }
  }
  return;
}


