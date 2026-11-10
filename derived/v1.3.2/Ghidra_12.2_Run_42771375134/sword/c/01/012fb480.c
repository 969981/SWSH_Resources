/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fb480; name: FUN_012fb480
 */


void FUN_012fb480(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00814ca0(1,*(int *)(param_1 + 0x20),param_2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00814db0(2,*(long *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_008154d0(3,*(int *)(param_1 + 0x24),param_2);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_00814ca0(4,*(int *)(param_1 + 0x28),param_2);
  return;
}


