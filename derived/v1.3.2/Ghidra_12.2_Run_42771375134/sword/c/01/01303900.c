/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01303900; name: FUN_01303900
 */


void FUN_01303900(long *param_1,long *param_2)

{
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    if (*(int *)((long)param_2 + 0x14) != 0) {
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
    }
    if ((char)param_2[3] != '\0') {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    if (*(int *)((long)param_2 + 0x1c) != 0) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_2 + 0x1c);
    }
    if ((int)param_2[4] != 0) {
      *(int *)(param_1 + 4) = (int)param_2[4];
    }
    if (*(int *)((long)param_2 + 0x24) != 0) {
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_2 + 0x24);
    }
    if ((int)param_2[5] != 0) {
      *(int *)(param_1 + 5) = (int)param_2[5];
    }
  }
  return;
}


