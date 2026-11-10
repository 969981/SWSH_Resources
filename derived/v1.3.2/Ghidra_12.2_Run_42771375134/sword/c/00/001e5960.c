/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e5960; name: FUN_001e5960
 */


void FUN_001e5960(long *param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_34;
  
  local_34 = 3;
  *(undefined4 *)(param_1 + 1) = 0x3000d;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_027110d8 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_027110e0 + 0x10);
                    /* try { // try from 001e59d0 to 001e59df has its CatchHandler @ 001e5a04 */
  FUN_001e3c70(param_1 + 5,&local_34,param_2,param_3 & 1);
  *param_1 = (long)(PTR_DAT_027110e8 + 0x10);
  return;
}


