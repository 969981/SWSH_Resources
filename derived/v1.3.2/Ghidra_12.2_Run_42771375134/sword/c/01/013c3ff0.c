/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c3ff0; name: FUN_013c3ff0
 */


void FUN_013c3ff0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3d0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c4));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_013c4058;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_013c4058:
  lVar6 = *(long *)(param_1 + 0x3f8);
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (lVar6 != 0) {
    FUN_01331b00(lVar6 + 0x10);
    (**(code **)(**(long **)(param_1 + 0x400) + 0x18))
              (*(long **)(param_1 + 0x400),lVar6,*(undefined8 *)(param_1 + 0x408),
               *(undefined8 *)(param_1 + 0x410));
  }
  lVar6 = *(long *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (lVar6 != 0) {
    lVar10 = 0;
    puVar2 = PTR_DAT_027164e0 + 0x10;
    do {
      lVar3 = lVar6 + lVar10;
      *(undefined **)(lVar3 + 0x1660) = puVar2;
      lVar8 = lVar6 + 0x1760 + lVar10;
      if (*(long *)(lVar8 + -0xf8) == 0) {
        *(undefined8 *)(lVar8 + -0xf8) = 0;
        pcVar9 = *(code **)(lVar3 + 0x16f8);
      }
      else {
        FUN_006e2100(*(long *)(lVar8 + -0xf8),lVar6 + 0x1660 + lVar10);
        lVar7 = *(long *)(lVar8 + -0xf8);
        *(undefined8 *)(lVar8 + -0xf8) = 0;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        pcVar9 = *(code **)(lVar3 + 0x16f8);
      }
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x1708) = 0;
        *(undefined8 *)(lVar3 + 0x1700) = 0;
        *(undefined8 *)(lVar3 + 0x16f8) = 0;
        *(undefined8 *)(lVar3 + 0x16f0) = 0;
        (*pcVar9)(lVar8 + -0x50);
      }
      pcVar9 = *(code **)(lVar3 + 0x1678);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x1688) = 0;
        *(undefined8 *)(lVar3 + 0x1680) = 0;
        *(undefined8 *)(lVar3 + 0x1678) = 0;
        *(undefined8 *)(lVar3 + 0x1670) = 0;
        (*pcVar9)(lVar8 + -0xd0);
      }
      if (*(long *)(lVar8 + -0xf8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar8 + -0xf8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar8 + -0xf8) = 0;
      }
      lVar10 = lVar10 + -0x110;
    } while (lVar10 != -0x1760);
    (**(code **)(**(long **)(param_1 + 0x460) + 0x18))
              (*(long **)(param_1 + 0x460),lVar6,*(undefined8 *)(param_1 + 0x468),
               *(undefined8 *)(param_1 + 0x470));
  }
  lVar6 = *(long *)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (lVar6 != 0) {
    puVar2 = PTR_DAT_02715af8 + 0x10;
    lVar10 = 0;
    do {
      lVar3 = lVar6 + lVar10;
      *(undefined **)(lVar3 + 0x890) = puVar2;
      if (*(long *)(lVar3 + 0x898) == 0) {
        *(undefined8 *)(lVar3 + 0x898) = 0;
        pcVar9 = *(code **)(lVar3 + 0x928);
      }
      else {
        FUN_006e2100(*(long *)(lVar3 + 0x898),lVar3 + 0x890);
        lVar8 = *(long *)(lVar3 + 0x898);
        *(undefined8 *)(lVar3 + 0x898) = 0;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        pcVar9 = *(code **)(lVar3 + 0x928);
      }
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x938) = 0;
        *(undefined8 *)(lVar3 + 0x930) = 0;
        *(undefined8 *)(lVar3 + 0x928) = 0;
        *(undefined8 *)(lVar3 + 0x920) = 0;
        (*pcVar9)(lVar3 + 0x940);
      }
      pcVar9 = *(code **)(lVar3 + 0x8a8);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x8b8) = 0;
        *(undefined8 *)(lVar3 + 0x8b0) = 0;
        *(undefined8 *)(lVar3 + 0x8a8) = 0;
        *(undefined8 *)(lVar3 + 0x8a0) = 0;
        (*pcVar9)(lVar3 + 0x8c0);
      }
      if (*(long *)(lVar3 + 0x898) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0x898) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 0x898) = 0;
      }
      bVar5 = lVar10 != -0x880;
      lVar10 = lVar10 + -0x110;
    } while (bVar5);
    (**(code **)(**(long **)(param_1 + 0x4a0) + 0x18))
              (*(long **)(param_1 + 0x4a0),lVar6,*(undefined8 *)(param_1 + 0x4a8),
               *(undefined8 *)(param_1 + 0x4b0));
  }
  lVar6 = *(long *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (lVar6 != 0) {
    puVar2 = PTR_DAT_02715090 + 0x10;
    lVar10 = 0;
    do {
      lVar3 = lVar6 + lVar10;
      *(undefined **)(lVar3 + 0x890) = puVar2;
      if (*(long *)(lVar3 + 0x898) == 0) {
        *(undefined8 *)(lVar3 + 0x898) = 0;
        pcVar9 = *(code **)(lVar3 + 0x928);
      }
      else {
        FUN_006e2100(*(long *)(lVar3 + 0x898),lVar3 + 0x890);
        lVar8 = *(long *)(lVar3 + 0x898);
        *(undefined8 *)(lVar3 + 0x898) = 0;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        pcVar9 = *(code **)(lVar3 + 0x928);
      }
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x938) = 0;
        *(undefined8 *)(lVar3 + 0x930) = 0;
        *(undefined8 *)(lVar3 + 0x928) = 0;
        *(undefined8 *)(lVar3 + 0x920) = 0;
        (*pcVar9)(lVar3 + 0x940);
      }
      pcVar9 = *(code **)(lVar3 + 0x8a8);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x8b8) = 0;
        *(undefined8 *)(lVar3 + 0x8b0) = 0;
        *(undefined8 *)(lVar3 + 0x8a8) = 0;
        *(undefined8 *)(lVar3 + 0x8a0) = 0;
        (*pcVar9)(lVar3 + 0x8c0);
      }
      if (*(long *)(lVar3 + 0x898) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0x898) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 0x898) = 0;
      }
      bVar5 = lVar10 != -0x880;
      lVar10 = lVar10 + -0x110;
    } while (bVar5);
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x18))
              (*(long **)(param_1 + 0x4c0),lVar6,*(undefined8 *)(param_1 + 0x4c8),
               *(undefined8 *)(param_1 + 0x4d0));
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c4));
  return;
}


