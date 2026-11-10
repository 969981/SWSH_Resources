/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e16d0; name: FUN_008e16d0
 */


void FUN_008e16d0(long param_1,char param_2)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0x225);
  if (bVar1 == 0) {
    lVar2 = 0;
    cVar3 = '\x01';
  }
  else {
    lVar2 = 0;
    do {
      if (*(char *)(param_1 + 0x226 + lVar2) == param_2) {
        return;
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
    if (0x1d < (uint)lVar2) {
      return;
    }
    cVar3 = bVar1 + 1;
  }
  *(char *)(param_1 + lVar2 + 0x226) = param_2;
  *(char *)(param_1 + 0x225) = cVar3;
  return;
}


