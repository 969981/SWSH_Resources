/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71250; name: FUN_00d71250
 */


undefined8 FUN_00d71250(ulong param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0271e2e0;
  if (param_2 != 1) {
    puVar1 = PTR_DAT_0271e2d8;
  }
  return *(undefined8 *)(puVar1 + (param_1 & 0xff) * 8);
}


