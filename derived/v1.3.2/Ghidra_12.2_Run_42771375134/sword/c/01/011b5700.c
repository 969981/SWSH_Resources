/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b5700; name: FUN_011b5700
 */


void FUN_011b5700(long *param_1,long *param_2)

{
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    if (param_2[3] != 0) {
      param_1[3] = param_2[3];
    }
    if ((int)param_2[4] != 0) {
      *(int *)(param_1 + 4) = (int)param_2[4];
    }
  }
  return;
}


