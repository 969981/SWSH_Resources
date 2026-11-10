/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119d2b0; name: FUN_0119d2b0
 */


bool FUN_0119d2b0(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = *(long *)(param_1 + 0x278) != 0;
  cVar1 = '\x02';
  if (!(bool)cVar2) {
    cVar1 = '\x01';
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    cVar2 = cVar1;
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(long *)(param_1 + 0x2b8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (*(long *)(param_1 + 0x2e8) != 0) {
    cVar2 = cVar2 + '\x01';
  }
  cVar1 = '\x02';
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    cVar1 = '\x04';
  }
  return cVar1 == cVar2;
}


