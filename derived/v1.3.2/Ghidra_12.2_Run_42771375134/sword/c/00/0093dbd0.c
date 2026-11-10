/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dbd0; name: FUN_0093dbd0
 */


void FUN_0093dbd0(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (param_2 <= *(byte *)(param_1 + 1)) {
    bVar1 = param_2;
  }
  *(byte *)(param_1 + 2) = bVar1;
  return;
}


