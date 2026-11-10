/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90000; name: FUN_00e90000
 */


void FUN_00e90000(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 0x4c0) + 0x54) == 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e90020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x578) + 0x28))();
  return;
}


