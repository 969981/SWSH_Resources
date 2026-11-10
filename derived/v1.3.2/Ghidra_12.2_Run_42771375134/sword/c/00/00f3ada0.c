/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3ada0; name: FUN_00f3ada0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3ada0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_00f3b0d0(&local_60,param_1 + 0x10);
  lVar7 = local_60;
  local_60 = 0;
  lVar9 = *(long *)(param_1 + 0x508);
  puVar1 = (undefined8 *)(param_1 + 0x510);
  *(long *)(param_1 + 0x508) = lVar7;
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0x518) = local_50;
    *(undefined8 *)(param_1 + 0x520) = local_48;
    *puVar1 = local_58;
    local_60 = 0;
  }
  else {
    FUN_00f39dd0(puVar1);
    lVar7 = local_60;
    *puVar1 = local_58;
    *(undefined8 *)(param_1 + 0x518) = local_50;
    *(undefined8 *)(param_1 + 0x520) = local_48;
    local_60 = 0;
    if (lVar7 != 0) {
      FUN_00f39dd0(&local_58);
    }
  }
  *(undefined4 *)(param_1 + 0x528) = 0;
  lVar7 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,&local_60);
  lVar9 = *(long *)(*(long *)(param_1 + 0x508) + 8);
  *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(lVar9 + 0x10);
  *(undefined1 *)(lVar7 + 0xc0) = 1;
  FUN_00e978a0(lVar7,1,1);
  FUN_00e9e5e0(lVar7);
  lVar9 = *(long *)(lVar7 + 0x588);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar2 = (int *)(lVar9 + 0x54);
      iVar13 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar9 + 0x58);
          plVar8 = (long *)FUN_0156b190();
          lVar12 = 0;
          if (plVar11 == (long *)0x0) goto LAB_00f3aefc;
          while (plVar11 != plVar8) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              lVar12 = 0;
              goto LAB_00f3aefc;
            }
          }
          iVar3 = *piVar2;
          if (iVar3 != iVar13) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00f3aefc;
          }
          lVar12 = 0;
          iVar13 = iVar3;
          if (iVar3 == 0) goto LAB_00f3aefc;
        }
        ClearExclusiveLocal();
        lVar12 = 0;
        iVar13 = iVar3;
      } while (iVar3 != 0);
      goto LAB_00f3aefc;
    }
  }
  lVar12 = 0;
LAB_00f3aefc:
  local_60 = 0x73e9feb1a72e2f94;
  FUN_00dc0720(lVar12,&local_60);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  *(undefined4 *)(lVar7 + 0x67c) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined1 *)(lVar7 + 0x680) = 1;
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x750) = *(float *)(param_1 + 0x458) + *(float *)(param_1 + 0x458);
  if (*(long *)(param_1 + 0x318) != 0) {
    FUN_0167cd30(*(long *)(param_1 + 0x318),0);
    if (*(long *)(param_1 + 0x318) != 0) {
      local_60 = 0x6c024f602ab6b1c8;
      FUN_0167ba30(*(long *)(param_1 + 0x318),&local_60);
      if (*(long *)(param_1 + 0x318) != 0) {
        local_60 = -0x3c79d5a5a4a0c505;
        FUN_0167bb70(*(long *)(param_1 + 0x318),&local_60);
        if (*(long *)(param_1 + 0x318) != 0) {
          local_60 = -0x3c79d6a5a4a0c6b8;
          FUN_0167ba30(*(long *)(param_1 + 0x318),&local_60);
        }
      }
    }
  }
  puVar6 = PTR_DAT_02710848;
  *(undefined8 *)(param_1 + 0x75c) = 0;
  lVar7 = *(long *)(*(long *)puVar6 + 0x90);
  if (lVar7 == 0) {
    uVar10 = *(undefined8 *)(_DAT_00000060 + 0x630);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x60) + 0x630);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_016b1c40(uVar10,0);
  lVar7 = *(long *)(*(long *)puVar6 + 0x90);
  if (lVar7 == 0) {
    lVar7 = _DAT_00000060;
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar7 = *(long *)(lVar7 + 0x60);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar6 = PTR_DAT_02710880;
  *(undefined1 *)(lVar7 + 0x790) = 0;
  FUN_01196fd0(*(undefined8 *)(*(long *)puVar6 + 0xc0),0);
  *(undefined1 *)(param_1 + 0x754) = 1;
  return;
}


