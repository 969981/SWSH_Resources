/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6ea0; name: FUN_003c6ea0
 */


void FUN_003c6ea0(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0xe) = *(undefined2 *)((long)param_2 + 0xe);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}


