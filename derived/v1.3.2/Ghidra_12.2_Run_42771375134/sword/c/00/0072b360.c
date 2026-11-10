/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072b360; name: FUN_0072b360
 */


void FUN_0072b360(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0072b3cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0072b3cc:
  if (-1 < *(int *)(param_1 + 0x1a8)) {
    FUN_00729ff0(param_1 + 0x90,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x2c8)) {
    FUN_00729ff0(param_1 + 0x1b0,param_2);
  }
  if (-1 < *(int *)(param_1 + 1000)) {
    FUN_00729ff0(param_1 + 0x2d0,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x508)) {
    FUN_00729ff0(param_1 + 0x3f0,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x628)) {
    FUN_00729ff0(param_1 + 0x510,param_2);
  }
  if (-1 < *(int *)(param_1 + 0x748)) {
    FUN_00729ff0(param_1 + 0x630,param_2);
  }
  puVar7 = PTR_DAT_027155e8;
  lVar8 = param_1 + 0x780;
  if (*(char *)(param_1 + 0x8e8) != '\0') {
    FUN_019a44c0(lVar8,PTR_DAT_027155e8);
    FUN_019a42f0(lVar8,puVar7,param_1 + 0x7b0);
    *(undefined1 *)(param_1 + 0x8e8) = 0;
  }
  FUN_0199ce00(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,lVar8);
  puVar7 = PTR_DAT_027155e8;
  lVar8 = param_1 + 0x7f0;
  if (*(char *)(param_1 + 0x8e9) != '\0') {
    FUN_019a4910(lVar8,PTR_DAT_027155e8);
    FUN_019a4760(lVar8,puVar7,param_1 + 0x80c);
    *(undefined1 *)(param_1 + 0x8e9) = 0;
  }
  FUN_0199cfb0(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,lVar8);
  if (*(char *)(param_1 + 0x8ea) != '\0') {
    if (*(long *)(param_1 + 0x8c8) != 0) {
      FUN_019a4730(param_1 + 0x850,PTR_DAT_027155e8);
      lVar8 = *(long *)(param_1 + 0x8c8);
      *(undefined8 *)(param_1 + 0x8c8) = 0;
      if (lVar8 != 0) {
        (**(code **)(**(long **)(param_1 + 0x8d0) + 0x18))
                  (*(long **)(param_1 + 0x8d0),lVar8,*(undefined8 *)(param_1 + 0x8d8),
                   *(undefined8 *)(param_1 + 0x8e0));
      }
    }
    uVar9 = FUN_019a44d0(param_1 + 0x878);
    plVar11 = *(long **)(param_1 + 8);
    uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,uVar9,8);
    lVar8 = *(long *)(param_1 + 0x8c8);
    *(undefined8 *)(param_1 + 0x8c8) = uVar10;
    if (lVar8 != 0) {
      (**(code **)(**(long **)(param_1 + 0x8d0) + 0x18))
                (*(long **)(param_1 + 0x8d0),lVar8,*(undefined8 *)(param_1 + 0x8d8),
                 *(undefined8 *)(param_1 + 0x8e0));
      uVar10 = *(undefined8 *)(param_1 + 0x8c8);
    }
    *(long **)(param_1 + 0x8d0) = plVar11;
    *(undefined8 *)(param_1 + 0x8d8) = uVar9;
    *(undefined8 *)(param_1 + 0x8e0) = 8;
    FUN_019a4500(param_1 + 0x850,uVar10,uVar9);
    FUN_019a4520(param_1 + 0x850,PTR_DAT_027155e8,param_1 + 0x878);
    *(undefined1 *)(param_1 + 0x8ea) = 0;
  }
  FUN_0199cf00(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,param_1 + 0x850);
  lVar13 = *(long *)(param_1 + 0x758);
  for (lVar8 = *(long *)(param_1 + 0x750); lVar8 != lVar13; lVar8 = lVar8 + 0x1f0) {
    if (-1 < *(int *)(lVar8 + 0x1dc)) {
      FUN_006fc5c0(lVar8);
      iVar4 = *(int *)PTR_DAT_02715500;
      lVar12 = *(long *)(param_2 + 0x58);
      uVar2 = *(undefined4 *)(lVar8 + 0x1dc);
      uVar3 = *(undefined4 *)(lVar8 + 0x1d8);
      uVar9 = FUN_006fc6f0(lVar8);
      FUN_0199e180(lVar12 + (long)iVar4 * 0x170,uVar2,uVar3,uVar9,*(long *)(lVar8 + 0x168) + 0xd0);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


