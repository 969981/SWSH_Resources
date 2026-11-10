/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6cb10; name: FUN_00c6cb10
 */


void FUN_00c6cb10(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long local_50;
  long local_48;
  long local_38;
  
  (**(code **)(*param_1 + 0x88))();
  FUN_00c6bae0(param_1);
  if ((param_1[0x1b] == 0) || (*(int *)(param_1[0x1b] + 0x54) == 0)) {
    if ((param_1[0x1d] != 0) && (*(int *)(param_1[0x1d] + 0x54) != 0)) {
      if (param_1[0xe] == 0) {
        local_50 = 0;
        lVar1 = param_1[0x1d];
        if (lVar1 == 0) goto LAB_00c6cc54;
LAB_00c6cbfc:
        lVar2 = local_50;
        plVar4 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar3 = (undefined4)param_1[0xf];
        local_38 = lVar1;
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      else {
        FUN_00c62ba0(&local_50);
        lVar1 = param_1[0x1d];
        if (lVar1 != 0) goto LAB_00c6cbfc;
LAB_00c6cc54:
        uVar3 = (undefined4)param_1[0xf];
        local_38 = 0;
        lVar2 = local_50;
      }
      FUN_00ca9590(lVar2,0,&local_38,uVar3);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
    }
    if (param_1[0xe] == 0) {
      local_50 = 0;
      lVar1 = param_1[0x1c];
      if (lVar1 == 0) goto LAB_00c6cd10;
LAB_00c6ccd0:
      lVar2 = local_50;
      plVar4 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar3 = (undefined4)param_1[0xf];
      local_38 = lVar1;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    else {
      FUN_00c62ba0(&local_50);
      lVar1 = param_1[0x1c];
      if (lVar1 != 0) goto LAB_00c6ccd0;
LAB_00c6cd10:
      uVar3 = (undefined4)param_1[0xf];
      local_38 = 0;
      lVar2 = local_50;
    }
    FUN_00ca9590(lVar2,0,&local_38,uVar3);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  else {
    if (param_1[0xe] == 0) {
      local_48 = param_1[0x1b];
      lVar1 = 0;
    }
    else {
      FUN_00c62ba0(&local_38);
      local_48 = param_1[0x1b];
      lVar1 = local_38;
    }
    local_38 = lVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00ca9ed0(lVar1,&local_48,(int)param_1[0xf]);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
      lVar1 = param_1[0x20];
      goto joined_r0x00c6cd74;
    }
  }
  lVar1 = param_1[0x20];
joined_r0x00c6cd74:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[0x20] = 0;
  }
  return;
}


