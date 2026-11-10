/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e29c0; name: FUN_008e29c0
 */


undefined8 FUN_008e29c0(long param_1,char param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  
  if (param_2 == '\x12') {
    return 0;
  }
  cVar6 = *(char *)(param_1 + 0x2ac);
  bVar3 = (*(byte *)(param_1 + 0x158) & 7) != 0;
  cVar1 = *(char *)(param_1 + 0x2ad);
  bVar4 = cVar1 != '\x12';
  bVar5 = cVar1 != '\x02';
  cVar2 = cVar1;
  if (*(char *)(param_1 + 0x35e) < '\0') {
    if (cVar6 != '\x12' && (cVar6 != '\x02' || !bVar3)) goto joined_r0x008e2a8c;
    cVar6 = cVar1;
    if (bVar4 && (!bVar3 || bVar5)) goto joined_r0x008e2a68;
    cVar6 = '\x12';
  }
  else {
    if (cVar6 == '\x12' || cVar6 == '\x02' && bVar3) {
      cVar2 = '\0';
      cVar6 = '\0';
      if (bVar4 && (!bVar3 || bVar5)) {
        cVar2 = cVar1;
        cVar6 = cVar1;
      }
      goto joined_r0x008e2a68;
    }
joined_r0x008e2a8c:
    if (bVar4 && (!bVar3 || bVar5)) goto joined_r0x008e2a68;
  }
  cVar2 = cVar6;
joined_r0x008e2a68:
  if (cVar6 == param_2) {
    return 1;
  }
  if (cVar2 == param_2) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2ae) == param_2) {
    return 1;
  }
  return 0;
}


