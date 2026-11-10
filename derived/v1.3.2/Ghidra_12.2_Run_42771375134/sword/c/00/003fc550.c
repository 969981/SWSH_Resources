/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc550; name: FUN_003fc550
 */


void FUN_003fc550(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x4c) == -1) {
    lVar3 = *(long *)(param_1 + 0x10);
    cVar2 = *(char *)(*(long *)(lVar3 + 0x50) + 0xd);
    lVar1 = lVar3;
    if (cVar2 != '\x04' && cVar2 != '\x01') {
      lVar1 = 0;
    }
    if (((((~*(byte *)(*(long *)(lVar1 + 0x50) + 0x2c) & 3) != 0) &&
         ((*(byte *)(lVar1 + 0x7c) & 1) == 0)) && (*(uint *)(lVar1 + 0xb8) < 0xfffffffe)) &&
       ((*(byte *)(*(long *)(param_1 + 0x40) + 0x40) >> 1 & 1) != 0)) {
      FUN_003fe610(*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x820),param_1);
      return;
    }
  }
  return;
}


