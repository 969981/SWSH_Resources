/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bf710; name: FUN_005bf710
 */


void FUN_005bf710(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (param_2 == 0) {
    lVar1 = FUN_005bc6f0();
    *param_1 = lVar1;
    return;
  }
  return;
}


