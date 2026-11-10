/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a68230; name: FUN_00a68230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a68230(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0xbd0);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = *(long *)(param_1 + 0xbe0);
    FUN_00aac440(lVar2,1,1);
    if (lVar4 < 0x2c699c0b1880fff6) {
      if (lVar4 == -0x3ea8d9ed88fee2ee) {
        local_50 = 0xa5f7d5afebf3bfd;
        local_48 = "fi_wait_type";
        local_40 = 0xc;
        local_38 = 0;
        FUN_00aae1e0(lVar2,&local_50,2);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        uStack_68 = _UNK_01d4ba18;
        local_70 = _DAT_01d4ba10;
        uVar1 = 4;
        uStack_58 = _UNK_01d4a158;
        local_60 = _DAT_01d4a150;
      }
      else if (lVar4 == -0xac211fb4633599e) {
        uVar1 = 9;
        uStack_68 = _UNK_01d4ba08;
        local_70 = _DAT_01d4ba00;
        uStack_58 = _UNK_01d4a848;
        local_60 = _DAT_01d4a840;
      }
      else {
LAB_00a684f4:
        uVar1 = 1;
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
      }
    }
    else if (lVar4 == 0x2c699c0b1880fff6) {
      local_50 = 0xbec493688c655e39;
      local_48 = "fi_action_number";
      local_40 = 0x10;
      local_38 = 0;
      FUN_00aae1e0(lVar2,&local_50,2);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x29ae2e82414ef866;
      local_48 = "fi_action_uniq_trigger";
      local_40 = 0x16;
      local_38 = 0;
      FUN_00aadfa0(lVar2,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uStack_68 = _UNK_01d4b038;
      local_70 = _DAT_01d4b030;
      uVar1 = 0x21;
      uStack_58 = _UNK_01d4a958;
      local_60 = _DAT_01d4a950;
    }
    else {
      if (lVar4 != 0x7cc9ea6a85a2496f) goto LAB_00a684f4;
      local_50 = 0xbec493688c655e39;
      local_48 = "fi_action_number";
      uStack_58 = _UNK_01d4a848;
      local_60 = _DAT_01d4a840;
      local_40 = 0x10;
      local_38 = 0;
      FUN_00aae1e0(lVar2,&local_50,2);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x29ae2e82414ef866;
      local_48 = "fi_action_uniq_trigger";
      local_40 = 0x16;
      local_38 = 0;
      FUN_00aadfa0(lVar2,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uVar1 = 0x22;
      uStack_68 = _UNK_01d4b7d8;
      local_70 = _DAT_01d4b7d0;
    }
    FUN_00aae480(lVar2,uVar1);
    *(undefined8 *)(lVar2 + 0x3d8) = uStack_68;
    *(undefined8 *)(lVar2 + 0x3d0) = local_70;
    *(undefined8 *)(lVar2 + 0x458) = uStack_58;
    *(undefined8 *)(lVar2 + 0x450) = local_60;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
  }
  lVar2 = *(long *)(param_1 + 0xbd8);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar4 = *(long *)(param_1 + 0xbe8);
  FUN_00aac440(lVar2,1,1);
  if (lVar4 < 0x2c699c0b1880fff6) {
    if (lVar4 == -0x3ea8d9ed88fee2ee) {
      local_50 = 0xa5f7d5afebf3bfd;
      local_48 = "fi_wait_type";
      local_40 = 0xc;
      local_38 = 0;
      FUN_00aae1e0(lVar2,&local_50,2);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uStack_68 = _UNK_01d4ba18;
      local_70 = _DAT_01d4ba10;
      uVar1 = 4;
      uStack_58 = _UNK_01d4a158;
      local_60 = _DAT_01d4a150;
      goto LAB_00a687e0;
    }
    if (lVar4 == -0xac211fb4633599e) {
      uVar1 = 9;
      uStack_68 = _UNK_01d4ba08;
      local_70 = _DAT_01d4ba00;
      uStack_58 = _UNK_01d4a848;
      local_60 = _DAT_01d4a840;
      goto LAB_00a687e0;
    }
  }
  else {
    if (lVar4 == 0x2c699c0b1880fff6) {
      local_50 = 0xbec493688c655e39;
      local_48 = "fi_action_number";
      local_40 = 0x10;
      local_38 = 0;
      FUN_00aae1e0(lVar2,&local_50,2);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x29ae2e82414ef866;
      local_48 = "fi_action_uniq_trigger";
      local_40 = 0x16;
      local_38 = 0;
      FUN_00aadfa0(lVar2,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uStack_68 = _UNK_01d4b038;
      local_70 = _DAT_01d4b030;
      uVar1 = 0x21;
      uStack_58 = _UNK_01d4a958;
      local_60 = _DAT_01d4a950;
      goto LAB_00a687e0;
    }
    if (lVar4 == 0x7cc9ea6a85a2496f) {
      local_50 = 0xbec493688c655e39;
      local_48 = "fi_action_number";
      uStack_58 = _UNK_01d4a848;
      local_60 = _DAT_01d4a840;
      local_40 = 0x10;
      local_38 = 0;
      FUN_00aae1e0(lVar2,&local_50,2);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x29ae2e82414ef866;
      local_48 = "fi_action_uniq_trigger";
      local_40 = 0x16;
      local_38 = 0;
      FUN_00aadfa0(lVar2,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uVar1 = 0x22;
      uStack_68 = _UNK_01d4b7d8;
      local_70 = _DAT_01d4b7d0;
      goto LAB_00a687e0;
    }
  }
  uVar1 = 1;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
LAB_00a687e0:
  FUN_00aae480(lVar2,uVar1);
  *(undefined8 *)(lVar2 + 0x3d8) = uStack_68;
  *(undefined8 *)(lVar2 + 0x3d0) = local_70;
  *(undefined8 *)(lVar2 + 0x458) = uStack_58;
  *(undefined8 *)(lVar2 + 0x450) = local_60;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
  return;
}


