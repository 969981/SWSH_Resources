/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4500; name: FUN_004a4500
 */


void FUN_004a4500(long *param_1,void *param_2)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_027133d8 + 0x10);
  memcpy(param_1 + 2,param_2,0x30);
  param_1[8] = 0;
  plVar1 = param_1;
  param_1[1] = (long)DAT_02739028;
  DAT_02739028 = plVar1;
  return;
}


