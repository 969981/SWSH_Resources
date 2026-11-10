/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef7180; name: FUN_00ef7180
 */


void FUN_00ef7180(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined4 extraout_var;
  
  lVar6 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined1 *)(lVar6 + 0xc0) = 1;
  FUN_007101c0(param_1 + 0xc0);
  FUN_00e9f570(extraout_var,lVar6);
  if ((((*(char *)(param_1 + 0x98) == '\0') &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x298), lVar6 != 0)) &&
      (*(long *)(lVar6 + 0x80) != 0)) && (*(int *)(*(long *)(lVar6 + 0x80) + 0x54) != 0)) {
    lVar6 = *(long *)(lVar6 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar7 = *(int *)(lVar6 + 0x54);
      do {
        plVar8 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_006cbb10();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_00ef72b4;
          if (plVar8 == (long *)lVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              *(undefined1 *)(lVar6 + 0x10) = 1;
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
              lVar6 = *(long *)(param_1 + 0xa0);
              goto joined_r0x00ef7338;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00ef72b4:
    DAT_00000060 = 1;
    lVar6 = *(long *)(param_1 + 0xa0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0xa0);
  }
joined_r0x00ef7338:
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_00c781c0();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_00ef72c8;
          if (plVar8 == (long *)lVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            FUN_0069c580(lVar6 + -0x50,1);
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
            goto LAB_00ef72d4;
          }
          goto LAB_00ef72c8;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_00ef72c8;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00ef72c8:
  FUN_0069c580(0,1);
LAB_00ef72d4:
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


