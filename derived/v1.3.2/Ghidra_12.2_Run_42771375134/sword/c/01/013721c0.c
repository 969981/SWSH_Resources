/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013721c0; name: FUN_013721c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013721c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  
  puVar5 = PTR_DAT_02727748;
  lVar10 = *(long *)PTR_DAT_02727748;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar12 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        uVar6 = FUN_012eac20(*(undefined8 *)(lVar10 + 0x58));
        if ((uVar6 & 1) == 0) goto LAB_013722b0;
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            FUN_0130ab90(lVar10 + -0x50,0);
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
            lVar10 = *(long *)puVar5;
            goto joined_r0x01372260;
          }
          goto LAB_013722b0;
        }
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_013722b0;
      }
      ClearExclusiveLocal();
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_013722b0:
  FUN_0130ab90(0,0);
  lVar10 = *(long *)puVar5;
joined_r0x01372260:
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar12 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        uVar6 = FUN_012eac20(*(undefined8 *)(lVar10 + 0x58));
        if ((uVar6 & 1) == 0) goto LAB_013722c4;
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            FUN_0130abb0(lVar10 + -0x50);
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
            goto LAB_013722cc;
          }
          goto LAB_013722c4;
        }
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_013722c4;
      }
      ClearExclusiveLocal();
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_013722c4:
  FUN_0130abb0(0);
LAB_013722cc:
  local_60 = 0;
  local_d0 = 0xcbf29ce484222645;
  local_c8 = &DAT_01d38550;
  uStack_c0 = 0;
  local_54 = 0;
  local_5c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_b8 = 0;
  uStack_b0 = 0x4180000000000001;
  local_a8 = CONCAT44((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                      DAT_01d4c2bc,0x49127c00);
  local_a0 = 0;
  local_80 = *(undefined8 *)PTR_DAT_02715a50;
  uStack_78 = *(undefined8 *)(PTR_DAT_02715a50 + 8);
  local_98 = 0;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar10 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar10; plVar7 = (long *)*plVar7) {
  }
  plVar7 = (long *)puVar11[0x60];
  if (plVar7 == (long *)0x0) {
    FUN_0070c4f0(0,&local_d0);
  }
  else {
    lVar10 = plVar7[0xb];
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0070c4f0(plVar7,&local_d0);
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar9 = FUN_0132d9a0();
  lVar10 = _DAT_000001a8;
  for (; plVar7 != (long *)lVar9; plVar7 = (long *)*plVar7) {
  }
  plVar7 = (long *)puVar11[0x60];
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(_DAT_000001a8 + 0x100) = 0;
    *(undefined8 *)(lVar10 + 0x108) = 0;
  }
  else {
    lVar10 = plVar7[0xb];
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar7[0x35];
    *(undefined8 *)(lVar10 + 0x100) = 0;
    *(undefined8 *)(lVar10 + 0x108) = 0;
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar9 = FUN_0132d9a0();
  lVar10 = _DAT_000001a8;
  for (; plVar7 != (long *)lVar9; plVar7 = (long *)*plVar7) {
  }
  plVar7 = (long *)puVar11[0x60];
  if (plVar7 == (long *)0x0) {
    uVar8 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
    *(undefined8 *)(_DAT_000001a8 + 0x120) = *(undefined8 *)PTR_DAT_027152c0;
    *(undefined8 *)(lVar10 + 0x128) = uVar8;
  }
  else {
    lVar10 = plVar7[0xb];
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar7[0x35];
    uVar8 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
    *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)PTR_DAT_027152c0;
    *(undefined8 *)(lVar10 + 0x128) = uVar8;
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


