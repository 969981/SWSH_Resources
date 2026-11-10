/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff08c0; name: FUN_00ff08c0
 */


void FUN_00ff08c0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  if (*(long *)(param_1 + 2) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0x48) + 0x18))();
    param_1[2] = 0;
    param_1[3] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ff0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 4) + 0x18))(*(long **)(param_1 + 4),param_1,0x18,8);
  return;
}


