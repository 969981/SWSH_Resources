/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d14ec0; name: FUN_00d14ec0
 */


void FUN_00d14ec0(long param_1)

{
  char cVar1;
  undefined *__s2;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  char *local_48;
  
  iVar4 = *(int *)(param_1 + 0x2c4);
  if (iVar4 == 2) {
    FUN_0102bd20(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
    uVar5 = FUN_0102d7e0(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
    if ((uVar5 & 1) != 0) {
      for (plVar9 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x120); plVar9 != (long *)0x0;
          plVar9 = (long *)*plVar9) {
        lVar6 = plVar9[3];
        lVar10 = *(long *)(lVar6 + 0x108);
        if (lVar10 != 0) {
          plVar7 = *(long **)(lVar6 + 0x100);
          plVar11 = plVar7;
          do {
            while (lVar8 = *plVar11, lVar8 == 0) {
              if (DAT_000000a4 == '\0') {
                return;
              }
              plVar11 = plVar11 + 1;
              if (plVar11 == plVar7 + lVar10) goto LAB_00d15018;
            }
            plVar7 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar7 + 0x10))(plVar7);
            cVar1 = *(char *)(lVar8 + 0xa4);
            (**(code **)(*plVar7 + 0x18))(plVar7);
            if (cVar1 == '\0') {
              return;
            }
            plVar7 = *(long **)(lVar6 + 0x100);
            lVar10 = *(long *)(lVar6 + 0x108);
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar7 + lVar10);
        }
LAB_00d15018:
      }
      FUN_00d15790(param_1);
      FUN_01063680();
      *(undefined8 *)(param_1 + 0x2c0) = 0x100000002;
    }
  }
  else {
    if (iVar4 == 1) {
      lVar10 = *(long *)(param_1 + 0x348);
      if (lVar10 == 0) {
        bVar3 = false;
        lVar6 = *(long *)(param_1 + 0x2b8);
        lVar8 = *(long *)(lVar6 + 0x1b8);
      }
      else {
        bVar3 = *(char *)(lVar10 + 0x170) == '\0';
        lVar6 = *(long *)(param_1 + 0x2b8);
        lVar8 = *(long *)(lVar6 + 0x1b8);
      }
      if (lVar8 == 0) {
        return;
      }
      if ((bool)(bVar3 | *(char *)(lVar8 + 0x170) == '\0')) {
        return;
      }
      if (lVar10 != 0) {
        FUN_006e2db0(&local_80,lVar10,*(undefined8 *)(lVar10 + 400));
        lVar10 = local_78;
        lVar6 = *(long *)(param_1 + 0x2b8);
        *(long *)(lVar6 + 0x790) = local_80;
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(lVar6 + 0x798);
        *(long *)(lVar6 + 0x798) = lVar10;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        lVar6 = *(long *)(param_1 + 0x2b8);
      }
      FUN_015d47a0(*(undefined8 *)(lVar6 + 0x98),0xffffffff,1);
      lVar10 = *(long *)(param_1 + 0x328);
      *(undefined8 *)(param_1 + 0x328) = 0;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      }
    }
    else {
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x2b8) + 0x7a4) = 0xffffffff;
      __s2 = PTR_s_data___02710918;
      lVar10 = *(long *)(param_1 + 0x2b8);
      __n = strlen(PTR_s_data___02710918);
      iVar4 = strncmp("bin/demo/res/system_resource/camera/screen_paste_cam.gfbcam",__s2,__n);
      if (iVar4 == 0) {
        local_48 = "bin/demo/res/system_resource/camera/screen_paste_cam.gfbcam";
        FUN_00d99c10(&local_80,&local_48,0);
      }
      else {
        FUN_00a8ccd0(&local_48,PTR_s_data___02710918,
                     "bin/demo/res/system_resource/camera/screen_paste_cam.gfbcam");
        FUN_006e5870(&local_80,&local_48,0);
        if (local_48 != (char *)0x0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = (char *)0x0;
        }
      }
      FUN_00a9a170(&local_48,*(undefined8 *)PTR_DAT_02710788,1,&local_80,0,
                   *(undefined8 *)(param_1 + 0x290),0);
      if (*(long *)(lVar10 + 0x1b8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar10 + 0x1b8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar10 + 0x1b8) = 0;
      }
      pcVar2 = local_48;
      *(char **)(lVar10 + 0x1b8) = local_48;
      if (local_48 != (char *)0x0) {
        plVar9 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        if ((*(long *)(lVar10 + 0x1c0) != 0) || (*(long *)(lVar10 + 0x240) != 0)) {
          FUN_006e1e70(pcVar2,lVar10 + 0x1b0,1);
        }
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if ((local_68 != 0) && (local_80 != 0)) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      }
      local_80 = 0;
      local_78 = 0xcbf29ce484222645;
      local_70 = &DAT_01d38550;
      local_68 = 0;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
    }
    *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
  }
  return;
}


