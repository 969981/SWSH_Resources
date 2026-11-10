/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442030; name: FUN_00442030
 */


void FUN_00442030(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


