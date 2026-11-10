/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004797e0; name: FUN_004797e0
 */


undefined8 FUN_004797e0(long *param_1,long param_2)

{
  param_1 = (long *)*param_1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1[1] == param_2) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


