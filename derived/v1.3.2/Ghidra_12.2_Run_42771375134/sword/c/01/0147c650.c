/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147c650; name: FUN_0147c650
 */


bool FUN_0147c650(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((*param_1 == 2) && (param_1[0x42] == 0)) {
    uVar2 = 0;
    goto LAB_0147c968;
  }
  if (param_1[6] == 0) {
LAB_0147c940:
    uVar2 = 0;
    iVar1 = *param_1;
  }
  else if (param_1[7] == 0) {
LAB_0147c950:
    uVar2 = 0;
    iVar1 = *param_1;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),0);
    uVar5 = FUN_008787d0();
    if ((uVar5 & 1) != 0) goto LAB_0147c940;
    iVar1 = FUN_0087afd0(uVar4);
    if (iVar1 == 0) goto LAB_0147c950;
    uVar2 = FUN_0087d610(uVar4,2);
    uVar2 = ~uVar2 & 1;
    iVar1 = *param_1;
  }
  if ((iVar1 != 3) && ((iVar1 != 2 || (1 < (uint)param_1[0x42])))) {
    if ((param_1[6] != 1) && (param_1[7] != 1)) {
      uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),1);
      uVar5 = FUN_008787d0();
      if (((uVar5 & 1) == 0) && (iVar1 = FUN_0087afd0(uVar4), iVar1 != 0)) {
        uVar3 = FUN_0087d610(uVar4,2);
        uVar2 = uVar2 + (~uVar3 & 1);
      }
    }
    if (*param_1 != 3) {
      if ((*param_1 == 2) && ((uint)param_1[0x42] < 3)) goto LAB_0147c968;
      if ((param_1[6] != 2) && (param_1[7] != 2)) {
        uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),2);
        uVar5 = FUN_008787d0();
        if (((uVar5 & 1) == 0) && (iVar1 = FUN_0087afd0(uVar4), iVar1 != 0)) {
          uVar3 = FUN_0087d610(uVar4,2);
          uVar2 = uVar2 + (~uVar3 & 1);
        }
      }
    }
    if (*param_1 != 3) {
      if ((*param_1 == 2) && ((uint)param_1[0x42] < 4)) goto LAB_0147c968;
      if ((param_1[6] != 3) && (param_1[7] != 3)) {
        uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),3);
        uVar5 = FUN_008787d0();
        if (((uVar5 & 1) == 0) && (iVar1 = FUN_0087afd0(uVar4), iVar1 != 0)) {
          uVar3 = FUN_0087d610(uVar4,2);
          uVar2 = uVar2 + (~uVar3 & 1);
        }
      }
      if (*param_1 != 3) {
        if ((*param_1 == 2) && ((uint)param_1[0x42] < 5)) goto LAB_0147c968;
        if ((param_1[6] != 4) && (param_1[7] != 4)) {
          uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),4);
          uVar5 = FUN_008787d0();
          if (((uVar5 & 1) == 0) && (iVar1 = FUN_0087afd0(uVar4), iVar1 != 0)) {
            uVar3 = FUN_0087d610(uVar4,2);
            uVar2 = uVar2 + (~uVar3 & 1);
          }
        }
      }
    }
    if (((*param_1 != 3) && (((*param_1 != 2 || (5 < (uint)param_1[0x42])) && (param_1[6] != 5))))
       && (param_1[7] != 5)) {
      uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),5);
      uVar5 = FUN_008787d0();
      if (((uVar5 & 1) == 0) && (iVar1 = FUN_0087afd0(uVar4), iVar1 != 0)) {
        uVar3 = FUN_0087d610(uVar4,2);
        uVar2 = uVar2 + (~uVar3 & 1);
      }
    }
  }
LAB_0147c968:
  return 1 < uVar2;
}


