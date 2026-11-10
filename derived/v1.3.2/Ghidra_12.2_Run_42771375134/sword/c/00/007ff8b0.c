/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff8b0; name: FUN_007ff8b0
 */


char * FUN_007ff8b0(uint param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1 < 1000000000) {
    if (param_1 < 100) {
      if (param_1 < 10) {
        *param_2 = (char)param_1 + '0';
        param_2[1] = '\0';
        return param_2 + 1;
      }
      goto LAB_007ff968;
    }
    if (0x270 < param_1 >> 4) {
      if (999999 < param_1) {
        if (99999999 < param_1) {
          uVar2 = (ulong)(param_1 / 100000000);
          pcVar1 = param_2 + 1;
          *param_2 = (char)(param_1 / 100000000) + '0';
          goto LAB_007ff8e0;
        }
        if (9999999 < param_1) goto LAB_007ff8ec;
        uVar2 = (ulong)(param_1 / 1000000);
        pcVar1 = param_2 + 1;
        *param_2 = (char)(param_1 / 1000000) + '0';
        goto LAB_007ff90c;
      }
      if (0xc34 < param_1 >> 5) goto LAB_007ff918;
      uVar2 = (ulong)param_1 / 10000;
      pcVar1 = param_2 + 1;
      *param_2 = (char)(param_1 / 10000) + '0';
      goto LAB_007ff938;
    }
    if (999 < param_1) goto LAB_007ff940;
    uVar2 = (ulong)(param_1 & 0xffff) / 100;
    pcVar1 = param_2 + 1;
    *param_2 = (char)((param_1 & 0xffff) / 100) + '0';
  }
  else {
    uVar2 = (ulong)param_1 / 100000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_02140508 + uVar2 * 2);
LAB_007ff8e0:
    param_1 = param_1 + (int)uVar2 * -100000000;
    param_2 = pcVar1;
LAB_007ff8ec:
    uVar2 = (ulong)param_1 / 1000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_02140508 + uVar2 * 2);
LAB_007ff90c:
    param_1 = param_1 + (int)uVar2 * -1000000;
    param_2 = pcVar1;
LAB_007ff918:
    uVar2 = (ulong)param_1 / 10000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_02140508 + uVar2 * 2);
LAB_007ff938:
    param_1 = param_1 + (int)uVar2 * -10000;
    param_2 = pcVar1;
LAB_007ff940:
    uVar2 = (ulong)param_1 / 100;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_02140508 + uVar2 * 2);
  }
  param_1 = param_1 + (int)uVar2 * -100;
  param_2 = pcVar1;
LAB_007ff968:
  *(undefined2 *)param_2 = *(undefined2 *)(&DAT_02140508 + (long)(int)param_1 * 2);
  param_2[2] = '\0';
  return param_2 + 2;
}


