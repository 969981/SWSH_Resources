/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c2f90; name: FUN_009c2f90
 */


void FUN_009c2f90(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00814ca0(1,*(int *)(param_1 + 0x14),param_2);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_00814ca0(2,*(int *)(param_1 + 0x18),param_2);
  return;
}


