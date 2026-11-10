/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011820e0; name: FUN_011820e0
 */


void FUN_011820e0(long param_1,long *param_2,undefined4 param_3)

{
  if (*param_2 != 0) {
    FUN_008664a0(*param_2,param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0xc0) = param_3;
  }
  return;
}


