/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001445e0; name: FUN_001445e0
 */


void FUN_001445e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02710db8;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_02710dc0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x88);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  puVar1 = PTR_DAT_02710dc8 + 0x10;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[7] = (long)param_1;
  param_1[0xf] = (long)param_1;
  param_1[10] = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0x11] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x12) = 1;
  return;
}


