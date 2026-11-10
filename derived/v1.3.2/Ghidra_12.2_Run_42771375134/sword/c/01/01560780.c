/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01560780; name: FUN_01560780
 */


void FUN_01560780(long param_1)

{
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN_006d0560(*(long *)(param_1 + 8),"load process",0xffffffff,0x10);
  return;
}


