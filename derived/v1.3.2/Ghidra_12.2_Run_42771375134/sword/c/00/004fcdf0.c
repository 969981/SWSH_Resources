/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fcdf0; name: FUN_004fcdf0
 */


void FUN_004fcdf0(long *param_1,int param_2)

{
  if (param_2 == 2) {
    *(undefined1 *)((long)param_1 + 0xbb) = 1;
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_004fcbe0(param_1);
  if (param_1[1] == 0) {
    return;
  }
  FUN_004fff50(param_1[10],param_1);
  return;
}


