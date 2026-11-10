/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e4c160; name: FUN_00e4c160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4c160(long param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fStack_17c;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return;
  }
  plVar20 = *(long **)(param_1 + 0x68);
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 9;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    (**(code **)(*plVar21 + 0x10))(plVar21);
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  plVar21 = *(long **)(param_1 + 0x70);
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 9;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    (**(code **)(*plVar22 + 0x10))(plVar22);
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  plVar22 = *(long **)(param_1 + 0x78);
  if (plVar22 != (long *)0x0) {
    plVar24 = plVar22 + 9;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    (**(code **)(*plVar24 + 0x10))(plVar24);
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  plVar24 = *(long **)(param_1 + 0x80);
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 9;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  plVar25 = *(long **)(param_1 + 0x88);
  if (plVar25 != (long *)0x0) {
    plVar28 = plVar25 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    (**(code **)(*plVar28 + 0x10))(plVar28);
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  if (plVar20 == (long *)0x0) {
LAB_00e4c3a4:
    if (plVar21 == (long *)0x0) {
LAB_00e4c3d8:
      if (plVar22 == (long *)0x0) {
LAB_00e4c40c:
        if (plVar24 == (long *)0x0) {
LAB_00e4c440:
          if (plVar25 == (long *)0x0) {
            uVar13 = 1;
          }
          else {
            plVar28 = plVar25 + 9;
            (**(code **)(*plVar28 + 0x10))(plVar28);
            uVar13 = (**(code **)(*plVar25 + 0x40))(plVar25);
            uVar13 = uVar13 ^ 1;
            (**(code **)(*plVar28 + 0x18))(plVar28);
          }
          if (plVar24 != (long *)0x0) goto LAB_00e4c490;
        }
        else {
          (**(code **)(plVar24[9] + 0x10))(plVar24 + 9);
          uVar16 = (**(code **)(*plVar24 + 0x40))(plVar24);
          if ((uVar16 & 1) == 0) goto LAB_00e4c440;
          uVar13 = 0;
LAB_00e4c490:
          (**(code **)(plVar24[9] + 0x18))(plVar24 + 9);
        }
        if (plVar22 != (long *)0x0) goto LAB_00e4c4a8;
      }
      else {
        (**(code **)(plVar22[9] + 0x10))(plVar22 + 9);
        uVar16 = (**(code **)(*plVar22 + 0x40))(plVar22);
        if ((uVar16 & 1) == 0) goto LAB_00e4c40c;
        uVar13 = 0;
LAB_00e4c4a8:
        (**(code **)(plVar22[9] + 0x18))(plVar22 + 9);
      }
      if (plVar21 != (long *)0x0) goto LAB_00e4c4c0;
    }
    else {
      (**(code **)(plVar21[9] + 0x10))(plVar21 + 9);
      uVar16 = (**(code **)(*plVar21 + 0x40))(plVar21);
      if ((uVar16 & 1) == 0) goto LAB_00e4c3d8;
      uVar13 = 0;
LAB_00e4c4c0:
      (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(plVar20[9] + 0x18))();
    }
    if ((uVar13 & 1) != 0) goto LAB_00e4ce80;
    lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
    pbVar19 = PTR_DAT_02715078;
    puVar9 = (undefined8 *)PTR_DAT_02715080;
  }
  else {
    plVar28 = plVar20 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar20 + 0x40))(plVar20);
    if ((uVar16 & 1) == 0) goto LAB_00e4c3a4;
    (**(code **)(*plVar28 + 0x18))(plVar28);
    lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
    pbVar19 = PTR_DAT_02715078;
    puVar9 = (undefined8 *)PTR_DAT_02715080;
  }
  PTR_DAT_02715078 = pbVar19;
  PTR_DAT_02715080 = (undefined *)puVar9;
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0x54) != 0)) {
    piVar3 = (int *)(lVar23 + 0x54);
    iVar14 = *(int *)(lVar23 + 0x54);
    do {
      while( true ) {
        plVar28 = *(long **)(lVar23 + 0x58);
        if (((*pbVar19 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar19), iVar15 != 0)) {
          uVar17 = FUN_00a87090();
          *puVar9 = uVar17;
          __cxa_guard_release(pbVar19);
        }
        while( true ) {
          if (plVar28 == (long *)0x0) goto LAB_00e4c4f8;
          if (plVar28 == puVar9) break;
          plVar28 = (long *)*plVar28;
        }
        iVar15 = *piVar3;
        if (iVar15 != iVar14) break;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
          *piVar3 = iVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x60);
          if (lVar23 != 0) {
            fStack_17c = (float)((ulong)*(undefined8 *)(lVar23 + 0x60) >> 0x20);
            (**(code **)(*(long *)(lVar23 + -8) + 0x18))();
            goto joined_r0x00e4cf34;
          }
          goto LAB_00e4c4f8;
        }
        iVar14 = iVar15;
        if (iVar15 == 0) goto LAB_00e4c4f8;
      }
      ClearExclusiveLocal();
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
LAB_00e4c4f8:
  fStack_17c = (float)((ulong)_DAT_000000b0 >> 0x20);
