/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f23aa0; name: FUN_00f23aa0
 */


void FUN_00f23aa0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar12 = &local_a0;
  iVar7 = **(int **)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0x460) <= iVar7) {
    return;
  }
  plVar16 = *(long **)(param_1 + 0x490);
  plVar20 = *(long **)(param_1 + 0x488);
  if (plVar16 == plVar20) {
    iVar19 = 0;
    plVar18 = plVar16;
    plVar10 = plVar16;
  }
  else if (plVar20 == plVar16) {
    iVar19 = 0;
    plVar18 = plVar20;
    plVar10 = plVar20;
  }
  else {
    lVar8 = param_1 + (long)iVar7 * 0x20;
    iVar19 = 0;
    do {
      plVar18 = plVar20 + 1;
      lVar13 = FUN_00f21fe0(*plVar20 + 0x50);
      lVar15 = *(long *)(*(long *)(lVar13 + 0x410) + 0x60);
      uVar14 = FUN_00a8cbe0(lVar15);
      auVar22 = *(undefined1 (*) [16])(lVar13 + 0xb0);
      auVar23 = NEON_ext(auVar22,auVar22,8,1);
      lVar15 = lVar15 + -0x50;
      if ((uVar14 & 1) == 0) {
        lVar15 = 0;
      }
      lVar15 = *(long *)(lVar15 + 0x108);
      bVar6 = *(char *)(param_1 + 0x480) != '\0';
      pfVar1 = (float *)(lVar8 + 0x130);
      if (bVar6) {
        pfVar1 = (float *)(lVar8 + 0x230);
      }
      pfVar2 = (float *)(lVar8 + 0x140);
      if (bVar6) {
        pfVar2 = (float *)(lVar8 + 0x240);
      }
      auVar21._0_4_ = (*(float *)(lVar15 + 0x1c0) + auVar22._0_4_) - *pfVar1;
      auVar21._4_4_ = (*(float *)(lVar15 + 0x1c4) + auVar22._4_4_) - pfVar1[1];
      auVar21._8_4_ = (*(float *)(lVar15 + 0x1c8) + auVar23._0_4_) - pfVar1[2];
      auVar21._12_4_ = (*(float *)(lVar15 + 0x1cc) + 0.0) - pfVar1[3];
      auVar24._0_4_ = *pfVar2 - ((float)*(undefined8 *)(lVar15 + 0x1b0) + auVar22._0_4_);
      auVar24._4_4_ =
           pfVar2[1] - ((float)((ulong)*(undefined8 *)(lVar15 + 0x1b0) >> 0x20) + auVar22._4_4_);
      auVar24._8_4_ = pfVar2[2] - ((float)*(undefined8 *)(lVar15 + 0x1b8) + auVar23._0_4_);
      auVar24._12_4_ = pfVar2[3] - ((float)((ulong)*(undefined8 *)(lVar15 + 0x1b8) >> 0x20) + 0.0);
      auVar22 = NEON_fmin(auVar21,auVar24,4);
      iVar19 = iVar19 + (uint)(0.0 <= auVar22._8_4_ &&
                              (0.0 <= auVar22._0_4_ && 0.0 <= auVar22._4_4_));
      plVar20 = plVar18;
    } while (plVar16 != plVar18);
    plVar16 = *(long **)(param_1 + 0x490);
    plVar20 = *(long **)(param_1 + 0x488);
    iVar7 = **(int **)(param_1 + 0xb8);
    plVar18 = plVar16;
    plVar10 = plVar20;
  }
  uVar14 = (long)plVar16 - (long)plVar10 >> 3;
  if (*(char *)(param_1 + 0x480) == '\0') {
    if (uVar14 != (long)iVar19) {
      return;
    }
    if (*(char *)(param_1 + 0x4c4) != '\0') {
      FUN_00f23910(param_1);
      plVar20 = *(long **)(param_1 + 0x488);
      plVar18 = *(long **)(param_1 + 0x490);
    }
    puVar5 = PTR_DAT_0271fd50;
    puVar4 = PTR_DAT_0271fd48;
    if (plVar20 != plVar18) {
      lVar8 = 0;
      do {
        lVar15 = FUN_00f21fe0(*plVar20 + 0x50);
        plVar10 = *(long **)(lVar15 + 0x1f0);
        for (plVar16 = *(long **)(lVar15 + 0x1e8); plVar16 != plVar10; plVar16 = plVar16 + 1) {
          lVar15 = *plVar16;
          plVar9 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))
                                     ((undefined8 *)(lVar15 + 0x50));
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar11 = FUN_00e6aa90();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)puVar5) {
              cVar3 = *(char *)(param_1 + 0x4c4);
              goto joined_r0x00f23d34;
            }
          }
        }
        lVar15 = 0;
        cVar3 = *(char *)(param_1 + 0x4c4);
