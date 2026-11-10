/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cb6e0; name: FUN_005cb6e0
 */


undefined8 FUN_005cb6e0(undefined8 param_1,ulong param_2,long *param_3)

{
  uint uVar1;
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
          uVar1 = *(uint *)(param_3[lVar4] + 0x48);
          while ((uVar1 < *(uint *)(lVar3 + 0x48) && (lVar4 = lVar4 + 1, lVar4 < lVar5))) {
            uVar1 = *(uint *)(param_3[lVar4] + 0x48);
          }
          uVar1 = *(uint *)(param_3[lVar5] + 0x48);
          while ((*(uint *)(lVar3 + 0x48) <= uVar1 && (lVar5 = lVar5 + -1, lVar4 < lVar5))) {
            uVar1 = *(uint *)(param_3[lVar5] + 0x48);
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
      FUN_005cb6e0(param_1,uVar2,param_3);
      param_2 = param_2 + ~uVar2;
      param_3 = param_3 + uVar2 + 1;
    } while (1 < (long)param_2);
  }
  return 1;
}


