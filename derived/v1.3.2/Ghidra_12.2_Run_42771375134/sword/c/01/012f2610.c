/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f2610; name: FUN_012f2610
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_012f2610(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long local_38;
  
  FUN_012f2100(&local_38);
  if (local_38 == 0) {
    return false;
  }
  lVar9 = *(long *)(local_38 + 0x60);
  if (lVar9 == 0) {
LAB_012f26b0:
    lVar5 = 0;
    cVar3 = DAT_00000068;
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar9 + 0x58);
          lVar5 = FUN_012f4940();
          while( true ) {
            if (plVar7 == (long *)0x0) goto LAB_012f26b0;
            if (plVar7 == (long *)lVar5) break;
            plVar7 = (long *)*plVar7;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar5 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar5 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            cVar3 = *(char *)(lVar5 + 0x68);
            goto joined_r0x012f27e0;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_012f26b0;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
      goto LAB_012f26b0;
    }
    lVar5 = 0;
    cVar3 = DAT_00000068;
  }
joined_r0x012f27e0:
  if (cVar3 != '\0') {
    bVar8 = true;
    goto joined_r0x012f2788;
  }
  lVar9 = *(long *)(local_38 + 0x60);
  if (lVar9 == 0) {
LAB_012f2764:
    lVar6 = 0;
    if (DAT_00000092 == '\0') goto LAB_012f2750;
LAB_012f276c:
    bVar4 = *(char *)(lVar6 + 0x90) != '\0';
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar9 + 0x58);
          lVar6 = FUN_012f4940();
          while( true ) {
            if (plVar7 == (long *)0x0) goto LAB_012f2744;
            if (plVar7 == (long *)lVar6) break;
            plVar7 = (long *)*plVar7;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar6 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            cVar3 = *(char *)(lVar6 + 0x92);
            goto joined_r0x012f27fc;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_012f2764;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
      goto LAB_012f2764;
    }
LAB_012f2744:
    lVar6 = 0;
    cVar3 = DAT_00000092;
joined_r0x012f27fc:
    if (cVar3 != '\0') goto LAB_012f276c;
LAB_012f2750:
    bVar4 = false;
    bVar8 = false;
    if (lVar6 == 0) goto joined_r0x012f2788;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  bVar8 = bVar4;
joined_r0x012f2788:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return bVar8;
}


