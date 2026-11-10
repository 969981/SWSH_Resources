/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cf9a0; name: FUN_006cf9a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cf9a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x60);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006cfa04;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006cfa04:
  uVar8 = *(ulong *)(param_1 + 0x70);
  if (uVar8 == 0) {
    plVar7 = (long *)0x0;
LAB_006cfac0:
    lVar6 = plVar7[3];
  }
  else {
    uVar9 = *(ulong *)(param_2 + 0x58);
    uVar11 = uVar8 - 1;
    if ((uVar11 & uVar8) == 0) {
      uVar10 = uVar11 & uVar9;
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
    }
    else {
      uVar10 = uVar9;
      if (uVar8 <= uVar9) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar9 / uVar8;
        }
        uVar10 = uVar9 - uVar10 * uVar8;
      }
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
    }
    if (puVar12 != (undefined8 *)0x0) {
      plVar7 = (long *)*puVar12;
      if (plVar7 != (long *)0x0) {
        if ((uVar11 & uVar8) == 0) {
          do {
            uVar14 = plVar7[1];
            if (uVar14 != uVar9 && (uVar14 & uVar11) != uVar10) goto LAB_006cfb00;
          } while (((uVar14 != uVar9) || (plVar7[2] != uVar9)) &&
                  (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0));
        }
        else {
          do {
            uVar11 = plVar7[1];
            if (uVar11 == uVar9) {
              if (plVar7[2] == uVar9) break;
            }
            else {
              if (uVar8 <= uVar11) {
                uVar14 = 0;
                if (uVar8 != 0) {
                  uVar14 = uVar11 / uVar8;
                }
                uVar11 = uVar11 - uVar14 * uVar8;
              }
              if (uVar11 != uVar10) goto LAB_006cfb00;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      goto LAB_006cfac0;
    }
LAB_006cfb00:
    plVar7 = (long *)0x0;
    lVar6 = _SUB_00000018;
  }
  if (lVar6 != param_2) goto LAB_006cfc0c;
  uVar11 = plVar7[1];
  uVar10 = uVar8 - 1;
  uVar9 = uVar10 & uVar8;
  if (uVar9 == 0) {
    uVar11 = uVar11 & uVar10;
  }
  else if (uVar8 <= uVar11) {
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar14 = uVar11 / uVar8;
    }
    uVar11 = uVar11 - uVar14 * uVar8;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x68) + uVar11 * 8);
  do {
    plVar13 = plVar5;
    plVar5 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar7);
  if (plVar13 == (long *)(param_1 + 0x90)) {
LAB_006cfb5c:
    if (*plVar7 != 0) {
      uVar14 = *(ulong *)(*plVar7 + 8);
      if (uVar9 == 0) {
        uVar14 = uVar14 & uVar10;
      }
      else if (uVar8 <= uVar14) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar14 / uVar8;
        }
        uVar14 = uVar14 - uVar4 * uVar8;
      }
      if (uVar14 == uVar11) goto LAB_006cfba8;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar11 * 8) = 0;
  }
  else {
    uVar14 = plVar13[1];
    if (uVar9 == 0) {
      uVar14 = uVar14 & uVar10;
    }
    else if (uVar8 <= uVar14) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar14 / uVar8;
      }
      uVar14 = uVar14 - uVar4 * uVar8;
    }
    if (uVar14 != uVar11) goto LAB_006cfb5c;
  }
LAB_006cfba8:
  if (*plVar7 != 0) {
    uVar14 = *(ulong *)(*plVar7 + 8);
    if (uVar9 == 0) {
      uVar14 = uVar14 & uVar10;
    }
    else if (uVar8 <= uVar14) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar14 / uVar8;
      }
      uVar14 = uVar14 - uVar9 * uVar8;
    }
    if (uVar14 != uVar11) {
      *(long **)(*(long *)(param_1 + 0x68) + uVar14 * 8) = plVar13;
    }
  }
  *plVar13 = *plVar7;
  *plVar7 = 0;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))(*(long **)(param_1 + 0x98),plVar7,0x20,8);
  }
LAB_006cfc0c:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


