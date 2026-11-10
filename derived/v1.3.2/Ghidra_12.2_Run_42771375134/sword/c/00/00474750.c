/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474750; name: FUN_00474750
 */


int FUN_00474750(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  for (plVar4 = *(long **)(param_1 + 0x40); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    *(undefined4 *)(plVar4 + 5) = 0;
    *(undefined4 *)(plVar4 + 2) = 0;
    *(undefined4 *)(plVar4 + 4) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  lVar1 = param_1 + 0x30;
  lVar2 = param_1 + 0x18;
  local_70 = 0;
  if (plVar4 != (long *)0x0) {
    do {
      *(undefined4 *)(plVar4 + 5) = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      *(undefined4 *)(plVar4 + 4) = 0;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    local_70 = *(undefined8 *)(param_1 + 0x28);
  }
  local_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = 0;
  uStack_68 = 0;
  for (lVar7 = *(long *)(param_1 + 0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
    if (*(int *)(lVar7 + 0x6c) == 3) {
LAB_004747e8:
      lVar5 = *(long *)(lVar7 + 0x50);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 8) != -1) {
          *(int *)(lVar7 + 0x68) = *(int *)(lVar5 + 8);
        }
        *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(lVar5 + 0xc);
      }
      *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + param_2;
      if (*(int *)(lVar7 + 0x6c) != 3) {
        iVar3 = *(int *)(lVar7 + 0x7c);
        iVar6 = *(int *)(lVar7 + 0x74);
        goto LAB_00474824;
      }
LAB_0047482c:
      iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
      if (iVar3 == 1) {
        iVar3 = FUN_00474b80(param_1,lVar2,&local_70,lVar7);
      }
      else {
        if (iVar3 != 0) goto LAB_00474860;
        iVar3 = FUN_004749b0(param_1,lVar1,&local_60,lVar7);
      }
      if (iVar3 != 1) goto LAB_00474894;
    }
    else {
      iVar3 = *(int *)(lVar7 + 0x7c);
      iVar6 = *(int *)(lVar7 + 0x74);
      if (iVar3 < iVar6) goto LAB_004747e8;
LAB_00474824:
      if (iVar3 < iVar6) goto LAB_0047482c;
    }
LAB_00474860:
  }
  iVar3 = 1;
LAB_00474894:
  FUN_00474e80(param_1,lVar1,&local_60);
  FUN_00474f80(param_1,lVar2,&local_70);
  local_60 = *(undefined8 *)(param_1 + 0x40);
  local_70 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    while( true ) {
      if (lVar7 == lVar5) {
        for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
          *(undefined8 *)(lVar5 + 0x50) = 0;
        }
        FUN_00475340(*(undefined8 *)(param_1 + 0x40),param_2);
        FUN_00475430(*(undefined8 *)(param_1 + 0x28),param_2);
        return iVar3;
      }
      if ((*(int *)(lVar5 + 0x6c) == 3) || (*(int *)(lVar5 + 0x7c) < *(int *)(lVar5 + 0x74))) break;
      *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_004748d4:
      lVar5 = *(long *)(lVar5 + 8);
    }
    iVar6 = *(int *)(*(long *)(lVar5 + 0x10) + 0x18);
    if (iVar6 == 1) {
      FUN_004751e0(param_1,lVar2,&local_70,lVar5);
      lVar5 = *(long *)(lVar5 + 8);
    }
    else {
      if (iVar6 != 0) goto LAB_004748d4;
      FUN_00475080(param_1,lVar1,&local_60,lVar5);
      lVar5 = *(long *)(lVar5 + 8);
    }
  } while( true );
}


