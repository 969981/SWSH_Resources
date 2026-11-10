/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010872e0; name: FUN_010872e0
 */


void FUN_010872e0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  float fVar15;
  long local_68;
  undefined **local_60;
  long lStack_58;
  undefined ***local_40;
  long local_30;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_30);
  local_28 = local_30;
  local_60 = &PTR_LAB_0266e670;
  local_30 = 0;
  lStack_58 = param_1;
  local_40 = &local_60;
  FUN_00ca4690(&local_28,&local_60);
  if (&local_60 == local_40) {
    pcVar6 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_01087358;
    pcVar6 = (code *)(*local_40)[5];
  }
  (*pcVar6)();
LAB_01087358:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_30);
  local_68 = local_30;
  local_30 = 0;
  FUN_00c7a630(&local_60,uVar11,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  ppuVar4 = local_60;
  puVar12 = PTR_DAT_02719750;
  if ((local_60 != (undefined **)0x0) && (*(int *)((long)local_60 + 0x54) != 0)) {
    piVar1 = (int *)((long)local_60 + 0x54);
    puVar8 = PTR_DAT_02719758;
    iVar9 = *(int *)((long)local_60 + 0x54);
    do {
      while( true ) {
        plVar10 = (long *)ppuVar4[0xb];
        if (((*puVar12 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar12), puVar8 = PTR_DAT_02719758, iVar5 != 0)) {
          uVar11 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar11;
          __cxa_guard_release(puVar12);
          puVar8 = PTR_DAT_02719758;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_01087504;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_01087504;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        puVar12 = ppuVar4[0xc];
        if (puVar12 != (undefined *)0x0) {
          FUN_00c68b70(puVar12 + -0x50,1);
          (**(code **)(*(long *)(puVar12 + -8) + 0x18))(puVar12 + -8);
          goto joined_r0x010874fc;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_01087504:
  FUN_00c68b70(0,1);
joined_r0x010874fc:
  if (local_60 != (undefined **)0x0) {
    (**(code **)(local_60[9] + 0x18))();
    local_60 = (undefined **)0x0;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xd8);
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  lVar7 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(lVar7 + 0xc0) = 1;
  *(undefined8 *)(lVar7 + 0xb8) = uVar14;
  *(undefined8 *)(lVar7 + 0xb0) = uVar11;
  fVar15 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
  auVar13 = FUN_00a92cd0(fVar15 * (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20),
                         fVar15 * (float)*(undefined8 *)(param_1 + 0xe0),
                         fVar15 * (float)*(undefined8 *)(param_1 + 0xe8));
  lVar7 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(lVar7 + 0xc0) = 1;
  *(undefined1 (*) [16])(lVar7 + 0xa0) = auVar13;
  return;
}


