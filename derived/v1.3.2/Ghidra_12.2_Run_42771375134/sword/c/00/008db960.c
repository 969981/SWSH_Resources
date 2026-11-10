/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db960; name: FUN_008db960
 */


void FUN_008db960(long param_1,long param_2)

{
  *(long *)(param_1 + 0x18) = param_2;
  if (param_2 != 0) {
    *(long *)(param_2 + 0x10) = param_1;
  }
  return;
}