joined_r0x00e4cf34:
  fVar29 = 0.0;
  fVar43 = 0.0;
  if (plVar21 != (long *)0x0) {
    lVar23 = *(long *)(param_1 + 0x138);
    iVar14 = (**(code **)(*plVar21 + 0x98))(plVar21);
    lVar26 = *(long *)(lVar23 + 0x1b8) + (long)iVar14 * 0x130;
    lVar23 = *(long *)(lVar26 + 0x120);
    iVar14 = *(int *)(*(long *)(lVar26 + 0x128) + 0x40);
    FUN_00723030(lVar23,iVar14);
    lVar18 = *(long *)(lVar23 + 0x1b8) + (long)iVar14 * 0x130;
    uVar17 = *(undefined8 *)(lVar18 + 0xd0);
    fVar43 = (float)uVar17;
    fVar42 = (float)((ulong)uVar17 >> 0x20);
    fVar31 = (float)*(undefined8 *)(lVar18 + 0xd8);
    fVar29 = (float)((ulong)*(undefined8 *)(lVar23 + 0x90) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar23 + 0x60) >> 0x20) * fVar43 +
             *(float *)(lVar23 + 0x74) * fVar42 +
             (float)((ulong)*(undefined8 *)(lVar23 + 0x80) >> 0x20) * fVar31;
    local_a0 = CONCAT44(fVar29,(float)*(undefined8 *)(lVar23 + 0x90) +
                               (float)*(undefined8 *)(lVar23 + 0x60) * fVar43 +
                               *(float *)(lVar23 + 0x70) * fVar42 +
                               (float)*(undefined8 *)(lVar23 + 0x80) * fVar31);
    uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar23 + 0x68) >> 0x20) * fVar43 +
                         *(float *)(lVar23 + 0x7c) * fVar42 +
                         (float)((ulong)*(undefined8 *)(lVar23 + 0x88) >> 0x20) * fVar31,
                         (float)*(undefined8 *)(lVar23 + 0x98) +
                         (float)*(undefined8 *)(lVar23 + 0x68) * fVar43 +
                         *(float *)(lVar23 + 0x78) * fVar42 +
                         (float)*(undefined8 *)(lVar23 + 0x88) * fVar31);
    fVar29 = fVar29 - fStack_17c;
    fVar43 = 0.0 - (*(float *)(lVar26 + 0x70) * (float)*(undefined8 *)(lVar26 + 0x90) +
                    *(float *)(lVar26 + 0x74) *
                    (float)((ulong)*(undefined8 *)(lVar26 + 0x90) >> 0x20) +
                   *(float *)(lVar26 + 0x78) * (float)*(undefined8 *)(lVar26 + 0x98));
  }
  fVar42 = 0.0;
  fVar31 = fVar42;
  if (plVar24 != (long *)0x0) {
    lVar23 = *(long *)(param_1 + 0x138);
    iVar14 = (**(code **)(*plVar24 + 0x98))(plVar24);
    lVar26 = *(long *)(lVar23 + 0x1b8) + (long)iVar14 * 0x130;
    lVar23 = *(long *)(lVar26 + 0x120);
    iVar14 = *(int *)(*(long *)(lVar26 + 0x128) + 0x40);
    FUN_00723030(lVar23,iVar14);
    lVar18 = *(long *)(lVar23 + 0x1b8) + (long)iVar14 * 0x130;
    uVar17 = *(undefined8 *)(lVar18 + 0xd0);
    fVar42 = (float)uVar17;
    fVar30 = (float)((ulong)uVar17 >> 0x20);
    fVar32 = (float)*(undefined8 *)(lVar18 + 0xd8);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar23 + 0x90) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar23 + 0x60) >> 0x20) * fVar42 +
             *(float *)(lVar23 + 0x74) * fVar30 +
             (float)((ulong)*(undefined8 *)(lVar23 + 0x80) >> 0x20) * fVar32;
    local_b0 = CONCAT44(fVar31,(float)*(undefined8 *)(lVar23 + 0x90) +
                               (float)*(undefined8 *)(lVar23 + 0x60) * fVar42 +
                               *(float *)(lVar23 + 0x70) * fVar30 +
                               (float)*(undefined8 *)(lVar23 + 0x80) * fVar32);
    uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar23 + 0x68) >> 0x20) * fVar42 +
                         *(float *)(lVar23 + 0x7c) * fVar30 +
                         (float)((ulong)*(undefined8 *)(lVar23 + 0x88) >> 0x20) * fVar32,
                         (float)*(undefined8 *)(lVar23 + 0x98) +
                         (float)*(undefined8 *)(lVar23 + 0x68) * fVar42 +
                         *(float *)(lVar23 + 0x78) * fVar30 +
                         (float)*(undefined8 *)(lVar23 + 0x88) * fVar32);
    fVar31 = fVar31 - fStack_17c;
    fVar42 = 0.0 - (*(float *)(lVar26 + 0x70) * (float)*(undefined8 *)(lVar26 + 0x90) +
                    *(float *)(lVar26 + 0x74) *
                    (float)((ulong)*(undefined8 *)(lVar26 + 0x90) >> 0x20) +
                   *(float *)(lVar26 + 0x78) * (float)*(undefined8 *)(lVar26 + 0x98));
  }
  local_c0 = local_a0;
  uStack_b8 = uStack_98;
  local_e0 = local_b0;
  uStack_d8 = uStack_a8;
  local_f0 = *(undefined8 *)PTR_DAT_02715a50;
  uStack_e8 = *(undefined8 *)(PTR_DAT_02715a50 + 8);
  local_d0 = local_f0;
  uStack_c8 = uStack_e8;
  if (plVar21 == (long *)0x0) {
LAB_00e4c780:
    if (plVar22 == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      plVar28 = plVar22 + 9;
      (**(code **)(*plVar28 + 0x10))(plVar28);
      uVar16 = (**(code **)(*plVar22 + 0x40))(plVar22);
      uVar16 = uVar16 & 0xffffffff;
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    if (plVar21 != (long *)0x0) {
      (**(code **)(plVar21[9] + 0x18))();
    }
    if ((uVar16 & 1) != 0) {
      lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
      pbVar19 = PTR_DAT_02715078;
      puVar9 = (undefined8 *)PTR_DAT_02715080;
      goto joined_r0x00e4c6dc;
    }
    bVar10 = 0;
joined_r0x00e4c8d8:
    if (plVar24 == (long *)0x0) goto LAB_00e4c9d4;
LAB_00e4c8dc:
    plVar28 = plVar24 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar24 + 0x40))(plVar24);
    if ((uVar16 & 1) == 0) goto LAB_00e4c9d4;
    (**(code **)(*plVar28 + 0x18))(plVar28);
    lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
    pbVar19 = PTR_DAT_02715078;
    puVar9 = (undefined8 *)PTR_DAT_02715080;
