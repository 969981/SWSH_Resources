/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec7770; name: FUN_00ec7770
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ec7770(undefined8 param_1,long *param_2)

{
  int *piVar1;
  bool bVar2;
  long *plVar3;
  char cVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  long *local_110;
  long local_108;
  long local_100;
  long local_f8;
  char *local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  int local_c4;
  ulong local_c0;
  long local_b8;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  long local_a0;
  undefined6 uStack_98;
  undefined2 local_92;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  long local_70;
  
  lVar22 = *(long *)PTR_DAT_027194d8;
  lVar16 = *(long *)(*param_2 + 0x68);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  puVar7 = PTR_DAT_0271fc50;
  puVar6 = PTR_DAT_0271fc48;
  local_c0 = CONCAT17(local_c0._7_1_,0x1000000000000);
  local_b8 = CONCAT26(local_b8._6_2_,0xffff00000000);
  local_8a = 0xffff;
  uStack_88 = 0xffffffffffff;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_aa = 0;
  uStack_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_92 = 0;
  local_82 = 0xffff;
  uStack_80 = 0xffff;
  local_7a = 0;
  uStack_78 = 0xff;
  local_70 = 0;
  uStack_76 = 0;
  plVar23 = *(long **)(lVar22 + 0xb0);
  plVar3 = *(long **)(lVar22 + 0xb8);
  if (plVar23 == plVar3) {
    uVar18 = 0;
  }
  else {
    local_110 = (long *)0x0;
    bVar2 = false;
    do {
      if (((*(byte *)(*plVar23 + 0x38e) >> 3 & 1) != 0) &&
         (uVar13 = (**(code **)(*(long *)*plVar23 + 0x88))(), (uVar13 & 1) == 0)) {
        plVar20 = (long *)*plVar23;
        plVar14 = (long *)(**(code **)plVar20[10])(plVar20 + 10);
        if ((*puVar6 & 1) != 0) goto joined_r0x00ec799c;
        iVar9 = __cxa_guard_acquire(puVar6);
        if (iVar9 == 0) goto joined_r0x00ec799c;
        uVar18 = FUN_01590f40();
        *(undefined8 *)puVar7 = uVar18;
        __cxa_guard_release(puVar6);
        if (plVar14 != (long *)0x0) {
LAB_00ec79a0:
          if (plVar14 != (long *)puVar7) goto code_r0x00ec79a8;
          if (!bVar2) {
            if ((char)plVar20[0x1ab] == '\0') {
              if (plVar20[0x6c] == 0) {
                bVar2 = false;
              }
              else {
                lVar19 = *(long *)(plVar20[0x6c] + 0x80);
                bVar2 = false;
                if (lVar19 != 0) {
                  plVar14 = (long *)(lVar19 + 0x48);
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                  if (*(int *)(lVar19 + 0x54) == 0) goto LAB_00ec7918;
                  puVar21 = *(undefined8 **)(lVar19 + 0x60);
                  plVar12 = (long *)(**(code **)*puVar21)(puVar21);
                  lVar19 = FUN_006cb2c0();
                  for (; plVar12 != (long *)lVar19; plVar12 = (long *)*plVar12) {
                  }
                  if (puVar21[0x22] == 0) {
LAB_00ec7918:
                    bVar2 = false;
                  }
                  else {
                    local_c0 = plVar20[0x115];
                    local_b8 = plVar20[0x116];
                    bVar2 = true;
                    uStack_b0 = (undefined6)plVar20[0x117];
                    local_aa = (undefined2)((ulong)plVar20[0x117] >> 0x30);
                    local_a0 = plVar20[0x119];
                    uStack_98 = (undefined6)plVar20[0x11a];
                    local_92 = (undefined2)((ulong)plVar20[0x11a] >> 0x30);
                    uStack_90 = (undefined6)plVar20[0x11b];
                    local_8a = (undefined2)((ulong)plVar20[0x11b] >> 0x30);
                    uStack_a8 = (undefined6)plVar20[0x118];
                    uStack_a2 = (undefined2)((ulong)plVar20[0x118] >> 0x30);
                    lVar19 = plVar20[0x11e];
                    local_70 = plVar20[0x11f];
                    uStack_78 = (undefined2)lVar19;
                    uStack_76 = (undefined2)((ulong)lVar19 >> 0x10);
                    uStack_74 = (undefined4)((ulong)lVar19 >> 0x20);
                    uStack_88 = (undefined6)plVar20[0x11c];
                    local_82 = (undefined2)((ulong)plVar20[0x11c] >> 0x30);
                    uStack_80 = (undefined6)plVar20[0x11d];
                    local_7a = (undefined2)((ulong)plVar20[0x11d] >> 0x30);
                    local_110 = plVar20;
                  }
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                }
              }
            }
            else {
              bVar2 = false;
            }
          }
        }
      }
joined_r0x00ec7910:
      plVar23 = plVar23 + 1;
    } while (plVar23 != plVar3);
    uVar18 = 0;
    if ((bVar2) && (local_110 != (long *)0x0)) {
      iVar9 = *(int *)((long)local_110 + 0x8a4);
      local_c4 = 0;
      if (iVar9 != 1) {
        local_c4 = 2;
      }
      lVar19 = *(long *)(*param_2 + 0x90);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      lVar17 = *(long *)(lVar19 + 0x7b0);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      FUN_00e03c70(lVar17,1);
      if (iVar9 != 1) {
        uVar10 = FUN_00eaa240(local_110);
        uVar8 = FUN_00eaa250(local_110);
        lVar19 = local_110[0x1a9];
        lVar15 = local_110[0x34];
        *(undefined4 *)(lVar17 + 0xa0) = uVar10;
        *(undefined2 *)(lVar17 + 0xa4) = uVar8;
        *(long *)(lVar17 + 0xa8) = lVar19;
        *(long *)(lVar17 + 0xb0) = lVar15;
      }
      local_d8 = lVar16;
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      FUN_00ee43f0(&local_d0,&local_d8,&local_c0,&local_c4);
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
      }
      lVar19 = local_d0;
      puVar7 = PTR_DAT_02720060;
      puVar6 = PTR_DAT_02720058;
      if ((char)local_110[0x1aa] == '\0') {
        if ((local_d0 != 0) && (*(int *)(local_d0 + 0x54) != 0)) {
          piVar1 = (int *)(local_d0 + 0x54);
          iVar9 = *(int *)(local_d0 + 0x54);
          do {
            while( true ) {
              plVar23 = *(long **)(lVar19 + 0x58);
              if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                uVar18 = FUN_0156a3b0();
                *(undefined8 *)puVar7 = uVar18;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_00ec7edc;
                if (plVar23 == (long *)puVar7) break;
                plVar23 = (long *)*plVar23;
              }
              iVar11 = *piVar1;
              if (iVar11 != iVar9) break;
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar19 = *(long *)(lVar19 + 0x60);
                if (lVar19 != 0) {
                  FUN_00ee5860(lVar19 + -0x50,1,1);
                  (**(code **)(*(long *)(lVar19 + -8) + 0x18))((long *)(lVar19 + -8));
                  pbVar5 = PTR_DAT_02720058;
                  puVar21 = (undefined8 *)PTR_DAT_02720060;
                  lVar19 = local_d0;
                  goto joined_r0x00ec7ed4;
                }
                goto LAB_00ec7edc;
              }
              iVar9 = iVar11;
              if (iVar11 == 0) goto LAB_00ec7edc;
            }
            ClearExclusiveLocal();
            iVar9 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00ec7edc:
        FUN_00ee5860(0,1,1);
        pbVar5 = PTR_DAT_02720058;
        puVar21 = (undefined8 *)PTR_DAT_02720060;
        lVar19 = local_d0;
joined_r0x00ec7ed4:
        PTR_DAT_02720058 = pbVar5;
        PTR_DAT_02720060 = (undefined *)puVar21;
        local_d0 = lVar19;
        if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
          piVar1 = (int *)(lVar19 + 0x54);
          iVar9 = *(int *)(lVar19 + 0x54);
          do {
            while( true ) {
              plVar23 = *(long **)(lVar19 + 0x58);
              if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
                uVar18 = FUN_0156a3b0();
                *puVar21 = uVar18;
                __cxa_guard_release(pbVar5);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_00ec7fbc;
                if (plVar23 == puVar21) break;
                plVar23 = (long *)*plVar23;
              }
              iVar11 = *piVar1;
              if (iVar11 != iVar9) break;
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar19 = *(long *)(lVar19 + 0x60);
                if (lVar19 != 0) {
                  uVar18 = 0;
                  goto LAB_00ec7f9c;
                }
                goto LAB_00ec7fbc;
              }
              iVar9 = iVar11;
              if (iVar11 == 0) goto LAB_00ec7fbc;
            }
            ClearExclusiveLocal();
            iVar9 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00ec7fbc:
        FUN_00ee5880(0,0);
        pbVar5 = PTR_DAT_02720058;
        puVar21 = (undefined8 *)PTR_DAT_02720060;
        lVar19 = local_d0;
      }
      else {
        if ((local_d0 != 0) && (*(int *)(local_d0 + 0x54) != 0)) {
          piVar1 = (int *)(local_d0 + 0x54);
          iVar9 = *(int *)(local_d0 + 0x54);
          do {
            while( true ) {
              plVar23 = *(long **)(lVar19 + 0x58);
              if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                uVar18 = FUN_0156a3b0();
                *(undefined8 *)puVar7 = uVar18;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_00ec7c30;
                if (plVar23 == (long *)puVar7) break;
                plVar23 = (long *)*plVar23;
              }
              iVar11 = *piVar1;
              if (iVar11 != iVar9) break;
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar19 = *(long *)(lVar19 + 0x60);
                if (lVar19 != 0) {
                  *(undefined1 *)(lVar19 + 0x18c) = 1;
                  (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                  pbVar5 = PTR_DAT_02720058;
                  puVar21 = (undefined8 *)PTR_DAT_02720060;
                  lVar19 = local_d0;
                  goto joined_r0x00ec7c28;
                }
                goto LAB_00ec7c30;
              }
              iVar9 = iVar11;
              if (iVar11 == 0) goto LAB_00ec7c30;
            }
            ClearExclusiveLocal();
            iVar9 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00ec7c30:
        DAT_000001dc = 1;
        pbVar5 = PTR_DAT_02720058;
        puVar21 = (undefined8 *)PTR_DAT_02720060;
        lVar19 = local_d0;
joined_r0x00ec7c28:
        PTR_DAT_02720058 = pbVar5;
        PTR_DAT_02720060 = (undefined *)puVar21;
        local_d0 = lVar19;
        if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
          piVar1 = (int *)(lVar19 + 0x54);
          iVar9 = *(int *)(lVar19 + 0x54);
          do {
            while( true ) {
              plVar23 = *(long **)(lVar19 + 0x58);
              if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
                uVar18 = FUN_0156a3b0();
                *puVar21 = uVar18;
                __cxa_guard_release(pbVar5);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_00ec7d10;
                if (plVar23 == puVar21) break;
                plVar23 = (long *)*plVar23;
              }
              iVar11 = *piVar1;
              if (iVar11 != iVar9) break;
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar19 = *(long *)(lVar19 + 0x60);
                if (lVar19 != 0) {
                  FUN_00ee5860(lVar19 + -0x50,1,0);
                  (**(code **)(*(long *)(lVar19 + -8) + 0x18))((long *)(lVar19 + -8));
                  pbVar5 = PTR_DAT_02720058;
                  puVar21 = (undefined8 *)PTR_DAT_02720060;
                  lVar19 = local_d0;
                  goto joined_r0x00ec7d08;
                }
                goto LAB_00ec7d10;
              }
              iVar9 = iVar11;
              if (iVar11 == 0) goto LAB_00ec7d10;
            }
            ClearExclusiveLocal();
            iVar9 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00ec7d10:
        FUN_00ee5860(0,1,0);
        pbVar5 = PTR_DAT_02720058;
        puVar21 = (undefined8 *)PTR_DAT_02720060;
        lVar19 = local_d0;
joined_r0x00ec7d08:
        PTR_DAT_02720058 = pbVar5;
        PTR_DAT_02720060 = (undefined *)puVar21;
        local_d0 = lVar19;
        if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
          piVar1 = (int *)(lVar19 + 0x54);
          iVar9 = *(int *)(lVar19 + 0x54);
LAB_00ec7d44:
          do {
            plVar23 = *(long **)(lVar19 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar18 = FUN_0156a3b0();
              *puVar21 = uVar18;
              __cxa_guard_release(pbVar5);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_00ec7dd4;
              if (plVar23 == puVar21) break;
              plVar23 = (long *)*plVar23;
            }
            iVar11 = *piVar1;
            if (iVar11 != iVar9) goto LAB_00ec7d8c;
            cVar4 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x60);
              if (lVar19 != 0) {
                uVar18 = 1;
LAB_00ec7f9c:
                FUN_00ee5880(lVar19 + -0x50,uVar18);
                (**(code **)(*(long *)(lVar19 + -8) + 0x18))((long *)(lVar19 + -8));
                pbVar5 = PTR_DAT_02720058;
                puVar21 = (undefined8 *)PTR_DAT_02720060;
                lVar19 = local_d0;
                goto joined_r0x00ec7fb4;
              }
              break;
            }
            iVar9 = iVar11;
          } while (iVar11 != 0);
        }
