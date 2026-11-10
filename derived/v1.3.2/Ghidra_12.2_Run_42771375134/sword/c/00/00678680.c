/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00678680; name: FUN_00678680
 */


undefined8 FUN_00678680(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (param_2[1] != 0) {
    plVar8 = (long *)param_2[2];
    uVar1 = *(uint *)(*plVar8 + 8);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar3 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 0x118) < 0) {
        return 0;
      }
      lVar3 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),1);
      if (lVar3 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*plVar8 + 8);
    }
    if ((uVar1 >> 1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar4 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 0x11c) < 0) {
        return 0;
      }
      lVar4 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),2);
      if (lVar4 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*plVar8 + 8);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar5 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 0x120) < 0) {
        return 0;
      }
      lVar5 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),3);
      if (lVar5 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*plVar8 + 8);
    }
    if ((uVar1 >> 4 & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar6 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 0x124) < 0) {
        return 0;
      }
      lVar6 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),5);
      if (lVar6 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*plVar8 + 8);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar7 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 0x128) < 0) {
        return 0;
      }
      lVar7 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),4);
      if (lVar7 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(*plVar8 + 8);
    }
    if ((uVar1 >> 5 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x90))();
      if (*(int *)(lVar9 + 0x20) != 0) {
        return 0;
      }
      if (*(int *)(param_2[1] + 300) < 0) {
        return 0;
      }
      lVar9 = FUN_0066cf10(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x18),6);
      if (lVar9 == 0) {
        return 0;
      }
    }
    plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x168))
                               (*(long **)(param_1 + 0x18),0,0,0);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    if (lVar9 == 0) {
      uVar2 = (**(code **)(*plVar8 + 0x90))(plVar8,lVar3,lVar4,lVar5,lVar6,lVar7);
    }
    else {
      uVar2 = (**(code **)(*plVar8 + 0xa0))(plVar8,lVar9);
    }
    if ((uVar2 & 1) != 0) {
      *param_2 = (long)plVar8;
      return 1;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  return 0;
}


