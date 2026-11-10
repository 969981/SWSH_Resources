/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f27ce0; name: FUN_00f27ce0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00f27ce0(undefined8 param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [8];
  
  lVar16 = *(long *)PTR_DAT_027194d8;
  puVar14 = *(undefined8 **)(lVar16 + 0xb0);
  puVar2 = *(undefined8 **)(lVar16 + 0xb8);
  while( true ) {
    if (puVar14 == puVar2) {
      param_2[3] = 0;
      return 0;
    }
    plVar13 = (long *)*puVar14;
    uVar10 = FUN_00f2a040(plVar13 + 10);
    if (((((uVar10 & 1) != 0) &&
         (uVar10 = (**(code **)(*plVar13 + 0x70))(plVar13), (uVar10 & 1) != 0)) &&
        (plVar13[0x34] == *param_2)) &&
       (uVar10 = (**(code **)(*(long *)*puVar14 + 0x88))(), (uVar10 & 1) == 0)) break;
    puVar14 = puVar14 + 1;
  }
  param_2[3] = (long)plVar13;
  puVar14 = *(undefined8 **)(lVar16 + 0xb0);
  puVar2 = *(undefined8 **)(lVar16 + 0xb8);
  while( true ) {
    if (puVar14 == puVar2) {
      param_2[4] = 0;
      return 0;
    }
    plVar13 = (long *)*puVar14;
    uVar10 = FUN_00f2a040(plVar13 + 10);
    if ((((uVar10 & 1) != 0) &&
        (uVar10 = (**(code **)(*plVar13 + 0x70))(plVar13), (uVar10 & 1) != 0)) &&
       ((plVar13[0x34] == param_2[1] &&
        (uVar10 = (**(code **)(*(long *)*puVar14 + 0x88))(), (uVar10 & 1) == 0)))) break;
    puVar14 = puVar14 + 1;
  }
  param_2[4] = (long)plVar13;
  puVar14 = *(undefined8 **)(lVar16 + 0xb0);
  puVar2 = *(undefined8 **)(lVar16 + 0xb8);
  while( true ) {
    if (puVar14 == puVar2) {
      param_2[5] = 0;
      return 0;
    }
    plVar13 = (long *)*puVar14;
    uVar10 = FUN_015bec30(plVar13 + 10);
    if ((((uVar10 & 1) != 0) &&
        (uVar10 = (**(code **)(*plVar13 + 0x70))(plVar13), (uVar10 & 1) != 0)) &&
       ((plVar13[0x34] == param_2[2] &&
        (uVar10 = (**(code **)(*(long *)*puVar14 + 0x88))(), (uVar10 & 1) == 0)))) break;
    puVar14 = puVar14 + 1;
  }
  lVar16 = param_2[4];
  param_2[5] = (long)plVar13;
  fVar6 = DAT_01d4bc9c;
  if (*(float *)(lVar16 + 0xb4) <= DAT_01d4bc9c) {
    *(int *)(param_2 + 7) = (int)((*(float *)(lVar16 + 0xb4) / DAT_01d4bf6c + 1.0) * 30.0) + 0x11;
    fVar19 = *(float *)(lVar16 + 0xb4);
    if (fVar19 <= fVar6) goto LAB_00f27ef8;
LAB_00f27ee4:
    *(undefined4 *)((long)param_2 + 0x3c) = 0xf;
    cVar4 = (char)param_2[6];
  }
  else {
    *(undefined4 *)(param_2 + 7) = 0x11;
    fVar19 = *(float *)(lVar16 + 0xb4);
    if (fVar6 < fVar19) goto LAB_00f27ee4;
LAB_00f27ef8:
    *(int *)((long)param_2 + 0x3c) = (int)((fVar19 / DAT_01d4bf6c + 1.0) * 30.0) + 0xf;
    cVar4 = (char)param_2[6];
  }
  if (cVar4 != '\0') {
    return 1;
  }
  FUN_015bee50(param_2[3],auStack_58);
  FUN_00794740();
  FUN_015bee50(param_2[4],auStack_48);
  FUN_00794740();
  lVar15 = param_2[5];
  lVar16 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar15 + 0xf0);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f27f94;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f27f94:
  puVar8 = PTR_DAT_027208d0;
  puVar7 = PTR_DAT_027208c8;
  plVar18 = *(long **)(lVar15 + 0x140);
  plVar17 = *(long **)(lVar15 + 0x148);
  if (plVar17 == plVar18) {
LAB_00f28048:
    puVar8 = PTR_DAT_027208d0;
    puVar7 = PTR_DAT_027208c8;
    plVar18 = *(long **)(lVar15 + 0x110);
    plVar17 = *(long **)(lVar15 + 0x118);
    if (plVar17 == plVar18) {
      lVar16 = 0;
      goto LAB_00f28114;
    }
    do {
      lVar16 = *plVar18;
      puVar14 = (undefined8 *)(lVar16 + 8);
      plVar11 = (long *)(**(code **)*puVar14)(puVar14);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar12 = FUN_00706e40();
        *(undefined8 *)puVar8 = uVar12;
        __cxa_guard_release(puVar7);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)puVar8) {
          if (*(int *)(lVar16 + 0x60) == 2) {
            plVar17 = plVar18;
            goto LAB_00f280f8;
          }
          break;
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
LAB_00f280f8:
    if (*(long **)(lVar15 + 0x118) == plVar17) {
      lVar16 = 0;
      goto LAB_00f28114;
    }
  }
  else {
    do {
      lVar16 = *plVar18;
      puVar14 = (undefined8 *)(lVar16 + 8);
      plVar11 = (long *)(**(code **)*puVar14)(puVar14);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar12 = FUN_00706e40();
        *(undefined8 *)puVar8 = uVar12;
        __cxa_guard_release(puVar7);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)puVar8) {
          if (*(int *)(lVar16 + 0x60) == 2) {
            plVar17 = plVar18;
            goto LAB_00f2803c;
          }
          break;
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
LAB_00f2803c:
    if (*(long **)(lVar15 + 0x148) == plVar17) goto LAB_00f28048;
  }
  lVar16 = 0;
  if (*plVar17 != 0) {
    lVar16 = *plVar17 + -0x48;
  }
LAB_00f28114:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
  if ((*(long *)(lVar16 + 0x80) != 0) && (*(int *)(*(long *)(lVar16 + 0x80) + 0x54) != 0)) {
    lVar16 = *(long *)(lVar16 + 0x80);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0x54) != 0)) {
      piVar1 = (int *)(lVar16 + 0x54);
      iVar9 = *(int *)(lVar16 + 0x54);
      do {
        plVar13 = *(long **)(lVar16 + 0x58);
        lVar15 = FUN_006cb2c0();
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00f28198;
          if (plVar13 == (long *)lVar15) break;
          plVar13 = (long *)*plVar13;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar16 = *(long *)(lVar16 + 0x60);
            if (lVar16 != 0) {
              *(undefined1 *)(lVar16 + 0x10) = 0;
              (**(code **)(*(long *)(lVar16 + -8) + 0x18))();
              return 1;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00f28198:
    DAT_00000060 = 0;
  }
  return 1;
}


