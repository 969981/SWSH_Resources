/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08cf0; name: FUN_00a08cf0
 */


void FUN_00a08cf0(long param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  
  bVar1 = false;
  uVar8 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar6 = 2;
  switch(param_2) {
  case 0:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
    uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
    if ((uVar3 & 1) == 0) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x20),1,1);
      FUN_00a24e40(*(undefined8 *)(param_1 + 0x20));
    }
    iVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
    if (iVar2 == 2) {
      FUN_00ffa290(*(undefined8 *)(param_1 + 0x28),1,1);
    }
    bVar1 = false;
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar6 = 2;
    break;
  case 1:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
    bVar1 = false;
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 1;
    uVar6 = 1;
    break;
  case 2:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
    bVar1 = false;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar9 = 1;
    break;
  case 3:
    uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
    if ((uVar3 & 1) != 0) {
      FUN_00a0bd50(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390),param_3);
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
    uVar8 = *(undefined1 *)(param_1 + 0x48);
    iVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
    bVar1 = iVar2 == 2;
    uVar9 = 1;
    *(undefined1 *)(param_1 + 0x48) = 0;
    goto LAB_00a09124;
  case 4:
    FUN_00a24e40(*(undefined8 *)(param_1 + 0x20));
    return;
  case 5:
    FUN_00a12d80(*(undefined8 *)(param_1 + 0x40));
    goto LAB_00a08f7c;
  default:
    goto switchD_00a08d44_caseD_6;
  case 10:
  case 0xc:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
LAB_00a08f7c:
    bVar1 = false;
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 2;
    break;
  case 0xb:
  case 0x10:
  case 0x14:
    break;
  case 0xd:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = 0x28;
LAB_00a090d8:
      FUN_00a0e3b0(uVar6,plVar5,uVar4);
      return;
    }
    goto LAB_00a08ebc;
  case 0xe:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar5,0);
    }
    else {
      FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    }
    bVar1 = false;
    uVar8 = 0;
    uVar9 = 0;
LAB_00a09124:
    uVar6 = 2;
    uVar7 = 1;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
    uVar3 = (**(code **)(*plVar5 + 0x8b0))(plVar5);
    if ((uVar3 & 1) == 0) {
      FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar5,0);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = 0;
      goto LAB_00a090d8;
    }
LAB_00a08ebc:
    FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar5,
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
    return;
  }
  uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
  if ((uVar3 & 1) == 0) {
    local_5c = uVar7;
    local_5b = bVar1;
    local_5a = uVar9;
    local_59 = uVar8;
    FUN_00a242b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),
                 uVar6,&local_5c);
    iVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
    if (iVar2 == 2) {
      FUN_00a0db80(*(undefined8 *)(param_1 + 0x28),uVar6,uVar7);
    }
  }
  else {
    local_56 = 0;
    local_58 = uVar7;
    local_57 = bVar1;
    FUN_00a19190(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),
                 uVar6,&local_58);
    if (param_2 == 5) {
      FUN_00a19130(*(undefined8 *)(param_1 + 0x38));
    }
    else if (param_2 == 3) {
      FUN_00a190d0(*(undefined8 *)(param_1 + 0x38));
    }
  }
switchD_00a08d44_caseD_6:
  return;
}


