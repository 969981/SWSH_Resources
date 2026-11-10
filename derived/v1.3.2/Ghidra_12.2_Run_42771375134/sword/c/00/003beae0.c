/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003beae0; name: FUN_003beae0
 */


void FUN_003beae0(long *param_1,undefined2 param_2)

{
  *(undefined2 *)((long)param_1 + 0x2e) = param_2;
  if (*param_1 != 0) {
    *(undefined2 *)(*param_1 + 0x7e) = param_2;
  }
  return;
}


