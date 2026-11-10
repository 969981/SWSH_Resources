/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab4d60; name: FUN_00ab4d60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab4d60(undefined4 param_1,long *param_2,long param_3,long param_4,undefined4 param_5,
                 long *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  long alStack_1f0 [12];
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long alStack_170 [12];
  undefined8 local_110;
  long lStack_108;
  undefined1 *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  undefined1 auStack_e0 [112];
  
  FUN_015f5d10();
  puVar9 = PTR_DAT_027198e0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = param_3;
  param_2[0x12] = param_4;
  *param_2 = (long)(puVar9 + 0x10);
  param_2[9] = (long)(puVar9 + 0x60);
  param_2[10] = (long)(puVar9 + 0xa0);
  *(undefined4 *)(param_2 + 0x13) = param_5;
  lVar15 = *param_6;
  param_2[0x14] = lVar15;
  if (lVar15 == 0) {
    lVar15 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    lVar15 = param_2[0x14];
  }
  plVar21 = param_2 + 0x19;
  *plVar21 = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = param_1;
  param_2[0x17] = 0x11800000000;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x1a] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  puVar11 = PTR_DAT_02719550;
  puVar9 = PTR_DAT_02719548;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0x54) != 0)) {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar19 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        plVar20 = *(long **)(lVar15 + 0x58);
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar11 = uVar16;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_00ab4ef0;
          if (plVar20 == (long *)puVar11) break;
          plVar20 = (long *)*plVar20;
        }
        iVar14 = *piVar1;
        if (iVar14 != iVar19) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x60);
          if (lVar15 != 0) {
            FUN_00acc0f0(lVar15 + -0x50,0x20,&local_110);
            (**(code **)(*(long *)(lVar15 + -8) + 0x18))((long *)(lVar15 + -8));
            lVar15 = param_2[0x14];
            pbVar4 = PTR_DAT_02719548;
            puVar18 = (undefined8 *)PTR_DAT_02719550;
            uVar16 = local_110;
            goto joined_r0x00ab4ee8;
          }
          goto LAB_00ab4ef0;
        }
        iVar19 = iVar14;
        if (iVar14 == 0) goto LAB_00ab4ef0;
      }
      ClearExclusiveLocal();
      iVar19 = iVar14;
    } while (iVar14 != 0);
  }
LAB_00ab4ef0:
  FUN_00acc0f0(0,0x20,&local_110);
  lVar15 = param_2[0x14];
  pbVar4 = PTR_DAT_02719548;
  puVar18 = (undefined8 *)PTR_DAT_02719550;
  uVar16 = local_110;
joined_r0x00ab4ee8:
  PTR_DAT_02719548 = pbVar4;
  PTR_DAT_02719550 = (undefined *)puVar18;
  if (lVar15 != 0) {
    local_110._4_4_ = (float)((ulong)uVar16 >> 0x20);
    if (*(int *)(lVar15 + 0x54) != 0) {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar19 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          local_110 = uVar16;
          plVar20 = *(long **)(lVar15 + 0x58);
          if (((*pbVar4 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar4), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *puVar18 = uVar16;
            __cxa_guard_release(pbVar4);
            uVar16 = local_110;
          }
          else {
            uVar16 = local_110;
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_00ab4fc8;
            local_110._4_4_ = (float)((ulong)uVar16 >> 0x20);
            if (plVar20 == puVar18) break;
            plVar20 = (long *)*plVar20;
          }
          iVar14 = *piVar1;
          if (iVar14 != iVar19) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x60);
            if (lVar15 != 0) {
              uVar16 = *(undefined8 *)(lVar15 + 0x3c0);
              (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
              fVar22 = (float)((ulong)uVar16 >> 0x20);
              goto LAB_00ab4fd0;
            }
            goto LAB_00ab4fc8;
          }
          iVar19 = iVar14;
          if (iVar14 == 0) goto LAB_00ab4fc8;
        }
        ClearExclusiveLocal();
        iVar19 = iVar14;
      } while (iVar14 != 0);
    }
  }
LAB_00ab4fc8:
  fVar22 = (float)((ulong)_DAT_00000410 >> 0x20);
LAB_00ab4fd0:
  fVar22 = local_110._4_4_ * fVar22;
  local_110 = (ulong)(uint)fVar22 << 0x20;
  lStack_108 = 0;
  *(float *)((long)param_2 + 0xb4) = fVar22;
  puVar11 = PTR_DAT_02719550;
  puVar9 = PTR_DAT_02719548;
  lVar15 = param_2[0x14];
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00ab508c:
    alStack_170[0] = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar19 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        plVar20 = *(long **)(lVar15 + 0x58);
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar11 = uVar16;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_00ab508c;
          if (plVar20 == (long *)puVar11) break;
          plVar20 = (long *)*plVar20;
        }
        iVar14 = *piVar1;
        if (iVar14 != iVar19) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          alStack_170[0] = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            alStack_170[0] = *(long *)(lVar15 + 0x60) + -0x50;
          }
          goto LAB_00ab5090;
        }
        alStack_170[0] = 0;
        iVar19 = iVar14;
        if (iVar14 == 0) goto LAB_00ab5090;
      }
      ClearExclusiveLocal();
      alStack_170[0] = 0;
      iVar19 = iVar14;
    } while (iVar14 != 0);
  }
