/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaadc0; name: FUN_00aaadc0
 */


void FUN_00aaadc0(long *param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  lVar15 = *(long *)(param_1[0x78] + 0x528);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  local_38 = param_1[0x98];
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,lVar15,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if ((param_2 & 1) != 0) {
    local_40 = *(long *)(param_1[0x78] + 0x528);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    local_48 = param_1[0x98];
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00ca1dc0(&local_40,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x1a8))(param_1);
  if ((uVar7 & 1) == 0) {
    (**(code **)(*param_1 + 0x198))(param_1,1);
  }
  lVar15 = local_28;
  puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar7 = *puVar9;
  uVar12 = puVar9[1];
  do {
    uVar13 = uVar7 ^ uVar12;
    iVar6 = (int)uVar12;
    iVar10 = (int)uVar7;
    uVar12 = uVar13 >> 0x1b | uVar13 << 0x25;
    uVar7 = uVar13 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar13 << 0x10;
    uVar2 = iVar10 + iVar6 & 7;
  } while (4 < uVar2);
  *puVar9 = uVar7;
  puVar9[1] = uVar12;
  puVar5 = PTR_DAT_02719750;
  if (uVar2 == 4) {
    (**(code **)(*param_1 + 0x198))(param_1,0);
  }
  else {
    if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
      lVar17 = 0;
    }
    else {
      piVar1 = (int *)(local_28 + 0x54);
      puVar11 = (undefined8 *)PTR_DAT_02719758;
      iVar10 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          puVar16 = *(undefined8 **)(lVar15 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar11 = (undefined8 *)PTR_DAT_02719758;
            if (iVar6 != 0) {
              uVar8 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_02719758 = uVar8;
              __cxa_guard_release(puVar5);
              puVar11 = (undefined8 *)PTR_DAT_02719758;
            }
          }
          lVar17 = 0;
          if (puVar16 == (undefined8 *)0x0) goto LAB_00aab030;
          while (puVar16 != puVar11) {
            puVar16 = (undefined8 *)*puVar16;
            if (puVar16 == (undefined8 *)0x0) {
              lVar17 = 0;
              goto LAB_00aab030;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x60);
            lVar17 = 0;
            if (lVar15 != 0) {
              lVar17 = lVar15 + -0x50;
            }
            goto LAB_00aab030;
          }
          lVar17 = 0;
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00aab030;
        }
        ClearExclusiveLocal();
        lVar17 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00aab030:
    local_68 = -0x93af4cb425dbc3d;
    local_60 = "ba_drone_move";
    local_58 = 0xd;
    local_50 = 0;
    FUN_00c68f60(lVar17,&local_68);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
    FUN_00aaabf0(&local_68,param_1);
    lVar15 = local_68;
    FUN_0069c580(local_68,1);
    if (lVar15 != 0) {
      plVar14 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_68 = 0;
    }
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


