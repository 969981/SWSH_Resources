/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b0a30; name: FUN_011b0a30
 */


void FUN_011b0a30(long *param_1,long *param_2)

{
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    if (*(int *)((long)param_2 + 0x14) != 0) {
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
    }
  }
  return;
}


