/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408790; name: FUN_00408790
 */


void FUN_00408790(long *param_1)

{
  undefined *puVar1;
  
  FUN_004097a0();
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_02712b10;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar1 + 200);
  param_1[6] = 0;
  param_1[3] = (long)(puVar1 + 0xa0);
  param_1[9] = 0;
  param_1[10] = -0xc0800000;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xe0;
  return;
}


