/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304770; name: FUN_01304770
 */


void FUN_01304770(long *param_1,long *param_2)

{
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    if (*(int *)((long)param_2 + 0x14) != 0) {
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
    }
    if (*(float *)(param_2 + 3) != 0.0) {
      *(float *)(param_1 + 3) = *(float *)(param_2 + 3);
    }
  }
  return;
}