joined_r0x00e4c91c:
    PTR_DAT_02715078 = pbVar19;
    PTR_DAT_02715080 = (undefined *)puVar9;
    if ((lVar23 == 0) || (*(int *)(lVar23 + 0x54) == 0)) {
      lVar18 = 0;
    }
    else {
      piVar3 = (int *)(lVar23 + 0x54);
      iVar14 = *(int *)(lVar23 + 0x54);
      do {
        while( true ) {
          puVar27 = *(undefined8 **)(lVar23 + 0x58);
          if ((*pbVar19 & 1) == 0) {
            iVar15 = __cxa_guard_acquire(pbVar19);
            pbVar19 = PTR_DAT_02715078;
            if (iVar15 != 0) {
              uVar17 = FUN_00a87090();
              *puVar9 = uVar17;
              __cxa_guard_release(PTR_DAT_02715078);
              pbVar19 = PTR_DAT_02715078;
            }
          }
          lVar18 = 0;
          if (puVar27 == (undefined8 *)0x0) goto LAB_00e4ca38;
          while (puVar27 != puVar9) {
            puVar27 = (undefined8 *)*puVar27;
            if (puVar27 == (undefined8 *)0x0) {
              lVar18 = 0;
              goto LAB_00e4ca38;
            }
          }
          iVar15 = *piVar3;
          if (iVar15 != iVar14) break;
          cVar5 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar1) {
            *piVar3 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar18 = 0;
            if (*(long *)(lVar23 + 0x60) != 0) {
              lVar18 = *(long *)(lVar23 + 0x60) + -0x50;
            }
            goto LAB_00e4ca38;
          }
          lVar18 = 0;
          iVar14 = iVar15;
          if (iVar15 == 0) goto LAB_00e4ca38;
        }
        ClearExclusiveLocal();
        lVar18 = 0;
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
LAB_00e4ca38:
    lVar23 = FUN_00e4d1b0(lVar18,&local_130);
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
    }
    if (lVar23 == 0) {
      bVar11 = (**(code **)(**(long **)(param_1 + 0x130) + 0x38))
                         (*(long **)(param_1 + 0x130),&local_e0,&local_f0,&local_b0);
    }
    else {
      if (*(char *)(lVar23 + 0x84) == '\0') {
        FUN_00db9a40(lVar23);
      }
      uStack_128 = *(undefined8 *)(lVar23 + 0x138);
      uStack_120 = *(undefined8 *)(lVar23 + 0x140);
      local_118 = *(undefined8 *)(lVar23 + 0x148);
      uStack_110 = *(undefined8 *)(lVar23 + 0x150);
      local_108 = *(undefined8 *)(lVar23 + 0x158);
      uStack_100 = *(undefined8 *)(lVar23 + 0x160);
      local_130 = PTR_DAT_02715270 + 0x10;
      FUN_006c5d20(&local_160,&local_130);
      uStack_d8 = local_158;
      local_e0 = local_160;
      FUN_006c5d20(&local_160,&local_130);
      uStack_e8 = local_148;
      local_f0 = local_150;
      bVar11 = FUN_006c5d60(&local_130);
      FUN_006c5c80(&local_130);
    }
  }
  else {
    plVar28 = plVar21 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar21 + 0x40))(plVar21);
    if ((uVar16 & 1) == 0) goto LAB_00e4c780;
    (**(code **)(*plVar28 + 0x18))(plVar28);
    lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
    pbVar19 = PTR_DAT_02715078;
    puVar9 = (undefined8 *)PTR_DAT_02715080;
