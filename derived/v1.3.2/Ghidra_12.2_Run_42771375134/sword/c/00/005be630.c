/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005be630; name: FUN_005be630
 */


undefined8 FUN_005be630(undefined8 param_1,ulong param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (1 < (long)param_2) {
    do {
      uVar2 = param_2 >> 1;
      if ((long)uVar2 < (long)param_2) {
        lVar4 = *param_3;
        *param_3 = param_3[uVar2];
        param_3[uVar2] = lVar4;
        lVar3 = *param_3;
        lVar5 = param_2 - 1;
        lVar4 = 1;
        do {
          iVar1 = *(int *)(param_3[lVar4] + 0x80);
          while ((iVar1 < *(int *)(lVar3 + 0x80) && (lVar4 = lVar4 + 1, lVar4 < lVar5))) {
            iVar1 = *(int *)(param_3[lVar4] + 0x80);
          }
          iVar1 = *(int *)(param_3[lVar5] + 0x80);
          while ((*(int *)(lVar3 + 0x80) <= iVar1 && (lVar5 = lVar5 + -1, lVar4 < lVar5))) {
            iVar1 = *(int *)(param_3[lVar5] + 0x80);
          }
          if (lVar4 < lVar5) {
            lVar6 = param_3[lVar4];
            param_3[lVar4] = param_3[lVar5];
            param_3[lVar5] = lVar6;
          }
        } while (lVar4 <= lVar5);
        uVar2 = lVar4 - 1;
        lVar4 = *param_3;
        *param_3 = param_3[uVar2];
        param_3[uVar2] = lVar4;
      }
      else {
        uVar2 = 0;
      }
      FUN_005be630(param_1,uVar2,param_3);
      param_2 = param_2 + ~uVar2;
      param_3 = param_3 + uVar2 + 1;
    } while (1 < (long)param_2);
  }
  return 1;
}


