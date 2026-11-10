/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bced0; name: FUN_010bced0
 */


void FUN_010bced0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  long local_38;
  
  (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_38);
  if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
    piVar1 = (int *)(local_38 + 0x54);
    iVar7 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(local_38 + 0x58);
        lVar5 = FUN_00d8bd10();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_010bcf9c;
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
          lVar5 = *(long *)(local_38 + 0x60);
          if (lVar5 != 0) {
            uVar6 = FUN_01531f80(lVar5 + -0x50);
            (**(code **)(*(long *)(lVar5 + -8) + 0x18))((long *)(lVar5 + -8));
            goto joined_r0x010bcf94;
          }
          goto LAB_010bcf9c;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_010bcf9c;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_010bcf9c:
  uVar6 = FUN_01531f80(0);
joined_r0x010bcf94:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_010bd780();
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0x11;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 6;
      *(undefined4 *)(param_1 + 0xec) = 0;
      FUN_010bc6f0(param_1,0,1);
    }
  }
  return;
}