LAB_00ec7dd4:
        FUN_00ee5880(0,1);
        pbVar5 = PTR_DAT_02720058;
        puVar21 = (undefined8 *)PTR_DAT_02720060;
        lVar19 = local_d0;
      }
joined_r0x00ec7fb4:
      PTR_DAT_02720058 = pbVar5;
      PTR_DAT_02720060 = (undefined *)puVar21;
      local_d0 = lVar19;
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
        piVar1 = (int *)(lVar19 + 0x54);
        iVar9 = *(int *)(lVar19 + 0x54);
        do {
          while( true ) {
            plVar23 = *(long **)(lVar19 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar18 = FUN_0156a3b0();
              *puVar21 = uVar18;
              __cxa_guard_release(pbVar5);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_00ec7fd0;
              if (plVar23 == puVar21) break;
              plVar23 = (long *)*plVar23;
            }
            iVar11 = *piVar1;
            if (iVar11 != iVar9) break;
            cVar4 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x60);
              if (lVar19 != 0) {
                *(undefined4 *)(lVar19 + 400) = *(undefined4 *)((long)local_110 + 0xd54);
                (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                pbVar5 = PTR_DAT_02720058;
                puVar21 = (undefined8 *)PTR_DAT_02720060;
                lVar19 = local_d0;
                goto joined_r0x00ec7ea0;
              }
              goto LAB_00ec7fd0;
            }
            iVar9 = iVar11;
            if (iVar11 == 0) goto LAB_00ec7fd0;
          }
          ClearExclusiveLocal();
          iVar9 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00ec7fd0:
      _DAT_000001e0 = *(undefined4 *)((long)local_110 + 0xd54);
      pbVar5 = PTR_DAT_02720058;
      puVar21 = (undefined8 *)PTR_DAT_02720060;
      lVar19 = local_d0;