joined_r0x00f23d34:
        if (cVar3 != '\0') {
          lVar13 = *(long *)(param_1 + lVar8 * 8 + 0x370);
          *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar13 + 0xb8);
          *(undefined8 *)(lVar15 + 0xb0) = *(undefined8 *)(lVar13 + 0xb0);
        }
        FUN_00e6c010(lVar15,cVar3 != '\0');
        plVar20 = plVar20 + 1;
        lVar8 = lVar8 + 1;
      } while (plVar20 != plVar18);
    }
    *(undefined1 *)(param_1 + 0x480) = 1;
    return;
  }
  if ((ulong)(long)iVar19 < uVar14 >> 1) {
    return;
  }
  lVar15 = *(long *)(param_1 + (long)iVar7 * 8 + 0xe8);
  *(undefined1 *)(param_1 + 0x4c5) = 1;
  lVar8 = FUN_0105e8d0(lVar15,&local_80);
  FUN_006a0e30(lVar8 + 0x80);
  FUN_0069a850();
  lVar8 = nn::os::GetCurrentThread();
  plVar20 = (long *)(lVar15 + 0xf0);
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
        while (*plVar20 == 0) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f23d9c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f23d9c:
  puVar5 = PTR_DAT_027208d0;
  puVar4 = PTR_DAT_027208c8;
  plVar16 = *(long **)(lVar15 + 0x140);
  plVar18 = *(long **)(lVar15 + 0x148);
  if (plVar18 == plVar16) {
LAB_00f23e48:
    puVar5 = PTR_DAT_027208d0;
    puVar4 = PTR_DAT_027208c8;
    plVar16 = *(long **)(lVar15 + 0x110);
    plVar18 = *(long **)(lVar15 + 0x118);
    if (plVar18 == plVar16) {
      lVar8 = 0;
      goto LAB_00f23f20;
    }
    do {
      lVar8 = *plVar16;
      puVar17 = (undefined8 *)(lVar8 + 8);
      plVar10 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar11 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar5) {
          if (*(int *)(lVar8 + 0x60) == 2) {
            if (*(long **)(lVar15 + 0x118) != plVar16) goto LAB_00f23f10;
            goto LAB_00f240d4;
          }
          break;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar18);
    plVar16 = plVar18;
    if (*(long **)(lVar15 + 0x118) == plVar18) {
LAB_00f240d4:
      lVar8 = 0;
      goto LAB_00f23f20;
    }
  }
  else {
    do {
      lVar8 = *plVar16;
      puVar17 = (undefined8 *)(lVar8 + 8);
      plVar10 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar11 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar5) {
          if (*(int *)(lVar8 + 0x60) == 2) {
            if (*(long **)(lVar15 + 0x148) != plVar16) goto LAB_00f23f10;
            goto LAB_00f23e48;
          }
          break;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar18);
    plVar16 = plVar18;
    if (*(long **)(lVar15 + 0x148) == plVar18) goto LAB_00f23e48;
  }
LAB_00f23f10:
  lVar8 = 0;
  if (*plVar16 != 0) {
    lVar8 = *plVar16 + -0x48;
  }
LAB_00f23f20:
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
  FUN_00e84520(lVar8,0);
  FUN_00794740(*(undefined8 *)(param_1 + 0x330 + (long)**(int **)(param_1 + 0xb8) * 8));
  FUN_007946a0(*(undefined8 *)(param_1 + 0x330 + (long)**(int **)(param_1 + 0xb8) * 8),0);
  local_80 = 0xb0c975700fd4c76;
  pcStack_78 = "Play_Prop_Gimmick_a_t0301_g0102_Fence_break_single";
  local_70 = 0x32;
  local_68 = 0;
  local_a0 = 0x999b2ea701cec252;
  local_98 = "Play_Prop_Gimmick_a_t0301_g0102_Fence_break_last";
  local_90 = 0x30;
  local_88 = 0;
  if (*(char *)(param_1 + 0x4c4) == '\0') {
    puVar12 = &local_80;
  }
  FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,puVar12);
  **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + 1;
  puVar4 = PTR_DAT_02710848;
  *(undefined1 *)(param_1 + 0x480) = 0;
  lVar8 = *(long *)(*(long *)puVar4 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  FUN_01511210(lVar15,*(undefined8 *)(param_1 + 0x90),**(undefined4 **)(param_1 + 0xb8));
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


