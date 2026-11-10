/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078b230; name: FUN_0078b230
 */


/* WARNING: Removing unreachable block (ram,0x0078b320) */

void FUN_0078b230(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  
  puVar7 = PTR_DAT_027105c8;
  puVar20 = *(undefined8 **)(param_1 + 0x78);
  lVar18 = *(long *)PTR_DAT_027105c8;
  if (puVar20 < *(undefined8 **)(param_1 + 0x80)) {
    uVar15 = *(undefined8 *)(param_1 + 0x88);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0078b89c;
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = 0;
    puVar20[1] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = *(long *)(param_1 + 0x78) + 0x60;
    *(long *)(param_1 + 0x78) = lVar8;
  }
  else {
    FUN_0078bf70(param_1 + 0x70);
    lVar8 = *(long *)(param_1 + 0x78);
  }
  (**(code **)(*param_2 + 0x10))(&local_b0);
  if (*(long *)(lVar8 + -0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar8 + -0x60) + 0x48) + 0x18))();
    *(undefined8 *)(lVar8 + -0x60) = 0;
  }
  *(undefined8 *)(lVar8 + -0x60) = local_b0;
  local_b0 = 0;
  lVar9 = FUN_0078d8e0(*(undefined8 *)puVar7,param_2,&local_6c);
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x14c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0078b394;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0078b394:
  if (*(char *)(lVar18 + 0x50) == '\0') {
    plVar17 = *(long **)(param_1 + 8);
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_0078b89c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar17;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar13 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xd0,8);
    if (plVar13 == (long *)0x0) {
      (**(code **)(*plVar17 + 0xb8))(plVar17);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    FUN_00700120(plVar13,0,1);
    puVar7 = PTR_DAT_02716420;
    *plVar13 = (long)(PTR_DAT_02716420 + 0x10);
    plVar13[1] = (long)plVar17;
    plVar13[9] = (long)(puVar7 + 0x98);
    plVar13[10] = (long)(puVar7 + 0xd8);
    *(undefined4 *)(plVar13 + 0x19) = 0xffffffff;
    *(undefined4 *)(plVar13 + 0x18) = uVar4;
    *(undefined4 *)((long)plVar13 + 0xc4) = local_6c;
    plVar13[0x16] = 0;
    plVar13[0x17] = 0;
    *(undefined1 *)((long)plVar13 + 0xcc) = 0;
    plVar13[2] = (long)plVar13;
    plVar13[3] = 0xd0;
    plVar13[4] = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    if (plVar13 != (long *)0x0) {
      (**(code **)(plVar13[9] + 0x10))();
    }
    if (*(long *)(lVar8 + -0x58) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x58) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x58) = 0;
    }
    *(long **)(lVar8 + -0x58) = plVar13;
  }
  else {
    lVar10 = FUN_007029e0(param_2,lVar18 + 0x80);
    local_78 = *(undefined8 *)(lVar10 + 0xb0);
    local_80 = *(undefined8 *)(lVar10 + 0x130);
    lVar10 = param_1 + 0x60;
    lVar11 = FUN_0078c430(&local_b0,*(undefined8 *)(param_1 + 8),&local_78,&local_80,lVar10,
                          &local_6c,lVar18 + 0x54);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(lVar18 + 0x60);
    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar18 + 0x68);
    *(undefined8 *)(lVar11 + 0x90) = *(undefined8 *)(lVar18 + 0x70);
    lVar14 = *(long *)(lVar18 + 0x78);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar12 = *(long *)(lVar11 + 0x98);
    *(long *)(lVar11 + 0x98) = lVar14;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    FUN_006d1640(lVar9,0,*(undefined8 *)(lVar11 + 0x70));
    FUN_00702020(param_2,lVar11);
    if (*(long *)(lVar8 + -0x58) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x58) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x58) = 0;
    }
    *(long *)(lVar8 + -0x58) = lVar11;
    lVar11 = FUN_0078c430(&local_b0,*(undefined8 *)(param_1 + 8),&local_78,&local_80,lVar10,
                          &local_6c,lVar18 + 0x58);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(lVar18 + 0x80);
    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar18 + 0x88);
    *(undefined8 *)(lVar11 + 0x90) = *(undefined8 *)(lVar18 + 0x90);
    lVar14 = *(long *)(lVar18 + 0x98);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar12 = *(long *)(lVar11 + 0x98);
    *(long *)(lVar11 + 0x98) = lVar14;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(lVar18 + 0xa0);
    FUN_006d1640(lVar9,0,*(undefined8 *)(lVar11 + 0x70));
    FUN_00702020(param_2,lVar11);
    if (*(long *)(lVar8 + -0x50) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x50) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x50) = 0;
    }
    *(long *)(lVar8 + -0x50) = lVar11;
    lVar11 = FUN_0078c430(&local_b0,*(undefined8 *)(param_1 + 8),&local_78,&local_80,lVar10,
                          &local_6c,lVar18 + 0x5c);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(lVar18 + 0x80);
    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar18 + 0x88);
    *(undefined8 *)(lVar11 + 0x90) = *(undefined8 *)(lVar18 + 0x90);
    lVar14 = *(long *)(lVar18 + 0x98);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar12 = *(long *)(lVar11 + 0x98);
    *(long *)(lVar11 + 0x98) = lVar14;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(lVar18 + 0xa8);
    FUN_006d1640(lVar9,0,*(undefined8 *)(lVar11 + 0x70));
    FUN_00702020(param_2,lVar11);
    if (*(long *)(lVar8 + -0x48) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x48) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x48) = 0;
    }
    *(long *)(lVar8 + -0x48) = lVar11;
    puVar20 = (undefined8 *)(lVar18 + 0xe0);
    lVar18 = -0x40;
    do {
      cVar5 = *(char *)(puVar20 + -5);
      uVar15 = puVar20[-4];
      uVar3 = puVar20[-3];
      uVar2 = puVar20[-2];
      lVar11 = puVar20[-1];
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (cVar5 != '\0') {
        uVar19 = *(undefined8 *)(param_1 + 8);
        local_b0 = puVar20[-5];
        uVar16 = *puVar20;
        local_a8 = puVar20[-4];
        local_a0 = puVar20[-3];
        local_98 = puVar20[-2];
        local_90 = puVar20[-1];
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
        }
        local_88 = *puVar20;
        lVar14 = FUN_0078c580(auStack_68,uVar19,&local_78,&local_80,lVar10,&local_6c,
                              (ulong)&local_b0 | 4);
        if (lVar14 != 0) {
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
        }
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        *(undefined8 *)(lVar14 + 0x80) = uVar15;
        *(undefined8 *)(lVar14 + 0x88) = uVar3;
        *(undefined8 *)(lVar14 + 0x90) = uVar2;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        lVar12 = *(long *)(lVar14 + 0x98);
        *(long *)(lVar14 + 0x98) = lVar11;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        }
        *(undefined8 *)(lVar14 + 0xa0) = uVar16;
        FUN_006d1640(lVar9,0,*(undefined8 *)(lVar14 + 0x70));
        FUN_00702020(param_2,lVar14);
        if (*(long *)(lVar8 + lVar18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + lVar18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar8 + lVar18) = 0;
        }
        *(long *)(lVar8 + lVar18) = lVar14;
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      lVar18 = lVar18 + 8;
      puVar20 = puVar20 + 6;
    } while (lVar18 != 0);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x14c));
  return;
}


