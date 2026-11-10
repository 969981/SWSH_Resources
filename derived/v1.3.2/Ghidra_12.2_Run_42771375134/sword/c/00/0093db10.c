/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093db10; name: FUN_0093db10
 */


void FUN_0093db10(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 3) <= *(byte *)(param_1 + 1)) {
    bVar1 = *(byte *)(param_1 + 3);
  }
  *(byte *)(param_1 + 2) = bVar1;
  return;
}


