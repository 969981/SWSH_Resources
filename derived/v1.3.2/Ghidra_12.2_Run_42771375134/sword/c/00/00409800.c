/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409800; name: FUN_00409800
 */


void FUN_00409800(long *param_1)

{
  undefined *puVar1;
  
  FUN_0047e130();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar1 = PTR_DAT_02712b28;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = (long)(puVar1 + 0x350);
  param_1[3] = (long)(puVar1 + 0x2b8);
  *(byte *)((long)param_1 + 0xdc) = *(byte *)((long)param_1 + 0xdc) & 0xf0;
  param_1[0x1c] = 0;
  return;
}


