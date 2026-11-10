/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00890e00; name: FUN_00890e00
 */


void FUN_00890e00(int *param_1,void *param_2,void *param_3)

{
  void *__src;
  
  if (param_2 == param_3) {
    __src = malloc((long)*param_1 << 3);
    FUN_008905a0(__src,param_2,1,1,param_1 + 2,param_1);
    memcpy(param_2,__src,(long)*param_1 << 3);
    free(__src);
    return;
  }
  FUN_008905a0(param_3,param_2,1,1,param_1 + 2,param_1);
  return;
}


