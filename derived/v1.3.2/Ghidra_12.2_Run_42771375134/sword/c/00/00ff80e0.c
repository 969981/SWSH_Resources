/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff80e0; name: FUN_00ff80e0
 */


byte FUN_00ff80e0(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(uint *)(param_1 + 0xc90) == 0) {
    return 1;
  }
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 0x98);
  bVar2 = 1;
  do {
    bVar1 = false;
    if (*plVar4 != 0) {
      bVar1 = *(char *)(*plVar4 + 0x170) != '\0';
    }
    uVar3 = uVar3 + 1;
    bVar2 = bVar2 & bVar1;
    plVar4 = plVar4 + 0x32;
  } while (uVar3 < *(uint *)(param_1 + 0xc90));
  return bVar2;
}


