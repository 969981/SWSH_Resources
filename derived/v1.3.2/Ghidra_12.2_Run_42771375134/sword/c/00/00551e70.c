/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551e70; name: FUN_00551e70
 */


int FUN_00551e70(int *param_1,char param_2,int param_3)

{
  long lVar1;
  
  if (param_3 <= *param_1) {
    lVar1 = (long)param_3 + -1;
    do {
      if (*(char *)(*(long *)(param_1 + 2) + lVar1) == param_2) {
        return param_3;
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 1;
    } while (lVar1 < *param_1);
  }
  return 0;
}


