/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120cd10; name: FUN_0120cd10
 */


char FUN_0120cd10(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    return '\0';
  }
  if (*(char *)(lVar3 + 0x1b80) == '\0') {
    cVar2 = false;
    cVar1 = *(char *)(lVar3 + 0x2910);
  }
  else {
    cVar2 = *(long *)(lVar3 + 0x1b78) != 0;
    cVar1 = *(char *)(lVar3 + 0x2910);
  }
  if ((cVar1 != '\0') && (*(long *)(lVar3 + 0x2908) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x36a0) != '\0') && (*(long *)(lVar3 + 0x3698) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x4430) != '\0') && (*(long *)(lVar3 + 0x4428) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x51c0) != '\0') && (*(long *)(lVar3 + 0x51b8) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x5f50) != '\0') && (*(long *)(lVar3 + 0x5f48) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x6ce0) != '\0') && (*(long *)(lVar3 + 0x6cd8) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  if ((*(char *)(lVar3 + 0x7a70) != '\0') && (*(long *)(lVar3 + 0x7a68) != 0)) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}


