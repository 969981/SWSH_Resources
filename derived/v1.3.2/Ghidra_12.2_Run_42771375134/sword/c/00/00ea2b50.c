/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea2b50; name: FUN_00ea2b50
 */


void FUN_00ea2b50(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [32];
  undefined8 local_110;
  undefined8 local_f8;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  long *local_d8;
  undefined4 *local_d0;
  long local_c8;
  long local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  long local_90 [2];
  long local_80;
  long local_78;
  long local_70 [2];
  
  plVar18 = (long *)*param_1;
  lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  local_70[0] = *(long *)(lVar17 + 0x7d8);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  FUN_006a1fe0(local_90,param_2,1);
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = plVar18 + 0x1e;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar18 + 0xe4));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ea2c0c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ea2c0c:
  puVar6 = PTR_DAT_0271e800;
  puVar14 = PTR_DAT_0271e7f8;
  plVar21 = (long *)plVar18[0x28];
  plVar3 = (long *)plVar18[0x29];
  if (plVar3 == plVar21) {
LAB_00ea2cbc:
    puVar6 = PTR_DAT_0271e800;
    puVar14 = PTR_DAT_0271e7f8;
    plVar21 = (long *)plVar18[0x22];
    plVar3 = (long *)plVar18[0x23];
    if (plVar3 == plVar21) {
      local_178 = 0;
    }
    else {
      do {
        lVar9 = *plVar21;
        puVar20 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar20)(puVar20);
        if (((*puVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar14), iVar7 != 0)) {
          uVar11 = FUN_00706e40();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar14);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar6) {
            if (*(long *)(lVar9 + 0x128) == -0x3d007867bcc23c10) {
              if ((long *)plVar18[0x23] != plVar21) goto LAB_00ea2d78;
              goto LAB_00ea2e1c;
            }
            break;
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar3);
      plVar21 = plVar3;
      if ((long *)plVar18[0x23] != plVar3) goto LAB_00ea2d78;
LAB_00ea2e1c:
      local_178 = 0;
    }
  }
  else {
    do {
      lVar9 = *plVar21;
      puVar20 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar20)(puVar20);
      if (((*puVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar14), iVar7 != 0)) {
        uVar11 = FUN_00706e40();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar14);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar6) {
          if (*(long *)(lVar9 + 0x128) == -0x3d007867bcc23c10) {
            if ((long *)plVar18[0x29] == plVar21) goto LAB_00ea2cbc;
            goto LAB_00ea2d78;
          }
          break;
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar3);
    plVar21 = plVar3;
    if ((long *)plVar18[0x29] == plVar3) goto LAB_00ea2cbc;
LAB_00ea2d78:
    local_178 = 0;
    if (*plVar21 != 0) {
      local_178 = *plVar21 + -0x48;
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)((long)plVar18 + 0xe4);
  nn::os::SignalLightEvent(pLVar2);
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ea2ddc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ea2ddc:
  puVar6 = PTR_DAT_0271e800;
  puVar14 = PTR_DAT_0271e7f8;
  plVar21 = (long *)plVar18[0x28];
  plVar3 = (long *)plVar18[0x29];
  if (plVar3 == plVar21) {
LAB_00ea2eb0:
    puVar6 = PTR_DAT_0271e800;
    puVar14 = PTR_DAT_0271e7f8;
    plVar21 = (long *)plVar18[0x22];
    plVar3 = (long *)plVar18[0x23];
    if (plVar3 == plVar21) {
      lVar9 = 0;
      goto LAB_00ea2f88;
    }
    do {
      lVar9 = *plVar21;
      puVar20 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar20)(puVar20);
      if (((*puVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar14), iVar7 != 0)) {
        uVar11 = FUN_00706e40();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar14);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar6) {
          if (*(long *)(lVar9 + 0x128) == -0x549e9ca67e383ebb) {
            if ((long *)plVar18[0x23] != plVar21) goto LAB_00ea2f78;
            goto LAB_00ea32d8;
          }
          break;
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar3);
    plVar21 = plVar3;
    if ((long *)plVar18[0x23] == plVar3) {
LAB_00ea32d8:
      lVar9 = 0;
      goto LAB_00ea2f88;
    }
  }
  else {
    do {
      lVar9 = *plVar21;
      puVar20 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar20)(puVar20);
      if (((*puVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar14), iVar7 != 0)) {
        uVar11 = FUN_00706e40();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar14);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar6) {
          if (*(long *)(lVar9 + 0x128) == -0x549e9ca67e383ebb) {
            if ((long *)plVar18[0x29] == plVar21) goto LAB_00ea2eb0;
            goto LAB_00ea2f78;
          }
          break;
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar3);
    plVar21 = plVar3;
    if ((long *)plVar18[0x29] == plVar3) goto LAB_00ea2eb0;
  }
LAB_00ea2f78:
  lVar9 = 0;
  if (*plVar21 != 0) {
    lVar9 = *plVar21 + -0x48;
  }