LAB_00ab5090:
  local_190 = &LAB_00ac53b0;
  local_188 = FUN_00ac53d0;
  local_180 = FUN_00ac5410;
  local_178 = &LAB_00ac5430;
  plVar17 = (long *)param_2[0x12];
  plVar20 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xc0,0x10);
  puVar9 = PTR_DAT_02710860;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar15 + 0x80) < 0x10) {
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    local_f0 = (code *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    if (local_180 != (code *)0x0) {
      (*local_180)(alStack_170,auStack_e0);
      local_f0 = local_180;
      local_e8 = local_178;
      local_100 = local_190;
      local_f8 = local_188;
    }
    lVar6 = lStack_108;
    lVar5 = local_110;
    puVar11 = PTR_DAT_027198e8;
    plVar20[3] = 0;
    *plVar20 = (long)(puVar11 + 0x10);
    plVar20[2] = 0;
    plVar20[4] = 0;
    plVar20[5] = 0;
    if (local_f0 != (code *)0x0) {
      (*local_f0)(auStack_e0,plVar20 + 6);
      plVar20[5] = (long)local_e8;
      plVar20[3] = (long)local_f8;
      plVar20[4] = (long)local_f0;
      plVar20[2] = (long)local_100;
    }
    pcVar13 = local_f8;
    *(undefined4 *)(plVar20 + 0x16) = 0;
    *(undefined8 *)((long)plVar20 + 0xb4) = 7;
    plVar20[0x13] = lVar6;
    plVar20[0x12] = lVar5;
    plVar20[0x14] = 0;
    plVar20[0x15] = 0;
    if (local_f8 != (code *)0x0) {
      local_f0 = (code *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar13)(auStack_e0);
    }
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    puVar18 = (undefined8 *)param_2[0x1d];
    param_2[0x1d] = (long)plVar20;
    if (puVar18 != (undefined8 *)0x0) {
      (**(code **)*puVar18)(puVar18);
      (**(code **)(*(long *)param_2[0x1e] + 0x18))
                ((long *)param_2[0x1e],puVar18,param_2[0x1f],param_2[0x20]);
    }
    lVar15 = param_2[0x14];
    param_2[0x1e] = (long)plVar17;
    param_2[0x1f] = 0xc0;
    param_2[0x20] = 0x10;
    puVar12 = PTR_DAT_02719550;
    puVar10 = PTR_DAT_02719548;
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00ab52f8:
      alStack_1f0[0] = 0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar19 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar20 = *(long **)(lVar15 + 0x58);
          if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar12 = uVar16;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_00ab52f8;
            if (plVar20 == (long *)puVar12) break;
            plVar20 = (long *)*plVar20;
          }
          iVar14 = *piVar1;
          if (iVar14 != iVar19) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_1f0[0] = 0;
            if (*(long *)(lVar15 + 0x60) != 0) {
              alStack_1f0[0] = *(long *)(lVar15 + 0x60) + -0x50;
            }
            goto LAB_00ab52fc;
          }
          alStack_1f0[0] = 0;
          iVar19 = iVar14;
          if (iVar14 == 0) goto LAB_00ab52fc;
        }
        ClearExclusiveLocal();
        alStack_1f0[0] = 0;
        iVar19 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00ab52fc:
    plVar17 = (long *)param_2[0x12];
    plVar20 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xc0,0x10);
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
    if (*(ulong *)(lVar15 + 0x80) < 0x10) {
      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      local_f0 = (code *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      FUN_00ac54a0(alStack_1f0,auStack_e0);
      local_e8 = &LAB_00ac54c0;
      local_f0 = FUN_00ac54a0;
      local_f8 = FUN_00ac5460;
      local_100 = &LAB_00ac5440;
      *plVar20 = (long)(puVar11 + 0x10);
      plVar20[2] = 0;
      plVar20[4] = 0;
      plVar20[5] = 0;
      plVar20[3] = 0;
      FUN_00ac54a0(auStack_e0,plVar20 + 6);
      pcVar13 = local_f8;
      plVar20[5] = (long)local_e8;
      plVar20[3] = (long)local_f8;
      plVar20[4] = (long)local_f0;
      plVar20[2] = (long)local_100;
      lVar8 = _UNK_01d4b528;
      lVar7 = _DAT_01d4b520;
      lVar6 = _UNK_01d4a138;
      lVar5 = _DAT_01d4a130;
      plVar20[0x16] = 0x700000000;
      plVar20[0x13] = lVar8;
      plVar20[0x12] = lVar7;
      plVar20[0x15] = lVar6;
      plVar20[0x14] = lVar5;
      *(undefined4 *)(plVar20 + 0x17) = 0;
      if (local_f8 != (code *)0x0) {
        local_f0 = (code *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar13)(auStack_e0);
      }
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      puVar18 = (undefined8 *)param_2[0x21];
      param_2[0x21] = (long)plVar20;
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18);
        (**(code **)(*(long *)param_2[0x22] + 0x18))
                  ((long *)param_2[0x22],puVar18,param_2[0x23],param_2[0x24]);
      }
      param_2[0x22] = (long)plVar17;
      param_2[0x23] = 0xc0;
      param_2[0x24] = 0x10;
      puVar18 = (undefined8 *)*plVar21;
      *plVar21 = 0;
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18);
        (**(code **)(*(long *)param_2[0x1a] + 0x18))
                  ((long *)param_2[0x1a],puVar18,param_2[0x1b],param_2[0x1c]);
      }
      FUN_00a67970(param_2[0x11],(int)param_2[0x13],param_2 + 0x26,&local_100);
      FUN_00ac5460(alStack_1f0);
      pcVar13 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (code *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar13)(alStack_170);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


