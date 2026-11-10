/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8030; name: FUN_004a8030
 */


void FUN_004a8030(undefined4 *param_1)

{
  if ((param_1[2] == 0) || (*(long *)(param_1 + 4) != 0)) {
    return;
  }
  FUN_004499f0(*(undefined8 *)PTR_DAT_02712ae0,*param_1);
  return;
}


