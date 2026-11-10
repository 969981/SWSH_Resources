/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45460; name: FUN_00e45460
 */


void FUN_00e45460(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long local_48;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar5 = FUN_0156b190();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00e45514;
          if (plVar9 == (long *)lVar5) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            lVar5 = FUN_00e455e0(lVar7);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            goto joined_r0x00e4550c;
          }
          goto LAB_00e45514;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00e45514;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00e45514:
  lVar5 = FUN_00e455e0(0x50);
joined_r0x00e4550c:
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x10))(&local_48,param_1);
    lVar7 = local_48;
    local_48 = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar5 + 0x560);
    *(long *)(lVar5 + 0x560) = lVar7;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar7 = *param_2;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar5 = param_1[0xb2];
    param_1[0xb2] = lVar7;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  return;
}


