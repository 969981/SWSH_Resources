/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbd040; name: FUN_00cbd040
 */


void FUN_00cbd040(long *param_1)

{
  undefined *puVar1;
  
  FUN_01029060();
  puVar1 = PTR_DAT_0271c648 + 0x50;
  *param_1 = (long)(PTR_DAT_0271c648 + 0x10);
  param_1[9] = (long)puVar1;
  return;
}


