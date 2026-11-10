/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013f8620; name: FUN_013f8620
 */


void FUN_013f8620(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 *local_68;
  char *local_60;
  undefined1 *local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_00ff5c80(param_1,param_1 + 0x550,0x1800000);
  FUN_00891380(&local_38,param_1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_013f8de0(param_1);
  FUN_00891470(param_1);
  FUN_0089b740(param_1);
  FUN_0089b980(&local_68,"bin/font/bmp/font_fs_32_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),&local_68,"font_fs_32_00.bffnt");
  }
  if ((local_50 != 0) && (local_68 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (char *)0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0089b980(&local_68,"bin/font/bmp/font_fs_42_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),&local_68,"font_fs_42_00.bffnt");
  }
  if ((local_50 != 0) && (local_68 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (char *)0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0089b980(&local_68,"bin/font/bmp/font_fs_72_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),&local_68,"font_fs_72_00.bffnt");
  }
  if ((local_50 != 0) && (local_68 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (char *)0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_68 = (undefined1 *)0x5df1eeb2ecf00a22;
  local_60 = "common/bag.dat";
  local_58 = (undefined1 *)0xe;
  local_50 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_68,10), local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = &DAT_1f664c48b6943265;
  local_60 = "common/iteminfo.dat";
  local_58 = (undefined1 *)0x13;
  local_50 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_68,10), local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0x7881c12c426e835b;
  local_60 = "common/wazainfo.dat";
  local_58 = (undefined1 *)0x13;
  local_50 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_68,10), local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0xb9e118c346ab47a1;
  local_60 = "common/pokecamp_cooking.dat";
  local_58 = (undefined1 *)0x1b;
  local_50 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_68,10), local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = (undefined1 *)0x4aac4e2149fb4b74;
  local_60 = "common/pokecamp_kinomiinfo.dat";
  local_58 = (undefined1 *)0x1e;
  local_50 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_68,10), local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)PTR_DAT_02717468;
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_68);
  puVar1 = local_68;
  if (local_68 == (undefined1 *)0x0) {
LAB_013f8dc0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar4 = *(undefined8 **)(local_68 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_013f9d40();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar4 = puVar4 + -10;
        goto LAB_013f89cc;
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_013f89cc:
  (**(code **)(*(long *)(puVar1 + 0x48) + 0x18))(puVar1 + 0x48);
  if (puVar4 == (undefined8 *)0x0) goto LAB_013f8dc0;
  puVar4[0x13] = *(undefined8 *)(param_1 + 0x710);
  puVar4[0xe] = *(undefined8 *)(param_1 + 0x708);
  FUN_013fac60(puVar4);
  FUN_013fad90(puVar4);
  lVar3 = *(long *)(param_1 + 0x548);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(*(long *)(param_1 + 0x710) + 0x24);
  local_68 = *(undefined1 **)(lVar3 + 0x58);
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_008a15c0(&local_70,lVar3,&local_68,0,"BagViewTop");
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  *(undefined8 *)(local_70 + 0x5f0) = *(undefined8 *)(param_1 + 0x710);
  if (*(int *)(*(long *)(param_1 + 0x710) + 0x110) == 0) {
    lVar3 = *(long *)(param_1 + 0x548);
    local_68 = *(undefined1 **)(lVar3 + 0x58);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_013fa2c0(&local_88,lVar3,&local_68,0,"BagViewIngredientsCheck");
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = (undefined1 *)0x0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x548);
    local_68 = *(undefined1 **)(lVar3 + 0x58);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_013f9e70(&local_78,lVar3,&local_68,0,"BagViewIngredientsEffect");
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    *(undefined8 *)(local_78 + 0x5d0) = *(undefined8 *)(param_1 + 0x710);
    lVar3 = *(long *)(param_1 + 0x548);
    local_68 = *(undefined1 **)(lVar3 + 0x58);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_008a2190(&local_80,lVar3,&local_68,0,"BagViewShop");
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = (undefined1 *)0x0;
    }
    *(undefined8 *)(local_80 + 0x5d8) = *(undefined8 *)(param_1 + 0x710);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
      lVar3 = *(long *)(param_1 + 0x548);
      local_68 = *(undefined1 **)(lVar3 + 0x58);
      goto joined_r0x013f8be0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x548);
  local_68 = *(undefined1 **)(lVar3 + 0x58);
joined_r0x013f8be0:
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_008a2880(&local_90,lVar3,&local_68,0,"MsgWindowView");
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = (undefined1 *)0x0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x548);
  local_68 = *(undefined1 **)(lVar3 + 0x58);
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_008a2c60(&local_98,lVar3,&local_68,0,"BagViewFade");
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = (undefined1 *)0x0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x548);
  local_68 = *(undefined1 **)(lVar3 + 0x58);
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_008a2fb0(&local_a0,lVar3,&local_68,0,"CommonOptionBar");
  if (local_68 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = (undefined1 *)0x0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,1,0,0,0xd,0,1);
  if (*(int *)(*(long *)(param_1 + 0x710) + 0x110) - 1U < 2) {
    local_68 = (undefined1 *)0x99345bbd41a27d79;
    local_60 = "Play_UI_Camp_Cooking_Transition";
    local_58 = (undefined1 *)0x1f;
    local_50 = 0;
    FUN_012d6d40(&local_68);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  return;
}


