/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dbf0; name: FUN_0093dbf0
 */


void FUN_0093dbf0(long param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(char *)(param_1 + 2) + param_2;
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar1 <= *(byte *)(param_1 + 1)) {
    bVar2 = bVar1;
  }
  *(byte *)(param_1 + 2) = bVar2;
  return;
}


