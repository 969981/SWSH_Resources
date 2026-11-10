/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2890; name: FUN_008e2890
 */


undefined4 FUN_008e2890(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 4;
  }
  if (*(int *)(param_1 + 0x2d4) == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2f0) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x30c) == param_2) {
    return 2;
  }
  uVar1 = 3;
  if (*(int *)(param_1 + 0x328) != param_2) {
    uVar1 = 4;
  }
  return uVar1;
}


