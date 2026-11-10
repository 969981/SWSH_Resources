/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ca2a0; name: FUN_013ca2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ca2a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *local_d0;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long *aplStack_a0 [12];
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar12)(puVar12);
    lVar7 = FUN_0132d9a0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar13 = puVar12 + -10;
        plVar6 = (long *)puVar12[0x60];
        goto joined_r0x013ca6e0;
      }
    }
  }
  puVar13 = (undefined8 *)0x0;
  plVar6 = _DAT_00000350;
joined_r0x013ca6e0:
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_013a5170(&local_38);
  lVar7 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((*(long *)(lVar7 + 0x68) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(lVar7 + 0x68) + 0x60), puVar12 == (undefined8 *)0x0)) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar11 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_02715080) {
          puVar11 = puVar12 + -10;
          goto LAB_013ca3b0;
        }
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)0x0);
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_013ca3b0:
  uVar8 = FUN_012ec070(puVar11,&local_38);
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  FUN_01321ca0(DAT_01d4c18c,
               (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * 5.0);
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar10;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_c0 = &LAB_013d2b10;
  local_b8 = FUN_013d2c90;
  local_b0 = &LAB_013d2cf0;
  local_a8 = &LAB_013d2d50;
  aplStack_a0[0] = plVar6;
  FUN_01321cb0(uVar8,&local_c0);
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(aplStack_a0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  local_c8 = plVar6;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar10;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01322790(uVar8,&local_c8,&DAT_02a72560,3);
  if (local_c8 != (long *)0x0) {
    lVar7 = local_c8[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*local_c8 + 0x18))();
    }
    local_c8 = (long *)0x0;
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = (long *)puVar13[0x6a];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_013a5170(&local_38);
  lVar7 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((*(long *)(lVar7 + 0x68) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(lVar7 + 0x68) + 0x60), puVar12 == (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar13 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        if (puVar11 == (undefined8 *)PTR_DAT_02715080) {
          puVar13 = puVar12 + -10;
          goto LAB_013ca5f4;
        }
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)0x0);
      puVar13 = (undefined8 *)0x0;
    }
  }
LAB_013ca5f4:
  uVar8 = FUN_0130dc00(puVar13,&local_38);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  local_d0 = plVar6;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar10;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01363720(uVar8,&local_d0,&DAT_02a72570);
  if (local_d0 != (long *)0x0) {
    lVar7 = local_d0[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*local_d0 + 0x18))();
    }
    local_d0 = (long *)0x0;
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  return;
}


