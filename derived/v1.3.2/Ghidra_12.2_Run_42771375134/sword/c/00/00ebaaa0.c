/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebaaa0; name: FUN_00ebaaa0
 */


bool FUN_00ebaaa0(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 == 6) {
    return false;
  }
  uVar1 = FUN_00dc7740();
  if (((param_2 | 1) == 5) && ((uVar1 & 1) == 0)) {
    return true;
  }
  return *(char *)(param_1 + 0x678) != '\0';
}


