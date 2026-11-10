/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caaca0; name: FUN_00caaca0
 */


void FUN_00caaca0(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long local_68;
  
  if (param_4 != 0) {
    uVar15 = 0;
    do {
      plVar2 = (long *)(param_3 + uVar15 * 0x10);
      lVar16 = *plVar2;
      if (lVar16 != 0) {
        plVar12 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        piVar1 = (int *)(lVar16 + 0x54);
        if (*piVar1 != 0) {
          lVar3 = param_2[1];
          for (lVar9 = *param_2; lVar9 != lVar3; lVar9 = lVar9 + 0x60) {
            if (((*(uint *)(lVar9 + 8) & 0xfffffffe) == 4) && (*(char *)(lVar9 + 0x58) != '\0')) {
              puVar13 = *(undefined8 **)(lVar16 + 0x60);
              if (puVar13 != (undefined8 *)0x0) {
                plVar10 = (long *)(**(code **)*puVar13)(puVar13);
                lVar7 = FUN_00c72e20();
                for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                  if (plVar10 == (long *)lVar7) {
                    puVar13 = puVar13 + -10;
                    goto LAB_00caad38;
                  }
                }
              }
              puVar13 = (undefined8 *)0x0;
LAB_00caad38:
              uVar8 = FUN_00ca6180(puVar13,param_1,lVar9 + 0x10,lVar9 + 0x50);
              if ((uVar8 & 1) != 0) {
                *(undefined1 *)(lVar9 + 0x58) = 0;
                goto LAB_00caae84;
              }
            }
          }
          lVar9 = *plVar2;
          *plVar2 = 0;
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
          }
          local_68 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(plVar12);
          iVar4 = *(int *)(lVar16 + 0x54);
          while (iVar11 = iVar4, iVar4 != 0) {
            while( true ) {
              plVar14 = *(long **)(lVar16 + 0x58);
              plVar10 = (long *)FUN_00c72e20();
              lVar9 = 0;
              if (plVar14 == (long *)0x0) goto LAB_00caae44;
              while (plVar14 != plVar10) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) {
                  lVar9 = 0;
                  goto LAB_00caae44;
                }
              }
              iVar4 = *piVar1;
              if (iVar4 != iVar11) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar9 = 0;
                if (*(long *)(lVar16 + 0x60) != 0) {
                  lVar9 = *(long *)(lVar16 + 0x60) + -0x50;
                }
                goto LAB_00caae44;
              }
              iVar11 = iVar4;
              if (iVar4 == 0) goto LAB_00caae40;
            }
            ClearExclusiveLocal();
          }
LAB_00caae40:
          lVar9 = 0;
LAB_00caae44:
          FUN_00ca9ed0(param_1,&local_68,*(undefined4 *)(lVar9 + 0x60));
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          }
          (**(code **)(*plVar12 + 0x18))(plVar12);
          local_68 = 0;
          *(undefined4 *)(plVar2 + 1) = 0;
        }
LAB_00caae84:
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_4);
  }
  return;
}


