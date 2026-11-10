/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01311f90; name: FUN_01311f90
 */


void FUN_01311f90(long *param_1)

{
  if ((char)param_1[0x14] == '\0') {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}


