/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3eba0; name: FUN_00f3eba0
 */


void FUN_00f3eba0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  plVar7 = param_1;
  do {
    lVar8 = *plVar7;
    if ((*(long *)(lVar8 + 0x360) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar8 + 0x360) + 0x80), lVar9 == 0)) {
      *(undefined1 *)(lVar8 + 0x568) = 0;
    }
    else {
      plVar6 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      piVar1 = (int *)(lVar9 + 0x54);
      if (*piVar1 != 0) {
        iVar2 = *piVar1;
        while (iVar10 = iVar2, iVar2 != 0) {
          while( true ) {
            plVar11 = *(long **)(lVar9 + 0x58);
            lVar5 = FUN_006cb2c0();
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00f3ec80;
              if (plVar11 == (long *)lVar5) break;
              plVar11 = (long *)*plVar11;
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar10) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar9 = *(long *)(lVar9 + 0x60);
              if (lVar9 == 0) goto LAB_00f3ec80;
              *(undefined1 *)(lVar9 + 0x10) = 0;
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
              goto LAB_00f3ec84;
            }
            iVar10 = iVar2;
            if (iVar2 == 0) goto LAB_00f3ec80;
          }
          ClearExclusiveLocal();
        }
LAB_00f3ec80:
        DAT_00000060 = 0;
      }
LAB_00f3ec84:
      *(undefined1 *)(lVar8 + 0x568) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    *(undefined1 *)(*plVar7 + 0x218) = 0;
    plVar6 = plVar7 + 1;
    *(undefined1 *)(*plVar7 + 0x590) = 0;
    plVar7 = plVar6;
  } while (plVar6 != param_1 + 10);
  lVar8 = param_1[0x14];
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((*(long *)(lVar8 + 0x360) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar8 + 0x360) + 0x80), lVar9 == 0)) {
    *(undefined1 *)(lVar8 + 0x568) = 0;
  }
  else {
    plVar7 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    piVar1 = (int *)(lVar9 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar10 = iVar2, iVar2 != 0) {
        while( true ) {
          plVar6 = *(long **)(lVar9 + 0x58);
          lVar5 = FUN_006cb2c0();
          while( true ) {
            if (plVar6 == (long *)0x0) goto LAB_00f3ed78;
            if (plVar6 == (long *)lVar5) break;
            plVar6 = (long *)*plVar6;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 == 0) goto LAB_00f3ed78;
            *(undefined1 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            goto LAB_00f3ed80;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00f3ed78;
        }
        ClearExclusiveLocal();
      }
LAB_00f3ed78:
      DAT_00000060 = 0;
    }
LAB_00f3ed80:
    *(undefined1 *)(lVar8 + 0x568) = 0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  *(undefined1 *)(param_1[0x14] + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