joined_r0x00e4c6dc:
    PTR_DAT_02715078 = pbVar19;
    PTR_DAT_02715080 = (undefined *)puVar9;
    if ((lVar23 == 0) || (*(int *)(lVar23 + 0x54) == 0)) {
      lVar18 = 0;
    }
    else {
      piVar3 = (int *)(lVar23 + 0x54);
      iVar14 = *(int *)(lVar23 + 0x54);
      do {
        while( true ) {
          puVar27 = *(undefined8 **)(lVar23 + 0x58);
          if (((*pbVar19 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar19), iVar15 != 0)) {
            uVar17 = FUN_00a87090();
            *puVar9 = uVar17;
            __cxa_guard_release(pbVar19);
          }
          lVar18 = 0;
          if (puVar27 == (undefined8 *)0x0) goto LAB_00e4c7e8;
          while (puVar27 != puVar9) {
            puVar27 = (undefined8 *)*puVar27;
            if (puVar27 == (undefined8 *)0x0) {
              lVar18 = 0;
              goto LAB_00e4c7e8;
            }
          }
          iVar15 = *piVar3;
          if (iVar15 != iVar14) break;
          cVar5 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar1) {
            *piVar3 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar18 = 0;
            if (*(long *)(lVar23 + 0x60) != 0) {
              lVar18 = *(long *)(lVar23 + 0x60) + -0x50;
            }
            goto LAB_00e4c7e8;
          }
          lVar18 = 0;
          iVar14 = iVar15;
          if (iVar15 == 0) goto LAB_00e4c7e8;
        }
        ClearExclusiveLocal();
        lVar18 = 0;
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
LAB_00e4c7e8:
    lVar23 = FUN_00e4cf70(lVar18,&local_130);
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
    }
    if (lVar23 == 0) {
      bVar10 = (**(code **)(**(long **)(param_1 + 0x130) + 0x38))
                         (*(long **)(param_1 + 0x130),&local_c0,&local_d0,&local_a0);
      goto joined_r0x00e4c8d8;
    }
    if (*(char *)(lVar23 + 0x84) == '\0') {
      FUN_00db9a40(lVar23);
    }
    uStack_128 = *(undefined8 *)(lVar23 + 0x138);
    uStack_120 = *(undefined8 *)(lVar23 + 0x140);
    local_118 = *(undefined8 *)(lVar23 + 0x148);
    uStack_110 = *(undefined8 *)(lVar23 + 0x150);
    local_108 = *(undefined8 *)(lVar23 + 0x158);
    uStack_100 = *(undefined8 *)(lVar23 + 0x160);
    local_130 = PTR_DAT_02715270 + 0x10;
    FUN_006c5d20(&local_160,&local_130);
    uStack_b8 = local_158;
    local_c0 = local_160;
    FUN_006c5d20(&local_160,&local_130);
    uStack_c8 = local_148;
    local_d0 = local_150;
    bVar10 = FUN_006c5d60(&local_130);
    FUN_006c5c80(&local_130);
    if (plVar24 != (long *)0x0) goto LAB_00e4c8dc;
