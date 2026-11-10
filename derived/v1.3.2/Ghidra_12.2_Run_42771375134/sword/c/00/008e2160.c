/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2160; name: FUN_008e2160
 */


undefined4 FUN_008e2160(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2e4) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x300) == 0) {
    return 2;
  }
  uVar1 = 3;
  if (*(int *)(param_1 + 0x31c) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


