/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff7d0; name: FUN_007ff7d0
 */


void FUN_007ff7d0(int param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  if (-1 < param_1) {
    pcVar2 = (char *)(param_2 + 0xb);
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    return;
  }
  if (-10 < param_1) {
    *(char *)(param_2 + 10) = '0' - (char)param_1;
    *(undefined1 *)(param_2 + 9) = 0x2d;
    return;
  }
  iVar4 = (-10 - param_1) / 10;
  *(char *)(param_2 + 10) = (char)(-10 - param_1) + (char)iVar4 * -10 + '0';
  pcVar2 = (char *)(param_2 + 9);
  iVar4 = iVar4 + 1;
  do {
    pcVar3 = pcVar2 + -1;
    *pcVar2 = (char)iVar4 + (char)(iVar4 / 10) * -10 + '0';
    bVar1 = 9 < iVar4;
    pcVar2 = pcVar3;
    iVar4 = iVar4 / 10;
  } while (bVar1);
  *pcVar3 = '-';
  return;
}


