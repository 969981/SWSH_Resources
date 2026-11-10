/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d933c0; name: FUN_00d933c0
 */


void FUN_00d933c0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long local_58;
  
  param_1[7] = 0;
  puVar4 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar4 = PTR_DAT_0271e650;
  if (lVar6 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar10 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar10;
  puVar5 = PTR_DAT_0271e658;
  puVar3 = PTR_DAT_02710528;
  *puVar4 = 1;
  param_1[9] = (long)(puVar5 + 0x40);
  *param_1 = (long)(puVar5 + 0x10);
  plVar13 = param_1 + 10;
  *plVar13 = 0;
  plVar12 = param_1 + 0xf;
  *plVar12 = (long)(puVar3 + 0x10);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar6 = FUN_007606c0();
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar6 + 0x10);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
        while (*plVar11 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d934d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d934d4:
  puVar4 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar12;
  *(long *)(puVar4 + 0x800) = *(long *)(puVar4 + 0x800) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  puVar4 = PTR_DAT_0271e660;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar3 = PTR_DAT_0271e668;
  param_1[0xf] = (long)(puVar4 + 0x10);
  param_1[0x10] = 0;
  *(long **)puVar3 = plVar12;
  param_1[0x14] = 0;
  lVar6 = param_1[10];
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  param_1[10] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  FUN_01064670(&local_58,param_2);
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = local_58;
  *(undefined4 *)(local_58 + 0x140) = 0xb4;
  lVar6 = FUN_00d945a0(&local_58,param_2);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_58 = param_1[0xe];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00d94c30(lVar6,"bin/appli/fade/bin/fade_common_00.arc",param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar10 = *plVar13;
  *plVar13 = lVar6;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (((long *)param_1[10] != (long *)0x0) &&
     (uVar7 = (**(code **)(*(long *)param_1[10] + 0x30))(), (uVar7 & 1) != 0)) {
    (**(code **)(*(long *)param_1[10] + 0x60))((long *)param_1[10],0,2);
  }
  lVar10 = FUN_00d94680(&local_58,param_2);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_58 = param_1[0xe];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00d9c270(lVar10,"bin/appli/fade/bin/fade_rotom_00.arc",param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar10 != 0) {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar8 = param_1[0xb];
  param_1[0xb] = lVar10;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  lVar14 = *(long *)puVar3;
  *(undefined8 *)(lVar14 + 0x20) = 900000;
  *(long **)(lVar14 + 0x10) = param_2;
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,900000,8);
  *(long *)(lVar14 + 0x18) = lVar8;
  if (lVar8 == 0) {
    (**(code **)(**(long **)(lVar14 + 0x10) + 0xb8))();
    lVar8 = *(long *)(lVar14 + 0x18);
  }
  FUN_00760770(lVar8,lVar8 + 0xb8,0xdbae8,0);
  *(long *)(lVar14 + 8) = lVar8;
  param_1[0x14] = lVar8;
  lVar8 = FUN_00d94760(&local_58,lVar8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar14 = param_1[0x14];
  local_58 = param_1[0xe];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00d9aca0(lVar8,0xc,lVar14,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar14 = param_1[0xc];
  param_1[0xc] = lVar8;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar14 = FUN_00d94840(&local_58,param_2);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  local_58 = param_1[0xe];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00d97bf0(lVar14,"bin/appli/townmap/bin/townmap_top_00_lyt.bin",param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar14 != 0) {
    plVar11 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar9 = param_1[0xd];
  param_1[0xd] = lVar14;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  if (lVar14 != 0) {
    plVar11 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