LAB_00e4c9d4:
    if (plVar25 == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      plVar28 = plVar25 + 9;
      (**(code **)(*plVar28 + 0x10))(plVar28);
      uVar16 = (**(code **)(*plVar25 + 0x40))(plVar25);
      uVar16 = uVar16 & 0xffffffff;
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(plVar24[9] + 0x18))();
    }
    if ((uVar16 & 1) != 0) {
      lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x68);
      pbVar19 = PTR_DAT_02715078;
      puVar9 = (undefined8 *)PTR_DAT_02715080;
      goto joined_r0x00e4c91c;
    }
    bVar11 = 0;
  }
  fVar40 = (float)_UNK_01d4b588;
  fVar41 = (float)((ulong)_UNK_01d4b588 >> 0x20);
  fVar38 = (float)_DAT_01d4b580;
  fVar39 = (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar33 = (float)local_d0 * fVar38;
  fVar30 = (float)((ulong)local_d0 >> 0x20);
  fVar34 = fVar30 * fVar39;
  fVar35 = (float)uStack_c8 * fVar40;
  fVar32 = (float)((ulong)uStack_c8 >> 0x20);
  fVar36 = fVar32 * fVar41;
  auVar37._4_4_ = fVar34;
  auVar37._0_4_ = fVar33;
  auVar37._8_4_ = fVar35;
  auVar37._12_4_ = fVar36;
  auVar6._4_4_ = fVar34;
  auVar6._0_4_ = fVar33;
  auVar6._8_4_ = fVar35;
  auVar6._12_4_ = fVar36;
  auVar37 = NEON_ext(auVar37,auVar6,8,1);
  if (auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34 < 0.0) {
    local_d0 = CONCAT44(0.0 - fVar30,0.0 - (float)local_d0);
    uStack_c8 = CONCAT44(0.0 - fVar32,0.0 - (float)uStack_c8);
  }
  fVar33 = (float)local_f0 * fVar38;
  fVar30 = (float)((ulong)local_f0 >> 0x20);
  fVar34 = fVar30 * fVar39;
  fVar35 = (float)uStack_e8 * fVar40;
  fVar32 = (float)((ulong)uStack_e8 >> 0x20);
  fVar36 = fVar32 * fVar41;
  auVar7._4_4_ = fVar34;
  auVar7._0_4_ = fVar33;
  auVar7._8_4_ = fVar35;
  auVar7._12_4_ = fVar36;
  auVar8._4_4_ = fVar34;
  auVar8._0_4_ = fVar33;
  auVar8._8_4_ = fVar35;
  auVar8._12_4_ = fVar36;
  auVar37 = NEON_ext(auVar7,auVar8,8,1);
  if (auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34 < 0.0) {
    local_f0 = CONCAT44(0.0 - fVar30,0.0 - (float)local_f0);
    uStack_e8 = CONCAT44(0.0 - fVar32,0.0 - (float)uStack_e8);
  }
  if (plVar21 != (long *)0x0) {
    plVar28 = plVar21 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    bVar12 = (**(code **)(*plVar21 + 0x40))(plVar21);
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((bVar10 & bVar12 & 1) != 0) {
      fVar30 = fVar43;
      if (*(char *)(param_1 + 0xcd) != '\0') {
        fVar30 = fVar29;
      }
      local_130 = (undefined *)
                  CONCAT44((float)((ulong)local_c0 >> 0x20) + fVar39 * fVar30,
                           (float)local_c0 + fVar38 * fVar30);
      uStack_128 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + fVar41 * fVar30,
                            (float)uStack_b8 + fVar40 * fVar30);
      (**(code **)(*plVar21 + 0x60))(plVar21,&local_130);
    }
  }
  if (plVar24 != (long *)0x0) {
    plVar28 = plVar24 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    bVar12 = (**(code **)(*plVar24 + 0x40))(plVar24);
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((bVar11 & bVar12 & 1) != 0) {
      fVar30 = fVar42;
      if (*(char *)(param_1 + 0x10d) != '\0') {
        fVar30 = fVar31;
      }
      local_130 = (undefined *)
                  CONCAT44((float)((ulong)local_e0 >> 0x20) + fVar39 * fVar30,
                           (float)local_e0 + fVar38 * fVar30);
      uStack_128 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) + fVar41 * fVar30,
                            (float)uStack_d8 + fVar40 * fVar30);
      (**(code **)(*plVar24 + 0x60))(plVar24,&local_130);
    }
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    bVar1 = fVar43 + *(float *)(param_1 + 200) < fVar29;
  }
  *(bool *)(param_1 + 0xcc) = bVar1;
  bVar2 = false;
  if (*(char *)(param_1 + 0x104) != '\0') {
    bVar2 = fVar42 + *(float *)(param_1 + 0x108) < fVar31;
  }
  bVar12 = bVar1 | (bVar10 ^ 1) & 1;
  bVar4 = bVar2 | (bVar11 ^ 1) & 1;
  *(byte *)(param_1 + 0xcc) = bVar12;
  *(byte *)(param_1 + 0x10c) = bVar4;
  *(byte *)(param_1 + 0xec) = bVar12;
  *(byte *)(param_1 + 300) = bVar4;
  if (plVar22 != (long *)0x0) {
    plVar28 = plVar22 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar22 + 0x40))(plVar22);
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((uVar16 & 1) != 0) {
      (**(code **)(*plVar22 + 0x70))(plVar22,&local_d0);
    }
  }
  if (plVar25 != (long *)0x0) {
    plVar28 = plVar25 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar25 + 0x40))(plVar25);
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((uVar16 & 1) != 0) {
      (**(code **)(*plVar25 + 0x70))(plVar25,&local_f0);
    }
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    bVar1 = false;
    bVar2 = false;
  }
  else {
    bVar1 = fVar43 + *(float *)(param_1 + 0xa8) < fVar29;
    bVar2 = fVar42 + *(float *)(param_1 + 0xa8) < fVar31;
  }
  if (plVar20 != (long *)0x0) {
    plVar28 = plVar20 + 9;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    uVar16 = (**(code **)(*plVar20 + 0x40))(plVar20);
    (**(code **)(*plVar28 + 0x18))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (((bVar10 ^ 1 | bVar11 ^ 1) & 1) == 0) {
        if (*(char *)(param_1 + 0xcd) != '\0') {
          fVar43 = fVar29;
        }
        fVar43 = (local_a0._4_4_ - local_c0._4_4_) - fVar43;
        if (*(char *)(param_1 + 0x10d) != '\0') {
          fVar42 = fVar31;
        }
        fVar42 = (local_b0._4_4_ - local_e0._4_4_) - fVar42;
        fVar29 = (float)((ulong)_DAT_01d4b4f0 >> 0x20);
        fVar31 = (float)((ulong)_UNK_01d4b4f8 >> 0x20);
        if ((bool)(bVar1 | fVar43 <= fVar42)) {
          if (bVar2 == false) {
            lVar23 = CONCAT44(fVar29 * fVar42,(float)_DAT_01d4b4f0 * fVar42);
            lVar18 = CONCAT44(fVar31 * fVar42,(float)_UNK_01d4b4f8 * fVar42);
          }
          else {
            lVar23 = 0;
            lVar18 = 0;
          }
        }
        else {
          lVar23 = CONCAT44(fVar29 * fVar43,(float)_DAT_01d4b4f0 * fVar43);
          lVar18 = CONCAT44(fVar31 * fVar43,(float)_UNK_01d4b4f8 * fVar43);
        }
      }
      else {
        lVar18 = plVar20[0xd];
        lVar23 = plVar20[0xc];
      }
      plVar20[0xd] = lVar18;
      plVar20[0xc] = lVar23;
    }
  }
  *(char *)(param_1 + 0xac) = bVar1 & bVar2 & *(char *)(param_1 + 0xa4) != '\0';
LAB_00e4ce80:
  if (plVar25 != (long *)0x0) {
    (**(code **)(plVar25[9] + 0x18))(plVar25 + 9);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(plVar24[9] + 0x18))(plVar24 + 9);
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(plVar22[9] + 0x18))(plVar22 + 9);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(plVar20[9] + 0x18))(plVar20 + 9);
  }
  return;
}


