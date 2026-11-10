/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3ef0; name: FUN_005c3ef0
 */


undefined8 FUN_005c3ef0(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (1 < (long)param_2) {
    do {
      uVar1 = param_2 >> 1;
      if ((long)uVar1 < (long)param_2) {
        lVar3 = *param_3;
        *param_3 = param_3[uVar1];
        param_3[uVar1] = lVar3;
        lVar2 = *param_3;
        lVar4 = param_2 - 1;
        lVar3 = 1;
        do {
          uVar1 = *(ulong *)(param_3[lVar3] + 0x18);
          while ((uVar1 < *(ulong *)(lVar2 + 0x18) && (lVar3 = lVar3 + 1, lVar3 < lVar4))) {
            uVar1 = *(ulong *)(param_3[lVar3] + 0x18);
          }
          uVar1 = *(ulong *)(param_3[lVar4] + 0x18);
          while ((*(ulong *)(lVar2 + 0x18) <= uVar1 && (lVar4 = lVar4 + -1, lVar3 < lVar4))) {
            uVar1 = *(ulong *)(param_3[lVar4] + 0x18);
          }
          if (lVar3 < lVar4) {
            lVar5 = param_3[lVar3];
            param_3[lVar3] = param_3[lVar4];
            param_3[lVar4] = lVar5;
          }
        } while (lVar3 <= lVar4);
        uVar1 = lVar3 - 1;
        lVar3 = *param_3;
        *param_3 = param_3[uVar1];
        param_3[uVar1] = lVar3;
      }
      else {
        uVar1 = 0;
      }
      FUN_005c3ef0(param_1,uVar1,param_3);
      param_2 = param_2 + ~uVar1;
      param_3 = param_3 + uVar1 + 1;
    } while (1 < (long)param_2);
  }
  return 1;
}


