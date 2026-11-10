/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6e970; name: FUN_00d6e970
 */


void FUN_00d6e970(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long local_68;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar7 = param_3[3];
  lVar1 = param_3[4];
  lVar6 = param_3[1];
  lVar2 = param_3[2];
  lVar8 = lVar7;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar8 = param_3[3];
  }
  lVar3 = param_3[5];
  if (lVar8 == 0) {
    lVar8 = *param_3;
  }
  else {
    lVar8 = *param_3;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  bVar4 = lVar7 != 0;
  bVar5 = lVar8 != 0;
  if (bVar4 && bVar5) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  pcVar9 = *(code **)(param_1 + 0x6b8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    (*pcVar9)(param_1 + 0x6d0);
  }
  *(long *)(param_1 + 0x6d0) = param_1;
  *(undefined4 *)(param_1 + 0x6d8) = param_5;
  plVar10 = (long *)(param_1 + 0x700);
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(long *)(param_1 + 0x6e8) = lVar6;
  *(long *)(param_1 + 0x6f0) = lVar2;
  *(long *)(param_1 + 0x6f8) = lVar7;
  if (lVar1 == 0) {
    *plVar10 = 0;
    *(int *)(param_1 + 0x708) = (int)lVar3;
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar6 = *plVar10;
    *plVar10 = lVar1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x708) = (int)lVar3;
  }
  if (lVar7 == 0) {
    *(long *)(param_1 + 0x6e0) = lVar8;
  }
  else {
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(param_1 + 0x6e0);
    *(long *)(param_1 + 0x6e0) = lVar8;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x6a8);
  *(undefined1 **)(param_1 + 0x6b0) = &LAB_00d6ff20;
  *(undefined1 **)(param_1 + 0x6b8) = &LAB_00d70340;
  *(undefined8 *)(param_1 + 0x710) = param_4;
  *(undefined1 **)(param_1 + 0x6c0) = &LAB_00d703c0;
  *(undefined1 **)(param_1 + 0x6c8) = &LAB_00d704d0;
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_006e1e70(lVar7,param_1 + 0x6a0,1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (bVar4 && bVar5) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (bVar4 && bVar5) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  FUN_006dccd0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,param_4,0);
  if (*(long *)(param_1 + 0x6a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6a8) = 0;
  }
  *(long *)(param_1 + 0x6a8) = local_68;
  if (local_68 != 0) {
    plVar10 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((*(long *)(param_1 + 0x6b0) != 0) || (*(long *)(param_1 + 0x730) != 0)) {
      FUN_006e1e70(local_68,param_1 + 0x6a0,1);
    }
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  return;
}


