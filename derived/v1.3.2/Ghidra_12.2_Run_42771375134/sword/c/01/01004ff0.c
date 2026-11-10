/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01004ff0; name: FUN_01004ff0
 */


void FUN_01004ff0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  plVar14 = (long *)param_1[0xf2];
  puVar10 = PTR_DAT_02723490 + 0x48;
  *param_1 = (long)(PTR_DAT_02723490 + 0x10);
  param_1[9] = (long)puVar10;
  param_1[0xf2] = 0;
  if (plVar14 != (long *)0x0) {
    if (plVar14[1] != 0) {
      (**(code **)(*(long *)(plVar14[1] + 0x48) + 0x18))();
      plVar14[1] = 0;
    }
    if (*plVar14 != 0) {
      (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
      *plVar14 = 0;
    }
    (**(code **)(*(long *)param_1[0xf3] + 0x18))
              ((long *)param_1[0xf3],plVar14,param_1[0xf4],param_1[0xf5]);
  }
  lVar7 = param_1[0xf7];
  param_1[0xf7] = 0;
  if (lVar7 == 0) {
    param_1[0xf7] = 0;
    lVar7 = param_1[0xf6];
    param_1[0xf6] = 0;
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    lVar7 = param_1[0xf7];
    param_1[0xf7] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = param_1[0xf6];
    param_1[0xf6] = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  plVar3 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (plVar14 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar14 != plVar3;
      plVar14 = plVar14 + 1) {
    while ((((long *)*plVar14 != (long *)0x0 &&
            (uVar8 = (**(code **)(*(long *)*plVar14 + 0x88))(), (uVar8 & 1) == 0)) &&
           (*(char *)(*plVar14 + 0x1c7) == '\0'))) {
      (**(code **)(*(long *)*plVar14 + 0x80))();
      plVar14 = plVar14 + 1;
      if (plVar3 == plVar14) goto LAB_01005144;
    }
  }
LAB_01005144:
  lVar7 = param_1[0xfd];
  param_1[0xfd] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xfc];
  param_1[0xfc] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xfb];
  param_1[0xfb] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xfa];
  param_1[0xfa] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xf9];
  param_1[0xf9] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x81];
  param_1[0x81] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x84];
  param_1[0x84] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (param_1[0x86] != 0) {
    lVar7 = *(long *)PTR_DAT_027234a0;
    (**(code **)**(undefined8 **)(lVar7 + 8))();
    *(undefined8 *)(lVar7 + 8) = 0;
    (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
              (*(long **)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20),
               8);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
  }
  if (param_1[0x8a] != 0) {
    lVar7 = *(long *)PTR_DAT_027234a0;
    (**(code **)**(undefined8 **)(lVar7 + 0x28))();
    *(undefined8 *)(lVar7 + 0x28) = 0;
    (**(code **)(**(long **)(lVar7 + 0x30) + 0x18))
              (*(long **)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40),
               8);
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
  }
  lVar7 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (param_1[0x11] == 0) {
    param_1[0x11] = 0;
    lVar7 = param_1[0x55];
  }
  else {
    FUN_006e2100(param_1[0x11],param_1 + 0x10);
    lVar7 = param_1[0x11];
    param_1[0x11] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = param_1[0x55];
  }
  if (lVar7 == 0) {
    param_1[0x55] = 0;
    lVar7 = param_1[0x33];
  }
  else {
    FUN_006e2100(lVar7,param_1 + 0x54);
    lVar7 = param_1[0x55];
    param_1[0x55] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = param_1[0x33];
  }
  if (lVar7 == 0) {
    param_1[0x33] = 0;
  }
  else {
    FUN_006e2100(lVar7,param_1 + 0x32);
    lVar7 = param_1[0x33];
    param_1[0x33] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  FUN_01005b00(param_1);
  FUN_01005c80(*(undefined8 *)PTR_DAT_0271e8d0);
  FUN_00d9fef0(*(undefined8 *)PTR_DAT_0271e770);
  lVar7 = *(long *)PTR_DAT_02717c58;
  puVar2 = *(undefined8 **)(lVar7 + 0x50);
  if (*(undefined8 **)(lVar7 + 0x58) != puVar2) {
    puVar17 = *(undefined8 **)(lVar7 + 0x58);
    do {
      puVar16 = puVar17 + -4;
      puVar15 = (undefined8 *)*puVar16;
      *puVar16 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        (**(code **)(*(long *)puVar17[-3] + 0x18))
                  ((long *)puVar17[-3],puVar15,puVar17[-2],puVar17[-1]);
      }
      puVar17 = puVar16;
    } while (puVar2 != puVar16);
  }
  *(undefined8 **)(lVar7 + 0x58) = puVar2;
  FUN_010060a0(*(undefined8 *)PTR_DAT_027234c8);
  if (param_1[0x106] != 0) {
    uVar8 = FUN_01018980();
    while ((uVar8 & 1) == 0) {
      nn::os::SleepThread(&LAB_00f42400);
      uVar8 = FUN_01018980(param_1[0x106]);
    }
    param_1[0x106] = 0;
  }
  FUN_01006440(param_1 + 0x108);
  if (param_1[0x103] != 0) {
    (**(code **)(*(long *)(param_1[0x103] + 0x48) + 0x18))();
    param_1[0x103] = 0;
  }
  if (param_1[0x102] != 0) {
    (**(code **)(*(long *)(param_1[0x102] + 0x48) + 0x18))();
    param_1[0x102] = 0;
  }
  if (param_1[0x101] != 0) {
    (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
    param_1[0x101] = 0;
  }
  if (param_1[0xfd] != 0) {
    (**(code **)(*(long *)(param_1[0xfd] + 0x48) + 0x18))();
    param_1[0xfd] = 0;
  }
  if (param_1[0xfc] != 0) {
    (**(code **)(*(long *)(param_1[0xfc] + 0x48) + 0x18))();
    param_1[0xfc] = 0;
  }
  if (param_1[0xfb] != 0) {
    (**(code **)(*(long *)(param_1[0xfb] + 0x48) + 0x18))();
    param_1[0xfb] = 0;
  }
  if (param_1[0xfa] != 0) {
    (**(code **)(*(long *)(param_1[0xfa] + 0x48) + 0x18))();
    param_1[0xfa] = 0;
  }
  if (param_1[0xf9] != 0) {
    (**(code **)(*(long *)(param_1[0xf9] + 0x48) + 0x18))();
    param_1[0xf9] = 0;
  }
  if (param_1[0xf8] != 0) {
    (**(code **)(*(long *)(param_1[0xf8] + 0x48) + 0x18))();
    param_1[0xf8] = 0;
  }
  if (param_1[0xf7] != 0) {
    (**(code **)(*(long *)(param_1[0xf7] + 0x48) + 0x18))();
    param_1[0xf7] = 0;
  }
  if (param_1[0xf6] != 0) {
    (**(code **)(*(long *)(param_1[0xf6] + 0x48) + 0x18))();
    param_1[0xf6] = 0;
  }
  plVar14 = (long *)param_1[0xf2];
  param_1[0xf2] = 0;
  if (plVar14 != (long *)0x0) {
    if (plVar14[1] != 0) {
      (**(code **)(*(long *)(plVar14[1] + 0x48) + 0x18))();
      plVar14[1] = 0;
    }
    if (*plVar14 != 0) {
      (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
      *plVar14 = 0;
    }
    (**(code **)(*(long *)param_1[0xf3] + 0x18))
              ((long *)param_1[0xf3],plVar14,param_1[0xf4],param_1[0xf5]);
  }
  puVar10 = PTR_DAT_02710ad8;
  param_1[0xd0] = (long)(PTR_DAT_02710ad8 + 0x10);
  if (param_1[0xd1] == 0) {
    param_1[0xd1] = 0;
    pcVar11 = (code *)param_1[0xe3];
  }
  else {
    FUN_006e2100(param_1[0xd1],param_1 + 0xd0);
    lVar7 = param_1[0xd1];
    param_1[0xd1] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar11 = (code *)param_1[0xe3];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0xe5] = 0;
    param_1[0xe4] = 0;
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    (*pcVar11)(param_1 + 0xe6);
  }
  pcVar11 = (code *)param_1[0xd3];
  if (pcVar11 != (code *)0x0) {
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    (*pcVar11)(param_1 + 0xd6);
  }
  if (param_1[0xd1] != 0) {
    (**(code **)(*(long *)(param_1[0xd1] + 0x48) + 0x18))();
    param_1[0xd1] = 0;
  }
  param_1[0xae] = (long)(puVar10 + 0x10);
  if (param_1[0xaf] == 0) {
    param_1[0xaf] = 0;
    pcVar11 = (code *)param_1[0xc1];
  }
  else {
    FUN_006e2100(param_1[0xaf],param_1 + 0xae);
    lVar7 = param_1[0xaf];
    param_1[0xaf] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar11 = (code *)param_1[0xc1];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    (*pcVar11)(param_1 + 0xc4);
  }
  pcVar11 = (code *)param_1[0xb1];
  if (pcVar11 != (code *)0x0) {
    param_1[0xb3] = 0;
    param_1[0xb2] = 0;
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    (*pcVar11)(param_1 + 0xb4);
  }
  if (param_1[0xaf] != 0) {
    (**(code **)(*(long *)(param_1[0xaf] + 0x48) + 0x18))();
    param_1[0xaf] = 0;
  }
  puVar10 = PTR_DAT_027234a0;
  param_1[0x85] = (long)(PTR_DAT_02723498 + 0x10);
  *(undefined8 *)puVar10 = 0;
  plVar14 = param_1 + 0x85;
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)param_1[0x86] + 0xb8))();
  }
  if (param_1[0x8c] != 0) {
    (**(code **)(*(long *)param_1[0x8a] + 0xb8))();
  }
  *plVar14 = (long)(PTR_DAT_02710528 + 0x10);
  lVar7 = FUN_007606c0();
  lVar9 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar7 + 0x10);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 4));
        while (*plVar3 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01005764;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01005764:
  puVar6 = PTR_DAT_02710530;
  lVar9 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar12 = lVar9 * 8;
  puVar1 = PTR_DAT_02710530 + lVar12;
  puVar10 = PTR_DAT_02710530;
  if (lVar12 != 0 && *(long **)PTR_DAT_02710530 != plVar14) {
    puVar13 = PTR_DAT_02710530;
    do {
      lVar12 = lVar12 + -8;
      if (lVar12 == 0) goto LAB_010057d8;
      puVar10 = puVar13 + 8;
      puVar2 = (undefined8 *)(puVar13 + 8);
      puVar13 = puVar10;
    } while ((long *)*puVar2 != plVar14);
  }
  if (puVar1 != puVar10) {
    __n = (long)puVar1 - (long)(puVar10 + 8);
    if (__n != 0) {
      memmove(puVar10,puVar10 + 8,__n);
      lVar9 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar9 + -1;
  }
LAB_010057d8:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  if (param_1[0x84] != 0) {
    (**(code **)(*(long *)(param_1[0x84] + 0x48) + 0x18))();
    param_1[0x84] = 0;
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(long *)(param_1[0x82] + 0x48) + 0x18))();
    param_1[0x82] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  plVar14 = (long *)param_1[0x7b];
  while (plVar14 != (long *)0x0) {
    lVar7 = *plVar14;
    FUN_01009300(plVar14 + 4);
    (**(code **)(*(long *)param_1[0x7c] + 0x18))((long *)param_1[0x7c],plVar14,0x250,0x10);
    plVar14 = (long *)lVar7;
  }
  lVar7 = param_1[0x76];
  param_1[0x76] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)param_1[0x78] + 0x18))
              ((long *)param_1[0x78],lVar7,param_1[0x77] << 3,0x10);
  }
  puVar10 = PTR_DAT_02710a48;
  param_1[0x54] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x55] == 0) {
    param_1[0x55] = 0;
    pcVar11 = (code *)param_1[0x67];
  }
  else {
    FUN_006e2100(param_1[0x55],param_1 + 0x54);
    lVar7 = param_1[0x55];
    param_1[0x55] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar11 = (code *)param_1[0x67];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    (*pcVar11)(param_1 + 0x6a);
  }
  pcVar11 = (code *)param_1[0x57];
  if (pcVar11 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar11)(param_1 + 0x5a);
  }
  if (param_1[0x55] != 0) {
    (**(code **)(*(long *)(param_1[0x55] + 0x48) + 0x18))();
    param_1[0x55] = 0;
  }
  param_1[0x32] = (long)(puVar10 + 0x10);
  if (param_1[0x33] == 0) {
    param_1[0x33] = 0;
    pcVar11 = (code *)param_1[0x45];
  }
  else {
    FUN_006e2100(param_1[0x33],param_1 + 0x32);
    lVar7 = param_1[0x33];
    param_1[0x33] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar11 = (code *)param_1[0x45];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar11)(param_1 + 0x48);
  }
  pcVar11 = (code *)param_1[0x35];
  if (pcVar11 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar11)(param_1 + 0x38);
  }
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)(param_1[0x33] + 0x48) + 0x18))();
    param_1[0x33] = 0;
  }
  param_1[0x10] = (long)(puVar10 + 0x10);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 0;
    pcVar11 = (code *)param_1[0x23];
  }
  else {
    FUN_006e2100(param_1[0x11],param_1 + 0x10);
    lVar7 = param_1[0x11];
    param_1[0x11] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar11 = (code *)param_1[0x23];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar11)(param_1 + 0x26);
  }
  pcVar11 = (code *)param_1[0x13];
  if (pcVar11 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar11)(param_1 + 0x16);
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


