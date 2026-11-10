/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878dd0; name: FUN_00878dd0
 */


undefined8 FUN_00878dd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 == 0x365) {
    uVar2 = FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  }
  return 0;
}


