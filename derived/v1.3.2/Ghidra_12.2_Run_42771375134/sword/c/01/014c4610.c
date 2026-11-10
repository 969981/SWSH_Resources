/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4610; name: FUN_014c4610
 */


undefined8 FUN_014c4610(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    uVar1 = nn::pl::GetSharedFontAddress(*(undefined4 *)(param_1 + 0x124));
    return uVar1;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 400);
}


