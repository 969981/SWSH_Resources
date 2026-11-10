/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01300fa0; name: FUN_01300fa0
 */


void FUN_01300fa0(long *param_1,long *param_2)

{
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    FUN_0081a4e0(param_1 + 4,param_2 + 4);
    if (*(int *)((long)param_2 + 0x14) != 0) {
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
    }
    if ((int)param_2[3] != 0) {
      *(int *)(param_1 + 3) = (int)param_2[3];
    }
    if (*(int *)((long)param_2 + 0x34) != 0) {
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_2 + 0x34);
    }
    if ((char)param_2[7] != '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  return;
}


