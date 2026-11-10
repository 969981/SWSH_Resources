/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943f60; name: FUN_00943f60
 */


void FUN_00943f60(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar2 = uVar1 >> 7 & 0x7f;
  if (uVar2 < 8) {
    *(ushort *)(param_1 + 2) = uVar1 + 0x80 & 0x3f80 | uVar1 & 0xc07f;
    *(undefined4 *)(param_1 + (ulong)uVar2 * 4 + 4) = param_2;
  }
  return;
}


