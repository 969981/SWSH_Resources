/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01502ff0; name: FUN_01502ff0
 */


void FUN_01502ff0(long param_1,int param_2,undefined2 param_3)

{
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x60) = param_3;
    return;
  }
  *(undefined2 *)(param_1 + 0x62) = param_3;
  return;
}


