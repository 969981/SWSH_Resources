/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007000e0; name: FUN_007000e0
 */


void FUN_007000e0(long *param_1,long param_2)

{
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xc);
  (**(code **)(*param_1 + 0x38))();
  *(undefined4 *)((long)param_1 + 0xac) = 0xffffffff;
  return;
}


