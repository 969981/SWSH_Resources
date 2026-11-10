/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d87d80; name: FUN_00d87d80
 */


void FUN_00d87d80(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_02710798;
  uVar4 = 1;
  if ((param_2 & 1) != 0) {
    uVar4 = 2;
  }
  iVar3 = FUN_0153d5a0(*(undefined8 *)PTR_DAT_02710798,uVar4);
  *(int *)(param_1 + 0x94) = iVar3;
  if (iVar3 == 4) {
    local_54 = 0;
    FUN_0153d540(*(undefined8 *)puVar1,&local_54);
  }
  puVar2 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 2000);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x80);
  if (lVar8 == 0) {
    FUN_00fa7da0(0);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_00fa7da0(lVar8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if ((*(uint *)(param_1 + 0x94) | 1) != 3) {
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
    if (lVar7 == 0) {
      uVar5 = FUN_01006f50(0);
      goto LAB_00d87f74;
    }
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar5 = FUN_01006f50(lVar7);
    goto LAB_00d87f1c;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(*(long *)puVar1 + 0x1e8);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar4 = FUN_01524d00(lVar6);
      *(undefined4 *)(param_1 + 0x1f8) = uVar4;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      goto LAB_00d87ec8;
    }
    uVar4 = FUN_01524d00(0);
    *(undefined4 *)(param_1 + 0x1f8) = uVar4;
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  else {
LAB_00d87ec8:
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  if (lVar7 == 0) {
    uVar5 = FUN_010072d0(0);
LAB_00d87f74:
    uVar5 = FUN_00d87fc0(uVar5,lVar6);
    FUN_00d88170(uVar5,lVar6);
    FUN_0100c420(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  plVar9 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar5 = FUN_010072d0(lVar7);
LAB_00d87f1c:
  uVar5 = FUN_00d87fc0(uVar5,lVar6);
  FUN_00d88170(uVar5,lVar6);
  FUN_0100c420(*(undefined8 *)(param_1 + 0x88));
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return;
}


