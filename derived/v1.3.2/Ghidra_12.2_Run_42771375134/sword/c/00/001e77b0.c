/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e77b0; name: FUN_001e77b0
 */


void FUN_001e77b0(long *param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_34;
  
  local_34 = 2;
  *(undefined4 *)(param_1 + 1) = 0x3000c;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711100 + 0x10);
  FUN_001e0d50(param_1 + 3,0);
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02711108 + 0x10);
                    /* try { // try from 001e7820 to 001e782f has its CatchHandler @ 001e7854 */
  FUN_001e3c70(param_1 + 5,&local_34,param_2,param_3 & 1);
  *param_1 = (long)(PTR_DAT_02711110 + 0x10);
  return;
}


