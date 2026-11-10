/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546f10; name: FUN_00546f10
 */


undefined4 FUN_00546f10(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  if (0xf < (int)uVar1) {
    uVar1 = 0x10;
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  if ((uVar1 & 0x7fffffff) < 0x11) {
    return *(undefined4 *)(&DAT_01d6b360 + ((long)((ulong)uVar1 << 0x21) >> 0x21) * 4);
  }
  return 0;
}


