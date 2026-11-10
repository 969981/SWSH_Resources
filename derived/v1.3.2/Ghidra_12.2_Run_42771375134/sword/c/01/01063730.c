/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063730; name: FUN_01063730
 */


void FUN_01063730(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0271b190;
  uVar1 = *(undefined8 *)(PTR_DAT_02723ad8 + 8);
  *(undefined8 *)PTR_DAT_0271b190 = *(undefined8 *)PTR_DAT_02723ad8;
  *(undefined8 *)(puVar2 + 8) = uVar1;
  return;
}


