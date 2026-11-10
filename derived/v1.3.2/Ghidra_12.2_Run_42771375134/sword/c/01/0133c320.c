/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133c320; name: FUN_0133c320
 */


void FUN_0133c320(long *param_1,long param_2,uint param_3,long *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long local_98;
  long *local_90;
  long local_88 [3];
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),1);
  uVar5 = thunk_FUN_012c8f90(1);
  lVar7 = *param_1;
  local_88[0] = FUN_01340410(local_88,uVar5);
  if (local_88[0] != 0) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x10))();
  }
  FUN_006d9640(lVar7,local_88);
  if (local_88[0] != 0) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    local_88[0] = 0;
  }
  local_60 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (local_88[2] != 0) {
    (**(code **)(*(long *)(local_88[2] + 0x48) + 0x10))();
  }
  local_70 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_68 = *(long *)(lVar7 + 0x58);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = FUN_01340530(*param_1,*(undefined8 *)(*param_1 + 8),&local_60,local_88);
  lVar6 = FUN_01340640(&local_58,*(undefined8 *)(lVar7 + 8));
  if (lVar6 == 0) {
    local_58 = 0;
  }
  else {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    local_58 = lVar6;
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_01310530(lVar7,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar8 = *param_1;
  lVar6 = FUN_0133f260(&local_58,*(undefined8 *)(lVar8 + 8),param_2 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_58 = lVar6;
  FUN_006d9640(lVar8,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar8 = *param_1;
  lVar6 = FUN_01340720(&local_58,*(undefined8 *)(lVar8 + 8));
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_58 = lVar6;
  FUN_006d9640(lVar8,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0130a730(lVar7);
  FUN_0130a610(lVar7,param_3 & 1);
  local_90 = (long *)*param_4;
  if (local_90 != (long *)0x0) {
    lVar6 = local_90[0xb];
    if (*(long *)(lVar6 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
      *(undefined8 *)(lVar6 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0130aa70(lVar7,&local_90);
  if (local_90 != (long *)0x0) {
    lVar6 = local_90[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*local_90 + 0x18))();
    }
    local_90 = (long *)0x0;
  }
  local_98 = *param_5;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
  }
  FUN_0130ab20(lVar7,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_88[2] != 0) {
    (**(code **)(*(long *)(local_88[2] + 0x48) + 0x18))();
  }
  return;
}


