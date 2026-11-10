/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408a70; name: FUN_00408a70
 */


void FUN_00408a70(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    lVar6 = lVar4;
    if (lVar4 != param_2) {
      do {
        lVar5 = lVar6;
        lVar6 = *(long *)(lVar5 + 8);
      } while (lVar6 != 0 && lVar6 != param_2);
    }
    if (lVar6 != 0) {
      plVar1 = param_1 + 6;
      if (lVar6 != lVar4) {
        plVar1 = (long *)(lVar5 + 8);
      }
      *plVar1 = *(long *)(lVar6 + 8);
      iVar3 = (int)param_1[9] + -1;
      *(int *)(param_1 + 9) = iVar3;
      if (iVar3 == 0) {
        if (param_1[2] == 0) {
          FUN_00406bf0(*(undefined8 *)PTR_DAT_02712a60,param_1);
        }
        else {
          FUN_00408a70(param_1[2],param_1);
        }
        uVar2 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*param_1 + 0x50))(param_1);
        FUN_00404870(uVar2,param_1);
        return;
      }
    }
  }
  return;
}


