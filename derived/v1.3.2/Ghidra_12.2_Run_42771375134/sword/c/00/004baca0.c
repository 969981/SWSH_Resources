/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004baca0; name: FUN_004baca0
 */


undefined4 FUN_004baca0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004bad00(param_1 + 0x18,0xb);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  uVar1 = FUN_004bae50(param_1,0xb);
  uVar2 = 0x34;
  if ((uVar1 & 1) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


