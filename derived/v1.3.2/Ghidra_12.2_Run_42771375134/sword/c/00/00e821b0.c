/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e821b0; name: FUN_00e821b0
 */


undefined4 FUN_00e821b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_02a5c030;
  if (*(char *)(*(long *)PTR_DAT_02717c48 + 0x352) != '\0') {
    puVar1 = (undefined4 *)&DAT_02a5c034;
  }
  return *puVar1;
}


