/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ff760; name: FUN_012ff760
 */


void FUN_012ff760(long *param_1,long *param_2)

{
  if (param_2 == param_1) {
    return;
  }
  (**(code **)(*param_1 + 0x38))();
  FUN_012fd520(param_1,param_2);
  return;
}


