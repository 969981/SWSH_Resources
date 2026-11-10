/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009323c0; name: FUN_009323c0
 */


void FUN_009323c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)((long)param_1 + 5);
  *(undefined1 *)((long)param_2 + 6) = *(undefined1 *)((long)param_1 + 6);
  *(undefined1 *)((long)param_2 + 7) = *(undefined1 *)((long)param_1 + 7);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  return;
}


