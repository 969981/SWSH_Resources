/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad21c0; name: FUN_00ad21c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ad21c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long local_78;
  long local_70;
  long local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x560);
  *(undefined8 *)(param_1 + 0x560) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (*(int *)(param_1 + 0x4d0) == 2) {
LAB_00ad2238:
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  else {
    if (*(long *)(param_1 + 0x568) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x568) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x568) = 0;
      FUN_00ad96b0(param_1,local_60);
      lVar2 = *(long *)(param_1 + 0x568);
      *(undefined8 *)(param_1 + 0x568) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00ad2238;
    }
    *(undefined8 *)(param_1 + 0x568) = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_28 = *(long *)(param_1 + 0x510);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_00c7a630(local_60,lVar2,&local_28);
  if (local_60[0] == (undefined **)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)local_60[0][0xc];
    if (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(**(code **)*puVar6)(puVar6);
      if (((*PTR_DAT_02719750 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02719750), iVar1 != 0)) {
        uVar4 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_02719758 = uVar4;
        __cxa_guard_release(PTR_DAT_02719750);
      }
      if (puVar3 != (undefined8 *)0x0) {
        do {
          if (puVar3 == (undefined8 *)PTR_DAT_02719758) {
            puVar6 = puVar6 + -10;
            goto joined_r0x00ad2560;
          }
          puVar3 = (undefined8 *)*puVar3;
        } while (puVar3 != (undefined8 *)0x0);
      }
    }
    puVar6 = (undefined8 *)0x0;
joined_r0x00ad2560:
    if (local_60[0] != (undefined **)0x0) {
      (**(code **)(local_60[0][9] + 0x18))();
    }
  }
  local_60[0] = (undefined **)0x0;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (puVar6 != (undefined8 *)0x0) {
    local_60[0] = &PTR_LAB_02634000;
    local_40 = local_60;
    FUN_00c68760(puVar6,local_60);
    if (local_60 == local_40) {
      pcVar5 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_00ad236c;
      pcVar5 = (code *)(*local_40)[5];
    }
    (*pcVar5)();
  }
LAB_00ad236c:
  if (*(long *)(param_1 + 0x558) != 0) {
    FUN_00adb170();
    lVar2 = *(long *)(param_1 + 0x558);
    *(undefined8 *)(param_1 + 0x558) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_68 = *(long *)(param_1 + 0x510);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_00c7a010(lVar2,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_70 = *(long *)(param_1 + 0x518);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_00c7a010(lVar2,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_78 = *(long *)(param_1 + 0x598);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_00c7a010(lVar2,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00ac8dd0(param_1);
  lVar2 = *(long *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x4e0) = 0;
  FUN_00aa57a0(*(long *)(param_1 + 0x3c0) + 0x3d0,*(undefined4 *)(param_1 + 0x5a0));
  *(undefined4 *)(param_1 + 0x5a0) = 0x10;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  return;
}


