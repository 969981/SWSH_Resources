/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1200; name: FUN_001e1200
 */


void FUN_001e1200(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN_001ca550(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 8),param_2,0);
  return;
}


