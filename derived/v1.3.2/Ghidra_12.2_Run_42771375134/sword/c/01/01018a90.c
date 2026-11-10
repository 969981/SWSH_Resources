/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018a90; name: FUN_01018a90
 */


undefined4 FUN_01018a90(long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 0;
  if (uVar1 < 2) {
    uVar2 = *(undefined4 *)(param_1 + (ulong)uVar1 * 0x130 + 0x60);
  }
  return uVar2;
}


