/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cfbd0; name: FUN_013cfbd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013cfbd0(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [96];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 **local_a0 [12];
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar15 == (undefined8 *)0x0)) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    plVar9 = (long *)(**(code **)*puVar15)(puVar15);
    plVar10 = (long *)FUN_0132d9a0();
    puVar17 = (undefined8 *)0x0;
    if (plVar9 != (long *)0x0) {
      do {
        if (plVar9 == plVar10) {
          puVar17 = puVar15 + -10;
          goto LAB_013cfc30;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      puVar17 = (undefined8 *)0x0;
    }
  }
LAB_013cfc30:
  uVar11 = FUN_012e7ca0(param_2);
  uVar12 = FUN_012e7c90(param_2);
  if (((uVar11 & 1) != 0) && ((uVar12 & 1) != 0)) {
    FUN_012e86d0(param_2);
    return;
  }
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_012e8b00(param_2);
    if ((uVar11 & 1) != 0) {
      FUN_01314a70(param_2,1);
      return;
    }
    uVar11 = FUN_012e49d0(param_2);
    if ((uVar11 & 1) != 0) {
      return;
    }
    uVar11 = FUN_012e4910(param_2);
    if ((uVar11 & 1) == 0) {
      FUN_013a5170(&local_c0);
      puVar4 = local_c0;
      if (local_c0 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = (undefined *)0x0;
      }
      puVar6 = PTR_DAT_02715080;
      puVar5 = PTR_DAT_02715078;
      lVar16 = *(long *)(puVar4 + 0x68);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x54) != 0)) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar14 = *(int *)(lVar16 + 0x54);
        do {
          plVar9 = *(long **)(lVar16 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_013d019c;
            if (plVar9 == (long *)puVar6) break;
            plVar9 = (long *)*plVar9;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar14) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_38 = 0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                local_38 = *(long *)(lVar16 + 0x60) + -0x50;
              }
              goto LAB_013d01a0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar8;
        } while (iVar8 != 0);
      }
LAB_013d019c:
      local_38 = 0;
LAB_013d01a0:
      FUN_012e71f0(param_2,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_013a5170(&local_c0);
      FUN_0130b570(local_c0);
      pcVar7 = local_b8;
    }
    else {
      lVar16 = puVar17[0x6b];
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      local_a0[0] = &local_140;
      local_140 = &LAB_013d32f0;
      local_138 = FUN_013d3350;
      local_130 = &LAB_013d3360;
      puStack_128 = &LAB_013d3370;
      local_c0 = PTR_LAB_02727810;
      local_b8 = (code *)PTR_FUN_02727818;
      local_b0 = PTR_LAB_02727820;
      local_a8 = PTR_LAB_02727828;
      FUN_01306a00(lVar16,&local_c0);
      pcVar7 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined *)0x0;
        local_a8 = (undefined *)0x0;
        local_c0 = (undefined *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar7)(local_a0);
      }
      pcVar7 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        puStack_128 = (undefined1 *)0x0;
        local_140 = (undefined1 *)0x0;
        local_138 = (code *)0x0;
        (*pcVar7)(auStack_120);
      }
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      }
      local_c0 = (undefined *)0xa6514906bdd85577;
      local_b8 = (code *)0x0;
      FUN_0130fad0(param_2,&local_c0,0);
      puVar5 = PTR_DAT_02715080;
      puVar4 = PTR_DAT_02715078;
      lVar16 = *(long *)(param_2 + 0x68);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x54) != 0)) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar14 = *(int *)(lVar16 + 0x54);
        do {
          plVar9 = *(long **)(lVar16 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_013cff98;
            if (plVar9 == (long *)puVar5) break;
            plVar9 = (long *)*plVar9;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar14) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_c0 = (undefined *)0x0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                local_c0 = (undefined *)(*(long *)(lVar16 + 0x60) + -0x50);
              }
              goto LAB_013cff9c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar8;
        } while (iVar8 != 0);
      }
LAB_013cff98:
      local_c0 = (undefined *)0x0;
LAB_013cff9c:
      FUN_013d2d60(puVar17[0xc],0xe6563fdfe605025c,&local_c0,0);
      *(undefined4 *)(puVar17 + 0xf) = 0xb;
      pcVar7 = local_b8;
    }
  }
  else {
    local_c0 = (undefined *)0xf037268a5af0b7f7;
    local_b8 = (code *)0x0;
    uVar11 = FUN_0130fad0(param_2,&local_c0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    uVar11 = FUN_012e8e40(param_2);
    puVar5 = PTR_DAT_02715080;
    puVar4 = PTR_DAT_02715078;
    if ((uVar11 & 1) == 0) {
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      lVar16 = *(long *)(param_2 + 0x68);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x54) != 0)) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar14 = *(int *)(lVar16 + 0x54);
        do {
          plVar9 = *(long **)(lVar16 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto joined_r0x013d00ac;
            if (plVar9 == (long *)puVar5) break;
            plVar9 = (long *)*plVar9;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar14) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              puVar4 = (undefined *)0x0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                puVar4 = (undefined *)(*(long *)(lVar16 + 0x60) + -0x50);
              }
              goto joined_r0x013d029c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar8;
        } while (iVar8 != 0);
      }
joined_r0x013d00ac:
      puVar4 = (undefined *)0x0;
joined_r0x013d029c:
      if (local_c0 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      }
      local_c0 = puVar4;
      FUN_013d2fb0(puVar17[0xc],0x1d001dbf9f080f4d,&local_c0,0);
      *(undefined4 *)(puVar17 + 0xf) = 10;
      pcVar7 = (code *)0;
      if (local_b8 != (code *)0x0) {
        (**(code **)(*(long *)((long)local_b8 + 0x48) + 0x18))();
        local_b8 = (code *)0x0;
        pcVar7 = local_b8;
      }
    }
    else {
      lVar16 = *(long *)(param_2 + 0x68);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x54) != 0)) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar14 = *(int *)(lVar16 + 0x54);
        do {
          plVar9 = *(long **)(lVar16 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_013cfd64;
            if (plVar9 == (long *)puVar5) break;
            plVar9 = (long *)*plVar9;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar14) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_c0 = (undefined *)0x0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                local_c0 = (undefined *)(*(long *)(lVar16 + 0x60) + -0x50);
              }
              goto LAB_013cfd68;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar8;
        } while (iVar8 != 0);
      }
LAB_013cfd64:
      local_c0 = (undefined *)0x0;
LAB_013cfd68:
      FUN_013d2d60(puVar17[0xc],0xebbc5c2e9ccc92b7,&local_c0,0);
      *(undefined4 *)(puVar17 + 0xf) = 0xd;
      pcVar7 = local_b8;
    }
  }
  local_b8 = pcVar7;
  if (local_c0 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  return;
}


