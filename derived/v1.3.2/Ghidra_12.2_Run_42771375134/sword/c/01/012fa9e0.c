/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fa9e0; name: FUN_012fa9e0
 */


void FUN_012fa9e0(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00814ca0(1,*(int *)(param_1 + 0x14),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00814ad0(2,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00814ad0(3,*(int *)(param_1 + 0x1c),param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00814ad0(4,*(int *)(param_1 + 0x20),param_2);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00814ad0(5,*(int *)(param_1 + 0x24),param_2);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_00814ad0(6,*(int *)(param_1 + 0x28),param_2);
  return;
}


