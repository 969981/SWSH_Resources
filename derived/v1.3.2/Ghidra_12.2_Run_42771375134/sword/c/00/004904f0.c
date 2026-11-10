/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004904f0; name: FUN_004904f0
 */


void FUN_004904f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
  }
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


