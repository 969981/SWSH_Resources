/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a980; name: FUN_0150a980
 */


char FUN_0150a980(long param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  
  param_1 = param_1 + (ulong)param_2 * 0xc;
  cVar1 = *(short *)(param_1 + 0x526) != -1;
  cVar2 = '\x02';
  if (!(bool)cVar1) {
    cVar2 = '\x01';
  }
  if (*(short *)(param_1 + 0x524) != -1) {
    cVar1 = cVar2;
  }
  if (*(short *)(param_1 + 0x528) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52a) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52c) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52e) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


