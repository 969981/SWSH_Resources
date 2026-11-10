/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a5c0; name: FUN_0150a5c0
 */


undefined1 FUN_0150a5c0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_3 < 6) {
    uVar2 = param_3;
  }
  return *(undefined1 *)(param_1 + (ulong)uVar1 * 0xc + (ulong)uVar2 * 2 + 0x524);
}


