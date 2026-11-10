/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e05a00; name: FUN_00e05a00
 */


undefined4 FUN_00e05a00(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ecec10();
  if (uVar1 < 9) {
    return *(undefined4 *)(&DAT_02160800 + (long)(int)uVar1 * 4);
  }
  return 0xffffffff;
}


