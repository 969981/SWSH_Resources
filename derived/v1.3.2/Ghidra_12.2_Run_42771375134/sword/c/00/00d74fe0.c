/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d74fe0; name: FUN_00d74fe0
 */


void FUN_00d74fe0(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long *local_a0;
  undefined8 local_98;
  long local_38;
  
  if (**(int **)(*param_1 + 0x280) == 2) {
    uVar2 = *(undefined1 *)(*(long *)(*param_1 + 0x278) + 0x58);
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    iVar4 = FUN_01521090(lVar5,0x62f);
    if (*(char *)(*(long *)(*param_1 + 0x280) + 8) == '\0') {
      local_98._0_2_ = CONCAT11(iVar4 != 0,uVar2);
      local_c0 = &LAB_00d75990;
      local_b8 = FUN_00d75b80;
      local_b0 = &LAB_00d75b90;
      local_a8 = &LAB_00d75ba0;
      lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
      if (lVar6 == 0) {
        local_a0 = param_1;
        FUN_00c58c10(&local_38,0);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        local_a0 = param_1;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_00c58c10(&local_38,lVar6);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      FUN_00cc4500(local_38,uVar2,&local_c0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      pcVar3 = local_b8;
      bVar1 = local_b8 != (code *)0x0;
      local_b8 = (code *)0x0;
      if (bVar1) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar3)(&local_a0);
      }
    }
    else {
      FUN_00d752f0(param_1,1);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    return;
  }
  if (**(int **)(*param_1 + 0x280) != 1) {
    return;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(*(long *)(*param_1 + 0x278) + 0x58);
  FUN_00d752f0(param_1,0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_c0 = &LAB_00d75770;
  local_b8 = FUN_00d75900;
  local_b0 = &LAB_00d75940;
  local_a8 = &LAB_00d75970;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  local_98 = lVar5;
  if (lVar6 == 0) {
    local_a0 = param_1;
    FUN_00c58c10(&local_38,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    local_a0 = param_1;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_00c58c10(&local_38,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_00cc4500(local_38,uVar2,&local_c0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(&local_a0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


