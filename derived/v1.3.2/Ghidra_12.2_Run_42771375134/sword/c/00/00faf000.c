/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faf000; name: FUN_00faf000
 */


undefined4 FUN_00faf000(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(int *)(param_1 + 0x78) - 1;
  if (uVar2 < 5) {
    uVar3 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    uVar1 = *(undefined4 *)(&DAT_02161de0 + uVar3);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(&DAT_02161dc0 + uVar3);
    return uVar1;
  }
  return 0;
}


