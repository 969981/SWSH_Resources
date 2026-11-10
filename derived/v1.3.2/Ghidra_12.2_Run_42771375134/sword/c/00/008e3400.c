/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3400; name: FUN_008e3400
 */


bool FUN_008e3400(long param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  bVar1 = '\x05' < *(char *)(param_1 + 0x2b4);
  if (bVar1) {
    cVar3 = *(char *)(param_1 + 0x2b5);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b4) = 6;
    cVar3 = *(char *)(param_1 + 0x2b5);
  }
  if (cVar3 < '\x06') {
    *(undefined1 *)(param_1 + 0x2b5) = 6;
  }
  bVar2 = *(char *)(param_1 + 0x2b6) < '\x06';
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2b6) = 6;
    cVar4 = *(char *)(param_1 + 0x2b7);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x2b7);
  }
  if (cVar4 < '\x06') {
    *(undefined1 *)(param_1 + 0x2b7) = 6;
    cVar5 = *(char *)(param_1 + 0x2b8);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x2b8);
  }
  if (cVar5 < '\x06') {
    *(undefined1 *)(param_1 + 0x2b8) = 6;
    cVar6 = *(char *)(param_1 + 0x2b9);
  }
  else {
    cVar6 = *(char *)(param_1 + 0x2b9);
  }
  if (cVar6 < '\x06') {
    *(undefined1 *)(param_1 + 0x2b9) = 6;
    cVar7 = *(char *)(param_1 + 0x2ba);
  }
  else {
    cVar7 = *(char *)(param_1 + 0x2ba);
  }
  if (cVar7 < '\x06') {
    *(undefined1 *)(param_1 + 0x2ba) = 6;
    return true;
  }
  return cVar6 < '\x06' ||
         (cVar5 < '\x06' || (cVar4 < '\x06' || (bVar2 || (cVar3 < '\x06' || !bVar1))));
}


