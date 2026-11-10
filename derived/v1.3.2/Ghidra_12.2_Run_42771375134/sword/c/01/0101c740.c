/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101c740; name: FUN_0101c740
 */


/* WARNING: Removing unreachable block (ram,0x0101ca90) */

void FUN_0101c740(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [8];
  
  FUN_00773ce0();
  puVar5 = PTR_DAT_02723658;
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  plVar2 = param_1 + 0x25;
  param_1[9] = (long)(puVar5 + 0x78);
  param_1[10] = (long)(puVar5 + 0xb8);
  lVar6 = FUN_0101d0e0(auStack_58,param_3);
  FUN_006d1120();
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
    *plVar2 = 0;
  }
  *plVar2 = lVar6;
  lVar6 = FUN_0101dc30(auStack_48,param_3);
  FUN_006d1120();
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = lVar6;
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101c864;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101c864:
  lVar7 = *(long *)(*plVar2 + 0x298);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar10 = lVar7;
  if (*(long *)(lVar7 + 0x128) != 0) {
    lVar10 = *(long *)(lVar7 + 0x128);
  }
  uVar8 = FUN_0101cff0(lVar10 + 0x50);
  if ((uVar8 & 1) == 0) {
    FUN_006d1640(lVar6,0,0);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_006d1640(lVar6,lVar10,0);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  lVar7 = *(long *)(*(long *)(param_1[0x25] + 0x290) + 0x120);
  lVar6 = *(long *)(param_1[0x25] + 0x290);
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  uVar8 = FUN_0101cff0(lVar6 + 0x50);
  if ((uVar8 & 1) != 0) {
    pcVar9 = *(code **)(lVar6 + 0x2a8);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x2b0) = 0;
      *(undefined8 *)(lVar6 + 0x2b8) = 0;
      *(undefined8 *)(lVar6 + 0x2a0) = 0;
      *(undefined8 *)(lVar6 + 0x2a8) = 0;
      (*pcVar9)(lVar6 + 0x2c0);
    }
    *(long **)(lVar6 + 0x2c0) = param_1;
    *(undefined1 **)(lVar6 + 0x2a0) = &LAB_0101df00;
    *(undefined1 **)(lVar6 + 0x2a8) = &LAB_0101df80;
    *(undefined1 **)(lVar6 + 0x2b0) = &LAB_0101df90;
    *(undefined1 **)(lVar6 + 0x2b8) = &LAB_0101dfa0;
  }
  lVar7 = *(long *)(*(long *)(*plVar2 + 0x298) + 0x120);
  lVar6 = *(long *)(*plVar2 + 0x298);
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  uVar8 = FUN_0101cff0(lVar6 + 0x50);
  if ((uVar8 & 1) != 0) {
    pcVar9 = *(code **)(lVar6 + 0x2a8);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x2b0) = 0;
      *(undefined8 *)(lVar6 + 0x2b8) = 0;
      *(undefined8 *)(lVar6 + 0x2a0) = 0;
      *(undefined8 *)(lVar6 + 0x2a8) = 0;
      (*pcVar9)(lVar6 + 0x2c0);
    }
    *(long **)(lVar6 + 0x2c0) = param_1;
    *(undefined1 **)(lVar6 + 0x2a0) = &LAB_0101dfb0;
    *(undefined1 **)(lVar6 + 0x2a8) = &LAB_0101e020;
    *(undefined1 **)(lVar6 + 0x2b0) = &LAB_0101e030;
    *(undefined1 **)(lVar6 + 0x2b8) = &LAB_0101e040;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_027155f8 + 0x50);
  do {
    lVar7 = lVar6;
    lVar6 = lVar7;
    if (*(long *)(lVar7 + 0x120) != 0) {
      lVar6 = *(long *)(lVar7 + 0x120);
    }
  } while (lVar6 != lVar7);
  if ((*(byte *)(lVar7 + 0x130) >> 6 & 1) != 0) {
    plVar2 = (long *)(lVar7 + 0x1e8);
    if (((*(byte *)(lVar7 + 0x1f0) & 1) == 0) ||
       (lVar10 = *plVar2, lVar6 = nn::os::GetCurrentThread(), lVar6 != lVar10)) {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1dc));
            while (*plVar2 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0101cab0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0101cab0:
      FUN_0101e050(lVar7 + 0x168);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1dc));
    }
    else {
      FUN_0101e050(lVar7 + 0x1a0);
    }
  }
  return;
}


