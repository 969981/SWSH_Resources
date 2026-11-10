/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a89e80; name: FUN_00a89e80
 */


void FUN_00a89e80(long *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar6 = *param_1;
  FUN_006e2db0(auStack_60,*(long *)(lVar6 + 0x14d8),*(undefined8 *)(*(long *)(lVar6 + 0x14d8) + 400)
              );
  local_e0 = &LAB_00a8a3c0;
  local_d8 = FUN_00a8a460;
  local_d0 = FUN_00a8a470;
  local_c8 = &LAB_00a8a480;
  pcVar3 = *(code **)(lVar6 + 0x708);
  local_c0 = lVar6;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x710) = 0;
    *(undefined8 *)(lVar6 + 0x718) = 0;
    *(undefined8 *)(lVar6 + 0x700) = 0;
    *(undefined8 *)(lVar6 + 0x708) = 0;
    (*pcVar3)(lVar6 + 0x720);
    if (local_d0 == (code *)0x0) {
      lVar4 = *(long *)(lVar6 + 0x6f8);
      goto joined_r0x00a8a0fc;
    }
  }
  (*local_d0)(&local_c0,lVar6 + 0x720);
  *(undefined1 **)(lVar6 + 0x718) = local_c8;
  *(code **)(lVar6 + 0x708) = local_d8;
  *(code **)(lVar6 + 0x710) = local_d0;
  *(undefined8 *)(lVar6 + 0x700) = local_e0;
  lVar4 = *(long *)(lVar6 + 0x6f8);
joined_r0x00a8a0fc:
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_006e1e70(lVar4,lVar6 + 0x6f0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(&local_c0);
  }
  FUN_00a74a70(&local_e0,"bin/battle/waza/model/PG_BgFadeMask/PG_BgFadeMask.gfbmdl");
  puVar1 = PTR_DAT_02710788;
  FUN_00a8a490(&local_110,*(undefined8 *)PTR_DAT_02710788,0,&local_e0,0,param_1[1],auStack_60);
  if (*(long *)(lVar6 + 0x6f8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x6f8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x6f8) = 0;
  }
  puVar2 = local_110;
  *(undefined1 **)(lVar6 + 0x6f8) = local_110;
  if (local_110 != (undefined1 *)0x0) {
    plVar5 = (long *)(local_110 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((*(long *)(lVar6 + 0x700) != 0) || (*(long *)(lVar6 + 0x780) != 0)) {
      FUN_006e1e70(puVar2,lVar6 + 0x6f0,1);
    }
    FUN_006e1be0(puVar2);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_00a8a290(&local_110,"bin/battle/waza/model/digda_rock/digda_rock.gfbmdl");
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  local_c0 = local_f0;
  local_d8 = (code *)local_108;
  local_d0 = (code *)local_100;
  local_f0 = 0;
  local_c8 = (undefined1 *)local_f8;
  local_b8 = local_e8;
  if (local_f8 == 0) {
    local_e0 = local_110;
  }
  else {
    if (local_e0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    }
    local_e0 = local_110;
  }
  local_110 = (undefined1 *)0x0;
  local_108 = 0xcbf29ce484222645;
  local_100 = &DAT_01d38550;
  local_f8 = 0;
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  FUN_00a8a490(&local_110,*(undefined8 *)puVar1,0,&local_e0,0,param_1[1],auStack_60);
  if (*(long *)(lVar6 + 0x818) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x818) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x818) = 0;
  }
  puVar2 = local_110;
  *(undefined1 **)(lVar6 + 0x818) = local_110;
  if (local_110 != (undefined1 *)0x0) {
    plVar5 = (long *)(local_110 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((*(long *)(lVar6 + 0x820) != 0) || (*(long *)(lVar6 + 0x8a0) != 0)) {
      FUN_006e1e70(puVar2,lVar6 + 0x810,1);
    }
    FUN_006e1be0(puVar2);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (*(long *)(lVar6 + 0x14d8) == 0) {
    *(undefined8 *)(lVar6 + 0x14d8) = 0;
  }
  else {
    FUN_006e2100(*(long *)(lVar6 + 0x14d8),lVar6 + 0x14d0);
    lVar4 = *(long *)(lVar6 + 0x14d8);
    *(undefined8 *)(lVar6 + 0x14d8) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_c8 = (undefined1 *)0x0;
  local_d0 = (code *)&DAT_01d38550;
  local_d8 = (code *)0xcbf29ce484222645;
  local_e0 = (undefined1 *)0x0;
  if (local_c0 != 0) {
    local_c8 = (undefined1 *)0x0;
    local_d0 = (code *)&DAT_01d38550;
    local_d8 = (code *)0xcbf29ce484222645;
    local_e0 = (undefined1 *)0x0;
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


