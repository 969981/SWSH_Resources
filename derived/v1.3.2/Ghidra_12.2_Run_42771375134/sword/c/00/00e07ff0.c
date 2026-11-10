/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e07ff0; name: FUN_00e07ff0
 */


bool FUN_00e07ff0(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_88;
  char *local_80 [3];
  long local_68;
  long local_60;
  char *local_58;
  long local_48;
  
  local_80[0] = *(char **)(param_2 + 8);
  local_58 = local_80[0];
  FUN_00df8910(&local_48,"bin/field/model/",local_80,&DAT_01cdd9ff,&local_58);
  local_58 = "_sndarea";
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00e09470();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00e08bc0();
  }
  *(undefined8 *)(param_1 + 0x60) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar5 = FUN_00da09e0(*(undefined8 *)PTR_DAT_0271e770,7);
  puVar3 = (undefined8 *)PTR_PTR_02710928;
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  if (local_48 != 0) {
    puVar2 = (undefined8 *)(local_48 + 0x60);
  }
  local_80[0] = (char *)*puVar2;
  FUN_00df8ce0(&local_60,local_80,&local_58,".gfbcol");
  FUN_006cf0c0(local_80,&local_60);
  lVar1 = lVar5 + 0x120;
  lVar6 = FUN_006e2ec0(lVar1,local_80[0]);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar6 < 1) {
LAB_00e08250:
    bVar4 = false;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    if ((param_4 & 1) == 0) {
      FUN_006cf0c0(local_80,&local_60);
      lVar6 = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        lVar6 = lVar1;
      }
      uVar7 = FUN_00e09510(uVar8,local_80,param_3,lVar6);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_006cf0c0(local_80,&local_60);
      lVar6 = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        lVar6 = lVar1;
      }
      uVar7 = FUN_00e09700(uVar8,local_80,param_3,lVar6);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
    }
    local_68 = 0;
    if ((uVar7 & 1) != 0) {
      if (local_48 != 0) {
        puVar3 = (undefined8 *)(local_48 + 0x60);
      }
      local_80[0] = (char *)*puVar3;
      FUN_00df8d90(&local_88,local_80,&local_58,&DAT_01cfd905);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      if ((param_4 & 1) == 0) {
        FUN_006cf0c0(local_80,&local_88);
        lVar6 = 0;
        if (*(long *)(lVar5 + 0x18) != 0) {
          lVar6 = lVar1;
        }
        uVar7 = FUN_00e08c50(uVar8,local_80,param_3,lVar6);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if ((uVar7 & 1) == 0) goto LAB_00e08220;
LAB_00e082e8:
        bVar4 = false;
      }
      else {
        FUN_006cf0c0(local_80,&local_88);
        lVar6 = 0;
        if (*(long *)(lVar5 + 0x18) != 0) {
          lVar6 = lVar1;
        }
        uVar7 = FUN_00e08e40(uVar8,local_80,param_3,lVar6);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if ((uVar7 & 1) != 0) goto LAB_00e082e8;
LAB_00e08220:
        bVar4 = true;
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (!bVar4) goto LAB_00e08250;
    }
    bVar4 = true;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return !bVar4;
}


