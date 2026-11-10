/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f46a0; name: FUN_006f46a0
 */


void FUN_006f46a0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long local_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006f470c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006f470c:
  local_68 = (long *)param_2[6];
  local_48 = (long *)param_2[7];
  plVar13 = (long *)(param_1 + 0x98);
  if (((long *)*plVar13 == (long *)0x0) || ((long *)*plVar13 == plVar13)) {
    FUN_006f52f0(param_1 + 0x18,&local_68,&local_48);
    uVar8 = (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50)) - 1;
    puVar14 = (undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x20) + (uVar8 / 0x38) * 8) + (uVar8 % 0x38) * 0x48);
    plVar7 = *(long **)(param_1 + 0x80);
  }
  else {
    puVar14 = *(undefined8 **)(param_1 + 0xa0);
    puVar14[6] = local_68;
    puVar14[7] = local_48;
    plVar6 = *(long **)(param_1 + 0xa0);
    lVar4 = *plVar6;
    plVar7 = (long *)plVar6[1];
    *plVar7 = lVar4;
    *(long **)(lVar4 + 8) = plVar7;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar7 = *(long **)(param_1 + 0x80);
  }
  if ((param_2 != plVar7) && (plVar7 = (long *)param_2[1], plVar7[2] != 0)) {
    puVar14[7] = puVar14[7] + plVar7[7];
    puVar14[6] = plVar7[6];
    lVar4 = plVar7[4];
    local_48 = plVar7 + 2;
    if (lVar4 == 0) {
      plVar6 = local_48;
      do {
        bVar3 = plVar6 == (long *)((long *)*plVar6)[2];
        plVar6 = (long *)*plVar6;
      } while (bVar3);
    }
    else {
      do {
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
    }
    local_70 = param_1 + 0xb0;
    FUN_006f6110(&local_70,&local_48,&local_68);
    lVar4 = local_58[3];
    if (local_58 != local_48) {
      *(int *)(local_58 + 3) = (int)local_48[3];
    }
    if ((int)lVar4 != 0) {
      FUN_006f6290(&local_70,local_68,uStack_60);
    }
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    lVar4 = *plVar7;
    plVar6 = (long *)plVar7[1];
    *plVar6 = lVar4;
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar6 = (long *)FUN_0075edb0();
    (**(code **)(*plVar6 + 8))(plVar6,(int)plVar7[8]);
    *(undefined4 *)(plVar7 + 8) = 0xffffffff;
    puVar9 = *(undefined8 **)(param_1 + 0xa0);
    *plVar7 = (long)plVar13;
    plVar7[1] = (long)puVar9;
    *(long **)(param_1 + 0xa0) = plVar7;
    *puVar9 = plVar7;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  }
  plVar6 = (long *)*param_2;
  plVar7 = (long *)(param_1 + 0x80);
  if ((plVar7 != plVar6) && (plVar6[2] != 0)) {
    puVar14[7] = puVar14[7] + plVar6[7];
    lVar4 = plVar6[4];
    local_48 = plVar6 + 2;
    if (lVar4 == 0) {
      plVar5 = local_48;
      do {
        bVar3 = plVar5 == (long *)((long *)*plVar5)[2];
        plVar5 = (long *)*plVar5;
      } while (bVar3);
    }
    else {
      do {
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
    }
    local_70 = param_1 + 0xb0;
    FUN_006f6110(&local_70,&local_48,&local_68);
    lVar4 = local_58[3];
    if (local_58 != local_48) {
      *(int *)(local_58 + 3) = (int)local_48[3];
    }
    if ((int)lVar4 != 0) {
      FUN_006f6290(&local_70,local_68,uStack_60);
    }
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    lVar4 = *plVar6;
    plVar5 = (long *)plVar6[1];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar5 = (long *)FUN_0075edb0();
    (**(code **)(*plVar5 + 8))(plVar5,(int)plVar6[8]);
    *(undefined4 *)(plVar6 + 8) = 0xffffffff;
    puVar9 = *(undefined8 **)(param_1 + 0xa0);
    *plVar6 = (long)plVar13;
    plVar6[1] = (long)puVar9;
    *(long **)(param_1 + 0xa0) = plVar6;
    *puVar9 = plVar6;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  }
  puVar9 = (undefined8 *)param_2[1];
  *puVar14 = param_2;
  puVar14[1] = puVar9;
  param_2[1] = (long)puVar14;
  *puVar9 = puVar14;
  plVar6 = (long *)(param_1 + 0xb0);
  puVar9 = puVar14 + 2;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
    plVar5 = plVar6;
LAB_006f4a58:
    *(undefined8 **)(param_1 + 0xb8) = puVar9;
    *(undefined8 **)(param_1 + 0xc0) = puVar9;
    *(undefined8 **)(param_1 + 0xb0) = puVar9;
  }
  else {
    plVar10 = *(long **)(param_1 + 0xb0);
    do {
      plVar5 = plVar10;
      lVar4 = 8;
      if ((ulong)plVar5[5] <= (ulong)puVar14[7]) {
        lVar4 = 0x10;
      }
      plVar10 = *(long **)((long)plVar5 + lVar4);
    } while (*(long **)((long)plVar5 + lVar4) != (long *)0x0);
    if (plVar5 == plVar6) goto LAB_006f4a58;
    if ((ulong)puVar14[7] < (ulong)plVar5[5]) {
      plVar5[1] = (long)puVar9;
      if (*(long **)(param_1 + 0xb8) == plVar5) {
        *(undefined8 **)(param_1 + 0xb8) = puVar9;
      }
    }
    else {
      plVar5[2] = (long)puVar9;
      if (*(long **)(param_1 + 0xc0) == plVar5) {
        *(undefined8 **)(param_1 + 0xc0) = puVar9;
      }
    }
  }
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[2] = plVar5;
  local_68 = plVar6;
  FUN_006f5140(&local_68);
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  lVar4 = *param_2;
  plVar5 = (long *)param_2[1];
  *plVar5 = lVar4;
  *(long **)(lVar4 + 8) = plVar5;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)FUN_0075edb0();
  (**(code **)(*plVar5 + 8))(plVar5,(int)param_2[8]);
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  puVar14 = *(undefined8 **)(param_1 + 0xa0);
  *param_2 = (long)plVar13;
  param_2[1] = (long)puVar14;
  *(long **)(param_1 + 0xa0) = param_2;
  *puVar14 = param_2;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  if (*(char *)(param_1 + 0xd0) == '\0') goto LAB_006f4c10;
  plVar13 = *(long **)(param_1 + 0x80);
  if (plVar7 == plVar13) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_006f4b18;
  }
  else {
    lVar4 = 0;
    plVar5 = plVar13;
    do {
      if (plVar5[6] != lVar4) goto LAB_006f4b9c;
      plVar10 = plVar5 + 7;
      plVar5 = (long *)*plVar5;
      lVar4 = *plVar10 + lVar4;
    } while (plVar7 != plVar5);
    if (lVar4 == *(long *)(param_1 + 0xd8)) {
LAB_006f4b18:
      plVar5 = *(long **)(param_1 + 0xb8);
      if (plVar5 != plVar6) {
        uVar8 = 0;
        do {
          while( true ) {
            uVar12 = plVar5[5];
            if (uVar12 < uVar8) goto LAB_006f4b9c;
            plVar10 = (long *)plVar5[2];
            uVar8 = uVar12;
            if ((long *)plVar5[2] == (long *)0x0) break;
            do {
              plVar5 = plVar10;
              plVar10 = (long *)plVar5[1];
            } while ((long *)plVar5[1] != (long *)0x0);
            if (plVar5 == plVar6) goto LAB_006f4c10;
          }
          do {
            plVar10 = plVar5;
            plVar11 = (long *)*plVar10;
            plVar5 = plVar11;
          } while (plVar10 == (long *)plVar11[2]);
          plVar5 = plVar10;
          if ((long *)plVar10[2] != plVar11) {
            plVar5 = plVar11;
          }
        } while (plVar5 != plVar6);
      }
      goto LAB_006f4c10;
    }
  }
LAB_006f4b9c:
  for (; plVar7 != plVar13; plVar13 = (long *)*plVar13) {
    if (-1 < (int)plVar13[8]) {
      plVar5 = (long *)FUN_0075edb0();
      (**(code **)(*plVar5 + 0x10))(plVar5,(int)plVar13[8]);
    }
  }
  plVar13 = *(long **)(param_1 + 0xb8);
  while (plVar13 != plVar6) {
    plVar7 = (long *)plVar13[2];
    if ((long *)plVar13[2] == (long *)0x0) {
      do {
        plVar7 = plVar13;
        plVar5 = (long *)*plVar7;
        plVar13 = plVar5;
      } while (plVar7 == (long *)plVar5[2]);
      plVar13 = plVar7;
      if ((long *)plVar7[2] != plVar5) {
        plVar13 = plVar5;
      }
    }
    else {
      do {
        plVar13 = plVar7;
        plVar7 = (long *)plVar13[1];
      } while ((long *)plVar13[1] != (long *)0x0);
    }
  }
LAB_006f4c10:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return;
}


