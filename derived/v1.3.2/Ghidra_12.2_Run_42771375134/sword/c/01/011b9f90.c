/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b9f90; name: FUN_011b9f90
 */


void FUN_011b9f90(long param_1)

{
  FUN_012ae3d0(param_1 + 0x6c0,*(int *)(param_1 + 0x6d0) * 1000);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  *(undefined1 *)(param_1 + 0x6d8) = 1;
  return;
}