joined_r0x00ec7ea0:
      PTR_DAT_02720058 = pbVar5;
      PTR_DAT_02720060 = (undefined *)puVar21;
      local_d0 = lVar19;
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
        piVar1 = (int *)(lVar19 + 0x54);
        iVar9 = *(int *)(lVar19 + 0x54);
        do {
          while( true ) {
            plVar23 = *(long **)(lVar19 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar18 = FUN_0156a3b0();
              *puVar21 = uVar18;
              __cxa_guard_release(pbVar5);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_00ec80a4;
              if (plVar23 == puVar21) break;
              plVar23 = (long *)*plVar23;
            }
            iVar11 = *piVar1;
            if (iVar11 != iVar9) break;
            cVar4 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x60);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x198) = local_110[0x1ac];
                (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                pbVar5 = PTR_DAT_02720058;
                puVar21 = (undefined8 *)PTR_DAT_02720060;
                lVar19 = local_d0;
                goto joined_r0x00ec809c;
              }
              goto LAB_00ec80a4;
            }
            iVar9 = iVar11;
            if (iVar11 == 0) goto LAB_00ec80a4;
          }
          ClearExclusiveLocal();
          iVar9 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00ec80a4:
      _DAT_000001e8 = local_110[0x1ac];
      pbVar5 = PTR_DAT_02720058;
      puVar21 = (undefined8 *)PTR_DAT_02720060;
      lVar19 = local_d0;
