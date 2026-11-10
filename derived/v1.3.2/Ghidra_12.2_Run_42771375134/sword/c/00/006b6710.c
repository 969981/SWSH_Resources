/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6710; name: FUN_006b6710
 */


void FUN_006b6710(undefined8 param_1,long param_2)

{
  do {
    FUN_006b6750(param_1,param_2,1);
    param_2 = *(long *)(param_2 + 0x110);
  } while (param_2 != 0);
  return;
}


