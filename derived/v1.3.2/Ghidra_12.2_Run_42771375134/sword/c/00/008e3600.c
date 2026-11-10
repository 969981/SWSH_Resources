/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3600; name: FUN_008e3600
 */


bool FUN_008e3600(long param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  bVar2 = *(char *)(param_1 + 0x2b4) < '\a';
  if (bVar2) {
    cVar3 = *(char *)(param_1 + 0x2b5);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b4) = 6;
    cVar3 = *(char *)(param_1 + 0x2b5);
  }
  if ('\x06' < cVar3) {
    *(undefined1 *)(param_1 + 0x2b5) = 6;
  }
  bVar1 = '\x06' < *(char *)(param_1 + 0x2b6);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x2b6) = 6;
    cVar4 = *(char *)(param_1 + 0x2b7);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x2b7);
  }
  if ('\x06' < cVar4) {
    *(undefined1 *)(param_1 + 0x2b7) = 6;
    cVar5 = *(char *)(param_1 + 0x2b8);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x2b8);
  }
  if ('\x06' < cVar5) {
    *(undefined1 *)(param_1 + 0x2b8) = 6;
    cVar6 = *(char *)(param_1 + 0x2b9);
  }
  else {
    cVar6 = *(char *)(param_1 + 0x2b9);
  }
  if ('\x06' < cVar6) {
    *(undefined1 *)(param_1 + 0x2b9) = 6;
    cVar7 = *(char *)(param_1 + 0x2ba);
  }
  else {
    cVar7 = *(char *)(param_1 + 0x2ba);
  }
  if (cVar7 < '\a') {
    return '\x06' < cVar6 ||
           ('\x06' < cVar5 || ('\x06' < cVar4 || (bVar1 || ('\x06' < cVar3 || !bVar2))));
  }
  *(undefined1 *)(param_1 + 0x2ba) = 6;
  return true;
}


