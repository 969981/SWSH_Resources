/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c7490; name: FUN_006c7490
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006c7490(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_02715288;
  puVar5 = PTR_DAT_02715280;
  lVar10 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  if (lVar10 != 0) {
    plVar13 = *(long **)(*(long *)(param_1 + 0xe8) + 0x40);
    plVar2 = plVar13 + lVar10;
    do {
      while ((*plVar13 != 0 && (*(int *)(*plVar13 + 0x54) != 0))) {
        lVar10 = *plVar13;
        if (lVar10 == 0) {
LAB_006c74d0:
          lVar9 = 0;
          if (DAT_00000218 == '\0') goto LAB_006c75ec;
LAB_006c74d8:
          *(undefined4 *)(lVar9 + 0x21c) = 0;
        }
        else {
          if (*(int *)(lVar10 + 0x54) != 0) {
            piVar1 = (int *)(lVar10 + 0x54);
            iVar11 = *(int *)(lVar10 + 0x54);
            do {
              while( true ) {
                plVar12 = *(long **)(lVar10 + 0x58);
                if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                  uVar8 = FUN_01590a70();
                  *(undefined8 *)puVar6 = uVar8;
                  __cxa_guard_release(puVar5);
                }
                while( true ) {
                  if (plVar12 == (long *)0x0) goto LAB_006c75e0;
                  if (plVar12 == (long *)puVar6) break;
                  plVar12 = (long *)*plVar12;
                }
                iVar7 = *piVar1;
                if (iVar7 == iVar11) break;
                ClearExclusiveLocal();
                iVar11 = iVar7;
                if (iVar7 == 0) goto LAB_006c74d0;
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar9 = 0;
                if (*(long *)(lVar10 + 0x60) != 0) {
                  lVar9 = *(long *)(lVar10 + 0x60) + -0x50;
                }
                cVar3 = *(char *)(lVar9 + 0x218);
                goto joined_r0x006c750c;
              }
              iVar11 = iVar7;
            } while (iVar7 != 0);
            goto LAB_006c74d0;
          }
LAB_006c75e0:
          lVar9 = 0;
          cVar3 = DAT_00000218;
joined_r0x006c750c:
          if (cVar3 != '\0') goto LAB_006c74d8;
LAB_006c75ec:
          if (lVar9 == 0) break;
        }
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar2) {
          return;
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  return;
}


