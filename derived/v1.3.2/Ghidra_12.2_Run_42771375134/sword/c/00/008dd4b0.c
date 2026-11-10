/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd4b0; name: FUN_008dd4b0
 */


undefined4 FUN_008dd4b0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 - 0x11;
  if (((uVar1 & 0xffff) < 0xb) && ((0x5bfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_02149660 + (long)(short)uVar1 * 4);
  }
  uVar2 = 6;
  if ((param_1 & 0xffff) != 0x17) {
    uVar2 = 0;
  }
  return uVar2;
}


