/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01453940; name: FUN_01453940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01453940(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  FUN_00ff86a0(&local_78,*(undefined8 *)(param_1 + 0xb8),0);
  lVar3 = *(long *)(local_78 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_70 = 0x2c78bb6846049e4b;
  local_68 = "ViewBg";
  local_60 = 6;
  local_58 = 0;
  lVar1 = FUN_01456180(*(undefined8 *)(param_1 + 0x548),&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar1 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar6 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_70);
  lVar1 = local_70;
  if (local_70 != 0) {
    puVar5 = *(undefined8 **)(local_70 + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar6 = FUN_014546a0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar6) {
          puVar5 = puVar5 + -10;
          goto LAB_01453a98;
        }
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_01453a98:
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    if (puVar5 != (undefined8 *)0x0) {
      local_80 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      local_88 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_90 = local_78;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
      }
      FUN_01457610(puVar5,&local_80,&local_88,&local_90);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      local_70 = 0x2c78bb6846049e4b;
      local_68 = "ViewBg";
      local_60 = 6;
      local_58 = 0;
      lVar1 = FUN_01456180(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = -0x6deecaf0acf85bc2;
      local_68 = "ViewTitle";
      local_60 = 9;
      local_58 = 0;
      lVar1 = FUN_01456400(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = 0x1e5b5b2eb6bc8833;
      local_68 = "ViewTop";
      local_60 = 7;
      local_58 = 0;
      lVar1 = FUN_01456550(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = 0x1e5b5b2eb6bc8833;
      local_68 = "ViewTop";
      local_60 = 7;
      local_58 = 0;
      lVar1 = FUN_01456550(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        _DAT_00000830 = *(undefined8 *)(param_1 + 0x708);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        *(undefined8 *)(lVar1 + 0x830) = *(undefined8 *)(param_1 + 0x708);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = -0x51d70b0eb373b65f;
      local_68 = "ViewResult";
      local_60 = 10;
      local_58 = 0;
      lVar1 = FUN_014566a0(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = 0x195aa1f78ad23b0c;
      local_68 = "ViewCounter";
      local_60 = 0xb;
      local_58 = 0;
      lVar1 = FUN_014567f0(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_70 = -0x33a8ae78c6a77320;
      local_68 = "ViewCheck";
      local_60 = 9;
      local_58 = 0;
      lVar1 = FUN_01456940(*(undefined8 *)(param_1 + 0x548),&local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar1 == 0) {
        FUN_01461520(0);
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_01461520(lVar1);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


