/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9b80; name: FUN_003e9b80
 */


void FUN_003e9b80(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0x928) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x928) + 0x38))(param_1);
  }
  if (*(long **)(param_2 + 0x930) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x930) + 0x38))(param_1);
  return;
}


