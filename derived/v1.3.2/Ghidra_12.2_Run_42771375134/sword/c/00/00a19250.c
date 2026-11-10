/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19250; name: FUN_00a19250
 */


void FUN_00a19250(long param_1,long *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  bVar1 = *param_4;
  lVar5 = *(long *)(&DAT_01d4dd60 + (long)(int)param_3 * 8);
  if (((param_4[1] == 0) && (param_2 != (long *)0x0)) && (bVar1 != 0)) {
    lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,param_3);
    if (lVar3 == 0) {
      bVar1 = 1;
    }
    else {
      bVar1 = FUN_008e1600();
      bVar1 = ~bVar1 & 1;
    }
  }
  lVar3 = *(long *)(param_1 + 0x6f8);
  plVar2 = (long *)(lVar3 + lVar5 * 0x2e8);
  if (bVar1 == 0) {
    if ((*(char *)((long)plVar2 + 0x7c) != '\0') &&
       (pcVar4 = (char *)(lVar3 + lVar5 * 0x2e8 + 0x7d), *pcVar4 != '\0')) {
      *pcVar4 = '\0';
                    /* WARNING: Could not recover jumptable at 0x00a19334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return;
    }
  }
  else if ((*(char *)((long)plVar2 + 0x7c) != '\0') &&
          (pcVar4 = (char *)(lVar3 + lVar5 * 0x2e8 + 0x7d), *pcVar4 == '\0')) {
    *pcVar4 = '\x01';
    lVar5 = *(long *)(lVar3 + lVar5 * 0x2e8 + 0x80);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
                    /* WARNING: Could not recover jumptable at 0x00a192d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  return;
}


