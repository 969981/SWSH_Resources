/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff700; name: FUN_007ff700
 */


void FUN_007ff700(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (-1 < param_1) {
    pcVar2 = (char *)(param_2 + 0x15);
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    return;
  }
  if (-10 < param_1) {
    *(char *)(param_2 + 0x14) = '0' - (char)param_1;
    *(undefined1 *)(param_2 + 0x13) = 0x2d;
    return;
  }
  lVar4 = (-10 - param_1) / 10;
  *(char *)(param_2 + 0x14) = (char)(-10 - param_1) + (char)lVar4 * -10 + '0';
  pcVar2 = (char *)(param_2 + 0x13);
  lVar4 = lVar4 + 1;
  do {
    pcVar3 = pcVar2 + -1;
    *pcVar2 = (char)lVar4 + (char)(lVar4 / 10) * -10 + '0';
    bVar1 = 9 < lVar4;
    pcVar2 = pcVar3;
    lVar4 = lVar4 / 10;
  } while (bVar1);
  *pcVar3 = '-';
  return;
}


