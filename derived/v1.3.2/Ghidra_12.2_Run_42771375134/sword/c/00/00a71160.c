/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a71160; name: FUN_00a71160
 */


char FUN_00a71160(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(int *)(param_1 + 0x1704) != 0xff;
  cVar2 = '\x01';
  if ((bool)cVar1) {
    cVar2 = '\x02';
  }
  if (*(int *)(param_1 + 0x1708) != 0xff) {
    cVar1 = cVar2;
  }
  if (*(int *)(param_1 + 0x170c) != 0xff) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x1710) != 0xff) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x1714) != 0xff) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x1718) != 0xff) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x171c) != 0xff) {
    cVar1 = cVar1 + '\x01';
  }
  if (cVar1 == '\0' && ((param_2 ^ 0xffffffff) & 1) == 0) {
    cVar1 = '\x01';
  }
  return cVar1;
}


