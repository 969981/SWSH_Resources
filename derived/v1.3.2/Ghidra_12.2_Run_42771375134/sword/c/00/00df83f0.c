/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df83f0; name: FUN_00df83f0
 */


bool FUN_00df83f0(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  long local_90;
  char *local_88 [3];
  long local_70;
  long local_68;
  char *local_60;
  char *local_58;
  long local_48;
  
  local_88[0] = *(char **)(param_2 + 8);
  local_58 = local_88[0];
  FUN_00df8910(&local_48,"bin/field/model/",local_88,&DAT_01cdd9ff,&local_58);
  local_58 = "_camarea";
  local_60 = "_scrollstop";
  FUN_00df89e0(param_1);
  lVar4 = FUN_00da09e0(*(undefined8 *)PTR_DAT_0271e770,7);
  puVar3 = (undefined8 *)PTR_PTR_02710928;
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  if (local_48 != 0) {
    puVar2 = (undefined8 *)(local_48 + 0x60);
  }
  local_88[0] = (char *)*puVar2;
  FUN_00df8ce0(&local_68,local_88,&local_58,".gfbcol");
  FUN_006cf0c0(local_88,&local_68);
  lVar1 = lVar4 + 0x120;
  lVar5 = FUN_006e2ec0(lVar1,local_88[0]);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar5 < 1) {
LAB_00df8680:
    bVar7 = false;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    if ((param_4 & 1) == 0) {
      FUN_006cf0c0(local_88,&local_68);
      lVar5 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar5 = lVar1;
      }
      uVar6 = FUN_00e00fd0(uVar8,local_88,param_3,lVar5);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_006cf0c0(local_88,&local_68);
      lVar5 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar5 = lVar1;
      }
      uVar6 = FUN_00e011c0(uVar8,local_88,param_3,lVar5);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      }
    }
    local_70 = 0;
    if ((uVar6 & 1) != 0) {
      puVar2 = puVar3;
      if (local_48 != 0) {
        puVar2 = (undefined8 *)(local_48 + 0x60);
      }
      local_88[0] = (char *)*puVar2;
      FUN_00df8d90(&local_90,local_88,&local_58,&DAT_01cfd905);
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      if ((param_4 & 1) == 0) {
        FUN_006cf0c0(local_88,&local_90);
        lVar5 = 0;
        if (*(long *)(lVar4 + 0x18) != 0) {
          lVar5 = lVar1;
        }
        uVar6 = FUN_00dff320(uVar8,local_88,param_3,lVar5);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB_00df8604;
LAB_00df8790:
        bVar7 = false;
      }
      else {
        FUN_006cf0c0(local_88,&local_90);
        lVar5 = 0;
        if (*(long *)(lVar4 + 0x18) != 0) {
          lVar5 = lVar1;
        }
        uVar6 = FUN_00dff510(uVar8,local_88,param_3,lVar5);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        if ((uVar6 & 1) != 0) goto LAB_00df8790;
LAB_00df8604:
        bVar7 = true;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (!bVar7) goto LAB_00df8680;
    }
    bVar7 = true;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (bVar7) {
    bVar7 = false;
    goto joined_r0x00df88b8;
  }
  puVar2 = puVar3;
  if (local_48 != 0) {
    puVar2 = (undefined8 *)(local_48 + 0x60);
  }
  local_88[0] = (char *)*puVar2;
  FUN_00df8ce0(&local_68,local_88,&local_60,".gfbcol");
  FUN_006cf0c0(local_88,&local_68);
  lVar5 = FUN_006e2ec0(lVar1,local_88[0]);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar5 < 1) {
LAB_00df8890:
    bVar7 = false;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0xa0);
    if ((param_4 & 1) == 0) {
      FUN_006cf0c0(local_88,&local_68);
      lVar5 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar5 = lVar1;
      }
      uVar6 = FUN_00e00fd0(uVar8,local_88,param_3,lVar5);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_006cf0c0(local_88,&local_68);
      lVar5 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar5 = lVar1;
      }
      uVar6 = FUN_00e011c0(uVar8,local_88,param_3,lVar5);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      }
    }
    local_70 = 0;
    if ((uVar6 & 1) != 0) {
      if (local_48 != 0) {
        puVar3 = (undefined8 *)(local_48 + 0x60);
      }
      local_88[0] = (char *)*puVar3;
      FUN_00df8d90(&local_90,local_88,&local_60,&DAT_01cfd905);
      uVar8 = *(undefined8 *)(param_1 + 0xa8);
      if ((param_4 & 1) == 0) {
        FUN_006cf0c0(local_88,&local_90);
        lVar5 = 0;
        if (*(long *)(lVar4 + 0x18) != 0) {
          lVar5 = lVar1;
        }
        uVar6 = FUN_00e01d10(uVar8,local_88,param_3,lVar5);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB_00df8860;
LAB_00df8900:
        bVar7 = false;
      }
      else {
        FUN_006cf0c0(local_88,&local_90);
        lVar5 = 0;
        if (*(long *)(lVar4 + 0x18) != 0) {
          lVar5 = lVar1;
        }
        uVar6 = FUN_00e01f00(uVar8,local_88,param_3,lVar5);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        if ((uVar6 & 1) != 0) goto LAB_00df8900;
LAB_00df8860:
        bVar7 = true;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (!bVar7) goto LAB_00df8890;
    }
    bVar7 = true;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  bVar7 = !bVar7;
joined_r0x00df88b8:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return bVar7;
}


