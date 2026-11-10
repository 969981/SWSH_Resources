/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc6100; name: FUN_00bc6100
 */


undefined8 FUN_00bc6100(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  char local_90 [64];
  long local_48;
  
  lVar1 = param_1 + 0x100;
  FUN_00ffdc80(lVar1,"poke_panel");
  uVar8 = FUN_016b8190();
  uVar9 = (uint)((ulong)uVar8 >> 0x20);
  uVar4 = uVar9 - 2;
  if (1 < uVar9) {
    if ((int)uVar8 == 0) {
      if ((int)uVar4 < 6) {
        uVar5 = *(undefined4 *)(param_1 + 0x614);
        uVar8 = 1;
        uVar6 = FUN_00bcfb20(1,0,uVar4);
        goto LAB_00bc6220;
      }
    }
    else if (uVar4 < 5) {
      lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar10 == 0) {
        uVar5 = FUN_0150b350(0);
      }
      else {
        plVar12 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        uVar5 = FUN_0150b350(lVar10);
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      uVar6 = FUN_00bcfb20(0,(int)uVar8 + -1,uVar4);
      uVar8 = 0;
      goto LAB_00bc6220;
    }
  }
  uVar5 = 0xffffffff;
  uVar8 = 2;
  uVar6 = 0xffffffff;
LAB_00bc6220:
  lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),uVar8,uVar5,uVar6);
  uVar8 = 0;
  if (lVar11 != 0) {
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    iVar7 = FUN_00878830(lVar11,0);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",0);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    puVar3 = (undefined8 *)PTR_PTR_02710928;
    puVar2 = (undefined8 *)PTR_PTR_02710928;
    if (local_48 != 0) {
      puVar2 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    iVar7 = FUN_00878830(lVar11,1);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",1);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    puVar2 = puVar3;
    if (local_48 != 0) {
      puVar2 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    iVar7 = FUN_00878830(lVar11,2);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",2);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    puVar2 = puVar3;
    if (local_48 != 0) {
      puVar2 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    iVar7 = FUN_00878830(lVar11,3);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",3);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    puVar2 = puVar3;
    if (local_48 != 0) {
      puVar2 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    iVar7 = FUN_00878830(lVar11,4);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",4);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    puVar2 = puVar3;
    if (local_48 != 0) {
      puVar2 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    iVar7 = FUN_00878830(lVar11,5);
    snprintf(local_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",5);
    FUN_00bb8ff0(&local_48,local_90,&PTR_s__default_02637ad0 + iVar7);
    if (local_48 != 0) {
      puVar3 = (undefined8 *)(local_48 + 0x60);
    }
    FUN_00ffcf80(lVar1,*puVar3);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar11 = *(long *)(param_1 + 0x2b0);
    if (lVar11 == 0) {
      local_90[0] = 'B';
      local_90[1] = -0x3b;
      local_90[2] = -10;
      local_90[3] = 'o';
      local_90[4] = '^';
      local_90[5] = -0x41;
      local_90[6] = -0x40;
      local_90[7] = 'J';
      FUN_0167b9b0(0,local_90,1);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      local_90[0] = 'B';
      local_90[1] = -0x3b;
      local_90[2] = -10;
      local_90[3] = 'o';
      local_90[4] = '^';
      local_90[5] = -0x41;
      local_90[6] = -0x40;
      local_90[7] = 'J';
      FUN_0167b9b0(lVar11,local_90,1);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    local_90[0] = -0x2c;
    local_90[1] = -0x25;
    local_90[2] = -0x61;
    local_90[3] = '\x16';
    local_90[4] = '&';
    local_90[5] = 'x';
    local_90[6] = -0x55;
    local_90[7] = -0x48;
    FUN_00ffd010(lVar1,local_90);
    uVar8 = FUN_00ffdc80(lVar1,"poke_panel");
    FUN_016b2d70(uVar8,0);
    FUN_00bbb900(param_1);
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0x68c) = 1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      uVar8 = 1;
    }
  }
  return uVar8;
}