joined_r0x00ec809c:
      PTR_DAT_02720058 = pbVar5;
      PTR_DAT_02720060 = (undefined *)puVar21;
      local_d0 = lVar19;
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
        piVar1 = (int *)(lVar19 + 0x54);
        iVar9 = *(int *)(lVar19 + 0x54);
        do {
          while( true ) {
            plVar23 = *(long **)(lVar19 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar18 = FUN_0156a3b0();
              *puVar21 = uVar18;
              __cxa_guard_release(pbVar5);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_00ec8178;
              if (plVar23 == puVar21) break;
              plVar23 = (long *)*plVar23;
            }
            iVar11 = *piVar1;
            if (iVar11 != iVar9) break;
            cVar4 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x60);
              if (lVar19 != 0) {
                *(undefined1 *)(lVar19 + 0xf1) = 1;
                (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                pbVar5 = PTR_DAT_02720058;
                puVar21 = (undefined8 *)PTR_DAT_02720060;
                lVar19 = local_d0;
                goto joined_r0x00ec8170;
              }
              goto LAB_00ec8178;
            }
            iVar9 = iVar11;
            if (iVar11 == 0) goto LAB_00ec8178;
          }
          ClearExclusiveLocal();
          iVar9 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00ec8178:
      DAT_00000141 = 1;
      pbVar5 = PTR_DAT_02720058;
      puVar21 = (undefined8 *)PTR_DAT_02720060;
      lVar19 = local_d0;
