/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136b3c0; name: FUN_0136b3c0
 */


void FUN_0136b3c0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long **local_160;
  long *plStack_158;
  long *local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0 [14];
  
  plVar12 = (long *)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x130);
  local_f8 = plVar12;
  if (*plVar12 == 0) {
LAB_0136b4cc:
    plVar14 = local_f8;
    if (local_f8 + 3 != plVar1) {
LAB_0136b4d8:
      plVar13 = plVar14;
      do {
        if ((plVar14[3] != 0) && (*(int *)(plVar14[3] + 0x54) != 0)) {
          if (*plVar13 != 0) {
            (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
            *plVar13 = 0;
          }
          lVar15 = plVar14[3];
          plVar14[3] = 0;
          *plVar13 = lVar15;
          lVar15 = plVar14[4];
          *(undefined8 *)((long)plVar13 + 0xd) = *(undefined8 *)((long)plVar14 + 0x25);
          plVar13[1] = lVar15;
          plVar13 = plVar13 + 3;
        }
        plVar14 = plVar14 + 3;
      } while ((long *)(param_1 + 0x118) != plVar14);
      local_f8 = plVar13;
      if (plVar13 == plVar1) goto LAB_0136b5ac;
    }
  }
  else {
    if (*(int *)(*plVar12 + 0x54) != 0) {
      local_f8 = (long *)(param_1 + 0x70);
      if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
        local_f8 = (long *)(param_1 + 0x88);
        if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
          local_f8 = (long *)(param_1 + 0xa0);
          if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
            local_f8 = (long *)(param_1 + 0xb8);
            if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
              local_f8 = (long *)(param_1 + 0xd0);
              if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
                local_f8 = (long *)(param_1 + 0xe8);
                if ((*local_f8 != 0) && (*(int *)(*local_f8 + 0x54) != 0)) {
                  local_f8 = (long *)(param_1 + 0x100);
                  if ((*(long *)(param_1 + 0x100) != 0) &&
                     (*(int *)(*(long *)(param_1 + 0x100) + 0x54) != 0)) {
                    local_f8 = (long *)(param_1 + 0x118);
                    if ((*(long *)(param_1 + 0x118) != 0) &&
                       (*(int *)(*(long *)(param_1 + 0x118) + 0x54) != 0)) {
                      local_f8 = plVar1;
                      goto LAB_0136b5ac;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0136b4cc;
    }
    plVar14 = plVar12;
    if ((long *)(param_1 + 0x70) != plVar1) goto LAB_0136b4d8;
  }
  plVar14 = local_f8;
  do {
    local_e8 = (code *)((ulong)local_e8 & 0xffffffff00000000);
    local_f0 = (undefined *)0x0;
    if (*plVar14 != 0) {
      (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
      *plVar14 = 0;
    }
    *plVar14 = 0;
    *(undefined4 *)(plVar14 + 2) = local_e8._0_4_;
    plVar14[1] = (long)local_f0;
    *(undefined1 *)((long)plVar14 + 0x14) = 0xff;
    plVar14 = plVar14 + 3;
  } while ((long *)(param_1 + 0x130) != plVar14);
LAB_0136b5ac:
  local_160 = &local_f8;
  local_180 = &LAB_0136bee0;
  local_178 = FUN_0136c040;
  local_170 = &LAB_0136c050;
  local_168 = &LAB_0136c060;
  local_f0 = PTR_LAB_02727810;
  local_e8 = (code *)PTR_FUN_02727818;
  local_e0 = PTR_LAB_02727820;
  local_d8 = PTR_LAB_02727828;
  plStack_158 = plVar12;
  local_d0[0] = (undefined1 *)&local_180;
  FUN_01306a00(*(undefined8 *)(param_1 + 0x130),&local_f0);
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(local_d0);
  }
  pcVar7 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar7)(&local_160);
  }
  puVar6 = PTR_DAT_0271df18;
  puVar5 = PTR_DAT_0271df10;
  puVar11 = (undefined8 *)PTR_DAT_0271df28;
  plVar14 = plVar12;
  do {
    lVar15 = *plVar14;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x54) != 0)) {
      piVar2 = (int *)(lVar15 + 0x54);
      iVar17 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar15 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(puVar5);
            puVar11 = (undefined8 *)PTR_DAT_0271df28;
            if (iVar8 != 0) {
              if (((*PTR_DAT_0271df20 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar8 != 0)) {
                uVar9 = FUN_00d3ff90();
                *(undefined8 *)PTR_DAT_0271df28 = uVar9;
                __cxa_guard_release(PTR_DAT_0271df20);
              }
              *(undefined **)puVar6 = PTR_DAT_0271df28;
              __cxa_guard_release(puVar5);
              puVar11 = (undefined8 *)PTR_DAT_0271df28;
            }
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_0136b7a8;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar8 = *piVar2;
          if (iVar8 != iVar17) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x60);
            if (lVar15 != 0) {
              uVar10 = FUN_012e8e40(lVar15 + -0x50);
              (**(code **)(*(long *)(lVar15 + -8) + 0x18))((long *)(lVar15 + -8));
              if ((uVar10 & 1) != 0) {
                return;
              }
            }
            goto LAB_0136b7a8;
          }
          iVar17 = iVar8;
          if (iVar8 == 0) goto LAB_0136b7a8;
        }
        ClearExclusiveLocal();
        iVar17 = iVar8;
      } while (iVar8 != 0);
    }
LAB_0136b7a8:
    plVar14 = plVar14 + 3;
  } while (plVar14 != plVar1);
  do {
    lVar15 = *plVar12;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x54) != 0)) {
      piVar2 = (int *)(lVar15 + 0x54);
      iVar17 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar15 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar8 != 0)) {
              uVar9 = FUN_00d3ff90();
              *puVar11 = uVar9;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            *(undefined8 **)puVar6 = puVar11;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_0136b8f0;
            if (plVar14 == (long *)puVar6) break;
            plVar14 = (long *)*plVar14;
          }
          iVar8 = *piVar2;
          if (iVar8 != iVar17) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x60);
            if (lVar15 != 0) {
              lVar16 = lVar15 + -0x50;
              uVar10 = FUN_01310200(lVar16);
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar12 + 0xc) == '\0') {
                  FUN_0136bc90(uVar10,lVar16,plVar12);
                }
                else {
                  FUN_0136b920(param_1,lVar16,plVar12);
                }
              }
              (**(code **)(*(long *)(lVar15 + -8) + 0x18))((long *)(lVar15 + -8));
            }
            goto LAB_0136b8f0;
          }
          iVar17 = iVar8;
          if (iVar8 == 0) goto LAB_0136b8f0;
        }
        ClearExclusiveLocal();
        iVar17 = iVar8;
      } while (iVar8 != 0);
    }
LAB_0136b8f0:
    plVar12 = plVar12 + 3;
    if (plVar12 == plVar1) {
      return;
    }
  } while( true );
}


