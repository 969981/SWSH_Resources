/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3500; name: FUN_008e3500
 */


bool FUN_008e3500(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  
  bVar6 = *(char *)(param_1 + 0x2b4) != '\x06';
  if (bVar6) {
    *(undefined1 *)(param_1 + 0x2b4) = 6;
    cVar1 = *(char *)(param_1 + 0x2b5);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2b5);
  }
  if (cVar1 != '\x06') {
    *(undefined1 *)(param_1 + 0x2b5) = 6;
  }
  bVar7 = *(char *)(param_1 + 0x2b6) != '\x06';
  if (bVar7) {
    *(undefined1 *)(param_1 + 0x2b6) = 6;
    cVar2 = *(char *)(param_1 + 0x2b7);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2b7);
  }
  if (cVar2 != '\x06') {
    *(undefined1 *)(param_1 + 0x2b7) = 6;
    cVar3 = *(char *)(param_1 + 0x2b8);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x2b8);
  }
  if (cVar3 != '\x06') {
    *(undefined1 *)(param_1 + 0x2b8) = 6;
    cVar4 = *(char *)(param_1 + 0x2b9);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x2b9);
  }
  if (cVar4 != '\x06') {
    *(undefined1 *)(param_1 + 0x2b9) = 6;
    cVar5 = *(char *)(param_1 + 0x2ba);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x2ba);
  }
  if (cVar5 == '\x06') {
    return cVar4 != '\x06' ||
           (cVar3 != '\x06' || (cVar2 != '\x06' || (bVar7 || (cVar1 != '\x06' || bVar6))));
  }
  *(undefined1 *)(param_1 + 0x2ba) = 6;
  return true;
}


