/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1480; name: FUN_006a1480
 */


void FUN_006a1480(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_3 == 2) {
    lVar2 = *(long *)(param_2 + 0x20);
    for (lVar1 = *(long *)(param_2 + 0x18); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
      iVar3 = FUN_006a2210(lVar1);
      if ((iVar3 == 1) && (*(long *)(param_2 + 0x10) != 0)) {
        plVar5 = (long *)FUN_006a1cd0(lVar1);
        plVar7 = (long *)**(long **)(param_2 + 0x10);
        plVar6 = (long *)(*(long **)(param_2 + 0x10))[1];
        if ((plVar7 != plVar6) && (*plVar7 != *plVar5)) {
          do {
            plVar7 = plVar7 + 0x24;
            if (plVar6 == plVar7) goto LAB_006a1518;
          } while (*plVar7 != *plVar5);
        }
        if ((plVar7 != plVar6) && ((code *)plVar7[0x14] != (code *)0x0)) {
          (*(code *)plVar7[0x14])(plVar7 + 0x18,lVar1);
        }
      }
LAB_006a1518:
    }
  }
  else if (param_3 == 1) {
    FUN_006a1680(param_1,param_2);
  }
  else if (param_3 == 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    for (lVar1 = *(long *)(param_2 + 0x18); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
      iVar3 = FUN_006a2210(lVar1);
      FUN_006a2190(param_1,lVar1);
      iVar4 = FUN_006a2210(lVar1);
      if (iVar3 != iVar4) {
        FUN_006a1750(param_2,lVar1,iVar3,iVar4);
      }
    }
  }
  *(int *)(param_2 + 0x48) = (int)param_1;
  return;
}


