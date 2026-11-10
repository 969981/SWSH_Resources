/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6d490; name: FUN_00a6d490
 */


void FUN_00a6d490(long *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  long local_38;
  
  FUN_00a6dbc0();
  FUN_00a6dd30(param_1);
  if (((param_1[0x2f3] & 1U) == 0 && param_1[0x2f2] == 0) &&
     (((*(char *)((long)param_1 + 0x1774) == '\0' || (-3 < (int)param_1[0x2ef])) ||
      ((int)param_1[0x2ee] != 0)))) {
    FUN_00b17c70(param_1[0x9d]);
    lVar5 = param_1[0xa6];
    if (lVar5 == 0) {
      FUN_015f6150(0,1);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_015f6150(lVar5,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_00a91240(param_1[0x95]);
    FUN_00a91240(param_1[0x99]);
    lVar5 = param_1[0xa8];
    if (lVar5 == 0) {
      FUN_015f6150(0,1);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_015f6150(lVar5,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    uVar4 = (**(code **)(*(long *)param_1[0x100] + 0x1a8))();
    if ((uVar4 & 1) != 0) {
      FUN_00a97330(DAT_01d4c6b8,param_1[0x95],&local_60);
      FUN_00a973e0(param_1[0x95],&local_80);
      lVar5 = param_1[0x100];
      *(undefined8 *)(lVar5 + 0x3d8) = local_58;
      *(undefined8 *)(lVar5 + 0x3d0) = local_60;
      lVar5 = param_1[0x100];
      *(char **)(lVar5 + 0x458) = local_78;
      *(undefined8 *)(lVar5 + 0x450) = local_80;
    }
    uVar4 = (**(code **)(*(long *)param_1[0x101] + 0x1a8))();
    if ((uVar4 & 1) != 0) {
      FUN_00a97330(DAT_01d4c6b8,param_1[0x99],&local_60);
      FUN_00a973e0(param_1[0x99],&local_80);
      lVar5 = param_1[0x101];
      *(undefined8 *)(lVar5 + 0x3d8) = local_58;
      *(undefined8 *)(lVar5 + 0x3d0) = local_60;
      lVar5 = param_1[0x101];
      *(char **)(lVar5 + 0x458) = local_78;
      *(undefined8 *)(lVar5 + 0x450) = local_80;
    }
  }
  lVar5 = param_1[0xa7];
  if (lVar5 == 0) {
    FUN_015f6150(0,1);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_015f6150(lVar5,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00b8bae0(param_1[0xb9]);
  puVar1 = PTR_DAT_02710848;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 == 0) {
    FUN_01009f40(&local_38,0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01009f40(&local_38,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00fb3d30(local_38);
  FUN_00a6f000(param_1);
  FUN_00a822b0(param_1,0);
  lVar5 = *(long *)(*(long *)puVar1 + 0x88);
  if (lVar5 == 0) {
    uVar4 = FUN_01067270(0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar4 = FUN_01067270(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((uVar4 & 1) != 0) {
    FUN_00a822b0(param_1,1);
  }
  if (param_1[0x3bb] != 0) {
    FUN_00aa88f0();
  }
  FUN_00a9b230(param_1[0xc1]);
  if (((char)param_1[0x2df] != '\0') &&
     (iVar3 = (**(code **)(*param_1 + 0x868))(param_1), iVar3 == 3)) {
    uVar4 = (**(code **)(*(long *)param_1[0xb0] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb0]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb0];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb1] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb1]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb1];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb2] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb2]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb2];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb3] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb3]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb3];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb4] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb4]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb4];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb5] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb5]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb5];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)param_1[0xb6] + 400))();
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_00aceb20(param_1[0xb6]);
      uVar4 = (**(code **)(*param_1 + 0xa00))(param_1,uVar2);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[0xb6];
        local_80 = 0xccd4c98737af82b6;
        local_78 = "ba_cheer";
        local_70 = 8;
        FUN_006cf0a0(&local_60,&local_80);
        FUN_00ad3010(lVar5,&local_60,0);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
    (**(code **)(*param_1 + 0xa10))(param_1);
    if (*(float *)((long)param_1 + 0x1fa4) < -2.5) {
      param_1[0x3fc] = 0;
      param_1[0x3fb] = 0;
      param_1[0x3fa] = 0;
      param_1[0x3f9] = 0;
      param_1[0x3f8] = 0;
      param_1[0x3f7] = 0;
      param_1[0x3f6] = 0;
      param_1[0x3f5] = 0;
      param_1[0x3f4] = 0;
      param_1[0x3f3] = 0;
      param_1[0x3f2] = 0;
      param_1[0x3f1] = 0;
      (**(code **)(*param_1 + 0xa08))(param_1);
    }
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


