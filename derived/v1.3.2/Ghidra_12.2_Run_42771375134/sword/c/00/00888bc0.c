/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888bc0; name: FUN_00888bc0
 */


undefined8 FUN_00888bc0(long *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN_008889f0();
  if (iVar3 - 0x19U < 2) {
    return 1;
  }
  if (iVar3 != 0x1b) {
    return 0;
  }
  lVar4 = *param_1;
  cVar1 = *(char *)(lVar4 + 0x15);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      bVar2 = *(byte *)(lVar4 + 0x23) & 1;
      goto joined_r0x00888c34;
    }
    if (cVar1 != '\0') {
      return 0;
    }
  }
  bVar2 = *(byte *)(lVar4 + 0x1e);
joined_r0x00888c34:
  if (bVar2 == 0) {
    return 0;
  }
  return 1;
}


