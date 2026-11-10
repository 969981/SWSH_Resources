/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df5410; name: FUN_00df5410
 */


void FUN_00df5410(long *param_1)

{
  undefined *puVar1;
  
  FUN_00df2f70();
  puVar1 = PTR_DAT_0271ee20;
  *param_1 = (long)(PTR_DAT_0271ee20 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  param_1[0x22] = -0x340d631b7bddd9bb;
  return;
}


