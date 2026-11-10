/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01473e30; name: FUN_01473e30
 */


void FUN_01473e30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long local_40;
  long local_38;
  
  piVar5 = *(int **)(param_1 + 0x5d0);
  if (*piVar5 == 2) {
    uVar4 = piVar5[4];
    if ((uint)piVar5[0x42] <= uVar4) {
      uVar4 = (piVar5[0x42] + uVar4) - 3;
    }
  }
  else {
    uVar4 = piVar5[4];
  }
  uVar2 = (**(code **)(**(long **)(piVar5 + 2) + 0x50))(*(long **)(piVar5 + 2),uVar4);
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar7 = *(long *)(local_38 + 0x60);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  piVar5 = *(int **)(param_1 + 0x5d0);
  if (*piVar5 == 2) {
    if ((uint)piVar5[4] < (uint)piVar5[0x42]) goto LAB_01473f18;
LAB_01473f04:
    uVar9 = 0xed75296b3446;
  }
  else {
    if ((piVar5[4] != 0) && (*piVar5 == 3)) goto LAB_01473f04;
LAB_01473f18:
    uVar9 = 0x1a38ee75296b35f9;
    uVar3 = FUN_0087d610(uVar2,2);
    if (((uVar3 & 1) != 0) || (iVar1 = FUN_0087afd0(uVar2), iVar1 == 0)) goto LAB_01473f74;
    lVar6 = *(long *)(param_1 + 0x5d0);
    iVar1 = *(int *)(lVar6 + 0x10);
    uVar9 = 0x1a38ec75296b3293;
    if ((*(int *)(lVar6 + 0x18) == iVar1) || (*(int *)(lVar6 + 0x1c) == iVar1)) goto LAB_01473f74;
    if (((*(int *)(lVar6 + 0x104) == iVar1) || (*(int *)(lVar6 + 0xe0) == iVar1)) ||
       (*(int *)(lVar6 + 0xe4) == iVar1)) {
      uVar9 = 0xf075296b395f;
    }
    else {
      uVar9 = 0xeb75296b30e0;
    }
  }
  uVar9 = uVar9 | 0x1a38000000000000;
LAB_01473f74:
  local_40 = lVar7;
  if (lVar7 == 0) {
    FUN_01473330(param_1,uVar9,0xf711f234e7fad910,&local_40);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_01473330(param_1,uVar9,0xf711f234e7fad910,&local_40);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_40 = 0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  return;
}


