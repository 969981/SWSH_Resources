/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012eda40; name: FUN_012eda40
 */


void FUN_012eda40(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 local_160;
  long *local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  long *local_130 [2];
  long alStack_120 [4];
  long *local_100;
  long *local_f0;
  long local_e8;
  long local_e0;
  char local_d0 [16];
  long *local_c0 [2];
  long alStack_b0 [4];
  long *local_90;
  undefined8 local_80;
  long local_70;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar3 = (long *)(param_1 + 0x448);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x43c));
        while (*plVar3 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_012edab4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_012edab4:
  FUN_0120e660(local_d0,*(undefined8 *)PTR_DAT_027185f8);
  if (local_d0[0] == '\0') goto LAB_012edd58;
  FUN_007a2d60(local_130,local_c0);
  puVar8 = PTR_DAT_02710860;
  local_148 = *(undefined8 *)(param_1 + 8);
  local_158 = (long *)0x0;
  local_150 = (long *)0x0;
  local_160 = 0;
  local_138 = 0;
  uStack_140 = 0;
  if (local_e8 != 0) {
    plVar4 = local_f0 + local_e8;
    plVar19 = local_f0;
    do {
      while( true ) {
        uVar10 = local_148;
        plVar9 = local_158;
        plVar12 = *(long **)(param_1 + 0x98);
        if (plVar12 != *(long **)(param_1 + 0xa0)) break;
LAB_012edc24:
        plVar19 = plVar19 + 1;
        if (plVar19 == plVar4) goto LAB_012edc54;
      }
      lVar11 = *plVar19;
      uVar16 = (long)*(long **)(param_1 + 0xa0) + (-8 - (long)plVar12);
      uVar18 = uVar16 >> 3;
      uVar2 = (int)uVar18 + 1;
      uVar14 = (ulong)uVar2 & 7;
      if (uVar16 < 0x38) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        lVar15 = (uVar14 - 1) - uVar18;
        do {
          if (*plVar12 == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (plVar12[1] == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (plVar12[2] == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (plVar12[3] == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (plVar12[4] == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (plVar12[5] == lVar11) {
            lVar17 = lVar17 + 1;
          }
          plVar1 = plVar12 + 6;
          plVar5 = plVar12 + 7;
          plVar12 = plVar12 + 8;
          if (*plVar1 == lVar11) {
            lVar17 = lVar17 + 1;
          }
          if (*plVar5 == lVar11) {
            lVar17 = lVar17 + 1;
          }
          lVar15 = lVar15 + 8;
        } while (lVar15 != 0);
      }
      if ((uVar2 & 7) != 0) {
        lVar15 = -uVar14;
        do {
          if (*plVar12 == lVar11) {
            lVar17 = lVar17 + 1;
          }
          lVar15 = lVar15 + 1;
          plVar12 = plVar12 + 1;
        } while (lVar15 != 0);
      }
      if (lVar17 == 0) goto LAB_012edc24;
      if (local_158 != local_150) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *plVar9 = *plVar19;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        local_158 = local_158 + 1;
        goto LAB_012edc24;
      }
      FUN_009ba660(&local_160,plVar19);
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar4);
  }
LAB_012edc54:
  lVar11 = *(long *)(param_1 + 0x98);
  if (lVar11 != 0) {
    *(long *)(param_1 + 0xa0) = lVar11;
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),lVar11,*(long *)(param_1 + 0xa8) - lVar11,8);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(long *)(param_1 + 0x98) = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = local_148;
  *(undefined8 *)(param_1 + 0x98) = local_160;
  *(long *)(param_1 + 0xa0) = (long)local_158;
  *(long **)(param_1 + 0xa8) = local_150;
  if (local_e0 != 0) {
    (**(code **)(*local_130[0] + 0x18))(local_130[0],local_f0,local_e0 << 3,8);
  }
  if (alStack_120 == local_100) {
    pcVar13 = *(code **)(*local_100 + 0x20);
LAB_012edcf4:
    (*pcVar13)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar13 = *(code **)(*local_100 + 0x28);
    goto LAB_012edcf4;
  }
  if (local_d0[0] == '\0') goto LAB_012edd58;
  if (local_70 != 0) {
    (**(code **)(*local_c0[0] + 0x18))(local_c0[0],local_80,local_70 << 3,8);
  }
  if (alStack_b0 == local_90) {
    pcVar13 = *(code **)(*local_90 + 0x20);
LAB_012edd50:
    (*pcVar13)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar13 = *(code **)(*local_90 + 0x28);
    goto LAB_012edd50;
  }
  local_d0[0] = '\0';
LAB_012edd58:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x43c));
  return;
}


