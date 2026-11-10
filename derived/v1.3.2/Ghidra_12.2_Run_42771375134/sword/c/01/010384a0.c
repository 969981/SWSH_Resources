/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010384a0; name: FUN_010384a0
 */


byte FUN_010384a0(long param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_01679c20(*(undefined8 *)(param_1 + 0x5d0));
  if (*(long *)(param_1 + 0x5e0) == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) ^ 1;
  }
  return bVar2 & iVar1 == 6;
}