LAB_00ea2f88:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent(pLVar2);
  lVar12 = FUN_00e7e2e0();
  if (((lVar12 != -0x57753fb9fdfaf46b) && (local_70[0] != 0)) && (local_80 != 0)) {
    FUN_01009f40(&local_98,lVar17);
    lVar12 = *(long *)(plVar18[0x82] + 0x60);
    uVar13 = FUN_00a8cbe0(lVar12);
    lVar12 = lVar12 + -0x50;
    if ((uVar13 & 1) == 0) {
      lVar12 = 0;
    }
    lVar19 = *(long *)(lVar12 + 0x350);
    iVar7 = FUN_00722fb0(lVar19,local_90);
    lVar15 = *(long *)(lVar19 + 0x1b8) + (long)iVar7 * 0x130;
    lVar19 = *(long *)(lVar15 + 0x120);
    iVar7 = *(int *)(*(long *)(lVar15 + 0x128) + 0x40);
    FUN_00723030(lVar19,iVar7);
    lVar19 = *(long *)(lVar19 + 0x1b8) + (long)iVar7 * 0x130;
    local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0xd0) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar19 + 0xa0) >> 0x20) * 0.0 +
                        (float)((ulong)*(undefined8 *)(lVar19 + 0xb0) >> 0x20) * 0.0 +
                        (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20) * 0.0 +
                        (float)((ulong)*(undefined8 *)(lVar12 + 0xe0) >> 0x20),
                        (float)*(undefined8 *)(lVar19 + 0xd0) +
                        (float)*(undefined8 *)(lVar19 + 0xa0) * 0.0 +
                        (float)*(undefined8 *)(lVar19 + 0xb0) * 0.0 +
                        (float)*(undefined8 *)(lVar19 + 0xc0) * 0.0 +
                        (float)*(undefined8 *)(lVar12 + 0xe0));
    uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0xd8) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar19 + 0xa8) >> 0x20) * 0.0 +
                         (float)((ulong)*(undefined8 *)(lVar19 + 0xb8) >> 0x20) * 0.0 +
                         (float)((ulong)*(undefined8 *)(lVar19 + 200) >> 0x20) * 0.0 +
                         (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20),
                         (float)*(undefined8 *)(lVar19 + 0xd8) +
                         (float)*(undefined8 *)(lVar19 + 0xa8) * 0.0 +
                         (float)*(undefined8 *)(lVar19 + 0xb8) * 0.0 +
                         (float)*(undefined8 *)(lVar19 + 200) * 0.0 +
                         (float)*(undefined8 *)(lVar12 + 0xe8));
    uVar13 = FUN_00fb40c0(local_98);
    if ((uVar13 & 1) == 0) {
      uVar8 = FUN_00ecec10();
      *(undefined4 *)((long)plVar18 + 0x80c) = uVar8;
    }
    if (*(char *)((long)plVar18 + 0x44c) == '\0') {
      pcVar16 = *(code **)(*plVar18 + 0x178);
      puVar14 = PTR_DAT_0271e870;
    }
    else {
      pcVar16 = *(code **)(*plVar18 + 0x1c0);
      puVar14 = (undefined *)((long)plVar18 + 0x44c);
    }
    local_b4 = (*pcVar16)(0,plVar18,puVar14);
    plStack_e8 = local_70;
    local_e0 = &local_c0;
    local_d8 = &local_c8;
    local_c0 = -0x340d631b7bddd9bb;
    local_d0 = &local_b4;
    local_c8 = -0x340d631b7bddd9bb;
    local_f0 = plVar18;
    if (local_90[0] == 0x40e51597f9803559) {
      local_170 = PTR_DAT_02715270 + 0x10;
      local_168 = *(undefined8 *)(local_178 + 0x138);
      uStack_160 = *(undefined8 *)(local_178 + 0x140);
      local_158 = *(undefined8 *)(local_178 + 0x148);
      uStack_150 = *(undefined8 *)(local_178 + 0x150);
      local_148 = *(undefined8 *)(local_178 + 0x158);
      uStack_140 = *(undefined8 *)(local_178 + 0x160);
      FUN_006c5d20(auStack_130,&local_170);
      local_f8 = local_110;
      FUN_006c5c80(&local_170);
      lVar12 = FUN_00e331a0(local_70[0],&local_f8);
      if (lVar12 != 0) {
        FUN_00ea32f0(&local_f0,lVar12);
      }
    }
    if (local_90[0] == -0x69201f1a107587d) {
      local_170 = PTR_DAT_02715270 + 0x10;
      local_168 = *(undefined8 *)(lVar9 + 0x138);
      uStack_160 = *(undefined8 *)(lVar9 + 0x140);
      local_158 = *(undefined8 *)(lVar9 + 0x148);
      uStack_150 = *(undefined8 *)(lVar9 + 0x150);
      local_148 = *(undefined8 *)(lVar9 + 0x158);
      uStack_140 = *(undefined8 *)(lVar9 + 0x160);
      FUN_006c5d20(auStack_130,&local_170);
      local_f8 = local_110;
      FUN_006c5c80(&local_170);
      lVar9 = FUN_00e331a0(local_70[0],&local_f8);
      if (lVar9 != 0) {
        FUN_00ea32f0(&local_f0,lVar9);
      }
    }
    if (local_c0 != -0x340d631b7bddd9bb) {
      FUN_00dc04c0(plVar18,&local_c0,0,0,1);
      FUN_00dc0bf0(plVar18,&local_c0,&local_b0);
    }
    if (local_c8 != -0x340d631b7bddd9bb) {
      FUN_00dc04c0(plVar18,&local_c8,0,0,1);
      FUN_00dc0bf0(plVar18,&local_c8,&local_b0);
    }
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return;
}


