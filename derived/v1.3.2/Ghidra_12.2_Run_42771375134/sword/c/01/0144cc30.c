/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144cc30; name: FUN_0144cc30
 */


void FUN_0144cc30(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  iVar2 = FUN_01452170(param_1,param_2);
  if (iVar2 == 1) {
    uVar3 = 1;
  }
  else {
    uVar3 = 5;
  }
  FUN_0152d930(lVar6,param_2,uVar3);
  uVar3 = FUN_01457550();
  uVar3 = FUN_0152d950(lVar6,param_2,uVar3);
  FUN_0144c9b0(uVar3,param_2,param_3);
  iVar2 = FUN_01452170(param_1,param_2);
  if (iVar2 != 1) {
    iVar2 = *(int *)(param_1 + 0x3dc);
    if (iVar2 != 0) {
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          if (*(int *)(param_1 + 0x140 + lVar4 * 4) == param_2) {
            uVar5 = (ulong)(iVar2 - 1U);
            if ((int)lVar4 < (int)(iVar2 - 1U)) {
              do {
                lVar1 = param_1 + lVar4 * 4;
                lVar4 = lVar4 + 1;
                *(undefined4 *)(lVar1 + 0x140) = *(undefined4 *)(lVar1 + 0x144);
                uVar5 = (long)*(int *)(param_1 + 0x3dc) - 1;
              } while (lVar4 < (long)uVar5);
            }
            *(int *)(param_1 + 0x3dc) = (int)uVar5;
            goto LAB_0144cd48;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar2);
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
LAB_0144cd48:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


