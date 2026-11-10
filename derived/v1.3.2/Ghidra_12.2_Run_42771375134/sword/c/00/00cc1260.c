/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc1260; name: FUN_00cc1260
 */


long FUN_00cc1260(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00cbd3c0();
  *(undefined8 *)(param_1 + 0x80) = *puVar1;
  return param_1;
}


