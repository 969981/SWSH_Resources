/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01126d90; name: FUN_01126d90
 */


void FUN_01126d90(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x114) == 1) {
    plVar3 = *(long **)(lVar1 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x10))();
    }
    lVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined2 *)(param_1 + 0x11a));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
    FUN_011295b0(lVar6 + 0x3b8,*(undefined2 *)(param_1 + 0x11a),0);
    lVar6 = *(long *)(param_1 + 0x88);
joined_r0x01126ed4:
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      bVar5 = false;
      lVar7 = *(long *)(lVar6 + 0x3a0);
      *(long *)(lVar6 + 0x3a0) = lVar2;
      goto joined_r0x01126f0c;
    }
  }
  else if (*(int *)(param_1 + 0x114) == 0) {
    uVar4 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_01505f50(&local_38,lVar7,*(undefined2 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0x11a),
                 uVar4);
    lVar2 = local_38;
    local_38 = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    FUN_01129660(lVar6 + 0x3b8,*(undefined2 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0x11a),0);
    lVar6 = *(long *)(param_1 + 0x88);
    goto joined_r0x01126ed4;
  }
  lVar2 = 0;
  bVar5 = true;
  lVar7 = *(long *)(lVar6 + 0x3a0);
  *(undefined8 *)(lVar6 + 0x3a0) = 0;
joined_r0x01126f0c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (!bVar5) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


