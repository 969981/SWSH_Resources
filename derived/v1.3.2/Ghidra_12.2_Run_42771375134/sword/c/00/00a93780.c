/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a93780; name: FUN_00a93780
 */


void FUN_00a93780(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_320 [148];
  undefined2 local_28c;
  undefined8 local_288;
  undefined1 local_22a;
  undefined8 local_218;
  undefined8 uStack_210;
  
  *(undefined2 *)(param_1 + 0xc1) = 0x101;
  if (*(char *)(param_1 + 0x71a) != '\0') {
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x400);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    bVar2 = *(int *)(param_1 + 0x28) != 0;
    FUN_01052d20(lVar6,1);
    plVar3 = (long *)FUN_01052410(lVar6);
    (**(code **)(*plVar3 + 0x70))(plVar3,1,0);
    FUN_01053890(lVar6,1);
    FUN_00a855e0(*(undefined8 *)(param_1 + 8),1,bVar2);
    FUN_00a82a90(*(undefined8 *)(param_1 + 8),1,bVar2);
    FUN_00a82ce0(*(undefined8 *)(param_1 + 8),1,bVar2);
    lVar9 = 0x548;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + lVar9);
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
        uVar4 = (**(code **)(*plVar3 + 400))(plVar3);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar3 + 0x1a0))(plVar3,1,bVar2);
        }
      }
      plVar8 = *(long **)(*(long *)(param_1 + 8) + lVar9 + 0x38);
      if (plVar8 != (long *)0x0) {
        plVar7 = plVar8 + 9;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar4 = (**(code **)(*plVar8 + 400))(plVar8);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar8 + 0x1a0))(plVar8,1,bVar2);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x580);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x920);
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 0;
    FUN_00a6d2f0(*(long *)(param_1 + 8));
    plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x920);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
    (**(code **)(*plVar3 + 0x198))(plVar3,0);
  }
  plVar8 = (long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x119) == '\0') {
LAB_00a93a58:
    cVar1 = *(char *)(param_1 + 0x719);
  }
  else {
    *(undefined1 *)(param_1 + 0x119) = 0;
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar6 == 0) {
      pvVar5 = (void *)FUN_01052d00(0);
      memcpy(auStack_320,pvVar5,0x2c0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      pvVar5 = (void *)FUN_01052d00(lVar6);
      memcpy(auStack_320,pvVar5,0x2c0);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_22a = 0;
    local_218 = 0x3f8000003f800000;
    uStack_210 = 0;
    lVar6 = *(long *)(*plVar8 + 0x3f8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_01052cc0(lVar6,auStack_320);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      goto LAB_00a93a58;
    }
    FUN_01052cc0(0,auStack_320);
    cVar1 = *(char *)(param_1 + 0x719);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x719) = 0;
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar6 == 0) {
      pvVar5 = (void *)FUN_01052d00(0);
      memcpy(auStack_320,pvVar5,0x2c0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      pvVar5 = (void *)FUN_01052d00(lVar6);
      memcpy(auStack_320,pvVar5,0x2c0);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_28c = 0;
    local_288 = 0x42c8000040000000;
    lVar6 = *(long *)(*plVar8 + 0x3f8);
    if (lVar6 == 0) {
      FUN_01052cc0(0,auStack_320);
      cVar1 = *(char *)(param_1 + 0x170);
      plVar7 = (long *)PTR_DAT_02710848;
      goto joined_r0x00a93b8c;
    }
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_01052cc0(lVar6,auStack_320);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  cVar1 = *(char *)(param_1 + 0x170);
  plVar7 = (long *)PTR_DAT_02710848;
joined_r0x00a93b8c:
  PTR_DAT_02710848 = (undefined *)plVar7;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x170) = 0;
    lVar6 = *(long *)(*plVar7 + 0x88);
    if (lVar6 == 0) {
      FUN_01067170(0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_01067170(lVar6);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    FUN_00a93c00(param_1);
  }
  if (*(char *)(param_1 + 0x718) != '\0') {
    *(undefined1 *)(param_1 + 0x718) = 0;
    FUN_00a85b80(*(undefined8 *)(param_1 + 8));
  }
  FUN_00a71390(*plVar8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  return;
}