joined_r0x00ec8170:
      PTR_DAT_02720058 = pbVar5;
      PTR_DAT_02720060 = (undefined *)puVar21;
      local_d0 = lVar19;
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
        piVar1 = (int *)(lVar19 + 0x54);
        iVar9 = *(int *)(lVar19 + 0x54);
        do {
          while( true ) {
            plVar23 = *(long **)(lVar19 + 0x58);
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar18 = FUN_0156a3b0();
              *puVar21 = uVar18;
              __cxa_guard_release(pbVar5);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_00ec82cc;
              if (plVar23 == puVar21) break;
              plVar23 = (long *)*plVar23;
            }
            iVar11 = *piVar1;
            if (iVar11 != iVar9) break;
            cVar4 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x60);
              if (lVar19 != 0) {
                *(undefined1 *)(lVar19 + 0xf2) = 1;
                (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                goto joined_r0x00ec8244;
              }
              goto LAB_00ec82cc;
            }
            iVar9 = iVar11;
            if (iVar11 == 0) goto LAB_00ec82cc;
          }
          ClearExclusiveLocal();
          iVar9 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00ec82cc:
      DAT_00000142 = 1;
joined_r0x00ec8244:
      if (local_c4 == 0) {
        local_100 = 0;
        local_f8 = -0x64ebaa4968107b06;
        local_f0 = "APPEAR_POKEMON";
        local_e8 = 0xe;
        local_e0 = 0;
        FUN_014af6c0(&local_f8,local_c0 & 0xffffffff,&local_100);
        if (local_100 != 0) {
          (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
          local_100 = 0;
        }
        if (local_e0 != 0) {
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
          local_e0 = 0;
        }
        lVar19 = *(long *)(lVar17 + 0x78);
        *(undefined8 *)(lVar17 + 0x78) = 0;
        lVar22 = local_108;
        if (lVar19 != 0) {
          (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
          lVar22 = local_108;
        }
      }
      else {
        *(undefined1 *)(local_110 + 0x166) = 0;
        (**(code **)(*local_110 + 0x10))(&local_108,local_110);
        plVar23 = *(long **)(lVar22 + 0xb0);
        plVar3 = *(long **)(lVar22 + 0xb8);
        if (plVar23 != plVar3) {
          bVar2 = false;
          do {
            if (((*(byte *)(*plVar23 + 0x38e) >> 4 & 1) != 0) &&
               (uVar13 = (**(code **)(*(long *)*plVar23 + 0x88))(), (uVar13 & 1) == 0)) {
              lVar15 = *plVar23;
              plVar14 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))
                                          ((undefined8 *)(lVar15 + 0x50));
              lVar19 = FUN_00e2efa0();
              for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
                if (plVar14 == (long *)lVar19) {
                  if (!bVar2) {
                    local_f8 = local_108;
                    if (local_108 != 0) {
                      (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
                    }
                    uVar13 = FUN_00eafb00(lVar15,&local_f8);
                    if (local_f8 != 0) {
                      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
                      local_f8 = 0;
                    }
                    bVar2 = (uVar13 & 1) != 0;
                    if (bVar2) {
                      *(undefined1 *)(lVar15 + 0x711) = 1;
                    }
                  }
                  break;
                }
              }
            }
            plVar23 = plVar23 + 1;
          } while (plVar23 != plVar3);
          if (!bVar2) {
            plVar23 = *(long **)(lVar22 + 0xb0);
            plVar3 = *(long **)(lVar22 + 0xb8);
            if (plVar23 != plVar3) {
              bVar2 = false;
              do {
                if (((*(byte *)(*plVar23 + 0x38e) >> 5 & 1) != 0) &&
                   (uVar13 = (**(code **)(*(long *)*plVar23 + 0x88))(), (uVar13 & 1) == 0)) {
                  lVar19 = *plVar23;
                  plVar14 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x50))
                                              ((undefined8 *)(lVar19 + 0x50));
                  lVar22 = FUN_01590c90();
                  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
                    if (plVar14 == (long *)lVar22) {
                      if (!bVar2) {
                        local_f8 = local_108;
                        if (local_108 != 0) {
                          (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
                        }
                        uVar13 = FUN_00e5c370(lVar19,&local_f8,1);
                        if (local_f8 != 0) {
                          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
                          local_f8 = 0;
                        }
                        if ((uVar13 & 1) == 0) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                          FUN_00e5cc70(lVar19,1);
                        }
                      }
                      break;
                    }
                  }
                }
                plVar23 = plVar23 + 1;
              } while (plVar23 != plVar3);
            }
          }
        }
        lVar22 = 0;
        if (local_108 != 0) {
          (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
          local_108 = 0;
          lVar22 = local_108;
        }
      }
      local_108 = lVar22;
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      uVar18 = 3;
    }
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return uVar18;
code_r0x00ec79a8:
  plVar14 = (long *)*plVar14;
joined_r0x00ec799c:
  if (plVar14 == (long *)0x0) goto joined_r0x00ec7910;
  goto LAB_00ec79a0;
LAB_00ec7d8c:
  ClearExclusiveLocal();
  iVar9 = iVar11;
  if (iVar11 == 0) goto LAB_00ec7dd4;
  goto LAB_00ec7d44;
}


