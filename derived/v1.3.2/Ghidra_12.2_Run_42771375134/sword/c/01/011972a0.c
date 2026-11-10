/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011972a0; name: FUN_011972a0
 */


void FUN_011972a0(long *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_80;
  undefined1 auStack_78 [40];
  long *local_48;
  
  iVar1 = FUN_0120e610(*(undefined8 *)PTR_DAT_027185f8);
  FUN_011ffb90(&local_48,*(undefined8 *)PTR_DAT_02718f20,1 - iVar1);
  if (local_48 == (long *)0x0) {
    lVar3 = *(long *)(param_2 + 0x88);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (long *)(lVar3 + 0x48);
    pcVar2 = *(code **)(*plVar4 + 0x10);
  }
  else {
    lVar3 = *local_48;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar5 = local_48[1];
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar6 = local_48[2];
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar7 = local_48[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = local_48[4];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar9 = *(undefined8 *)PTR_DAT_02710848;
    local_80 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_0161e410(auStack_78,&local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    FUN_00d8bec0(param_1,uVar9,auStack_78);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (long *)(lVar3 + 0x48);
    pcVar2 = *(code **)(*plVar4 + 0x18);
  }
  (*pcVar2)(plVar4);
  return;
}


