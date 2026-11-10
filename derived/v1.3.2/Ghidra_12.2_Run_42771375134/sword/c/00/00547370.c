/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00547370; name: FUN_00547370
 */


void FUN_00547370(long *param_1)

{
  if ((int)param_1[1] == 1) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_00545ed0(param_1);
  return;
}


