/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760770; name: FUN_00760770
 */


void FUN_00760770(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_02716040;
  param_1[4] = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xe8);
  FUN_007602b0(param_1 + 5);
  param_1[0x13] = 0;
  FUN_006cee90((long)param_1 + 0xa4,1,0);
  param_1[0x16] = 0;
  return;
}


