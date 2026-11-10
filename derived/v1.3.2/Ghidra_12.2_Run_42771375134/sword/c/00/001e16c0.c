/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e16c0; name: FUN_001e16c0
 */


undefined8 FUN_001e16c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(uint *)(lVar3 + 0x50) == 0) {
    return 0;
  }
  uVar2 = 0;
  puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x48) + 8);
  do {
    if (*(char *)(*(long *)(lVar3 + 0x48) + uVar2 * 0x10) == '\x01') {
      return *puVar4;
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
    puVar4 = puVar4 + 2;
  } while (uVar1 < *(uint *)(lVar3 + 0x50));
  return 0;
}


