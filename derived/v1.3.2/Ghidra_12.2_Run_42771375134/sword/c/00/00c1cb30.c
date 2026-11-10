/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1cb30; name: FUN_00c1cb30
 */


void FUN_00c1cb30(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_0271bc00;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xc] = param_1[1];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = -0x24cfbc46a32f0ec9;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar2 = FUN_00be53f0();
  if (lVar2 == 0) {
    return;
  }
  FUN_00bdcf30();
  return;
}


