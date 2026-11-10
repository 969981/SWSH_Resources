/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c45c0; name: FUN_014c45c0
 */


bool FUN_014c45c0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    iVar1 = nn::pl::GetSharedFontLoadState(*(undefined4 *)(param_1 + 0x124));
    return iVar1 == 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x18) + 0x170) != '\0';
}


