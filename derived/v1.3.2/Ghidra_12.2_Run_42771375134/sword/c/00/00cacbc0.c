/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cacbc0; name: FUN_00cacbc0
 */


void FUN_00cacbc0(undefined8 param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long local_70;
  long local_68;
  
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        plVar14 = (long *)(param_2 + uVar12 * 0x10);
        plVar13 = plVar14 + 1;
        if ((int)*plVar13 == 1) break;
LAB_00cacdb0:
        uVar12 = uVar12 + 1;
        if (uVar12 == param_3) {
          return;
        }
      }
      lVar11 = *plVar14;
      if (lVar11 != 0) {
        plVar8 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        piVar1 = (int *)(lVar11 + 0x54);
        if (*piVar1 == 0) {
LAB_00cacd9c:
          *(int *)plVar13 = 0;
        }
        else {
          local_68 = lVar11;
          uVar5 = (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar8);
          uVar6 = FUN_00cb04c0(uVar5,&local_68);
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar8);
          local_68 = 0;
          if ((uVar6 & 1) != 0) {
            lVar7 = *plVar14;
            *plVar14 = 0;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            }
            local_70 = lVar11;
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar8);
            iVar2 = *(int *)(lVar11 + 0x54);
            while (iVar9 = iVar2, iVar2 != 0) {
              while( true ) {
                plVar14 = *(long **)(lVar11 + 0x58);
                lVar7 = FUN_00c72e20();
                while( true ) {
                  if (plVar14 == (long *)0x0) goto LAB_00cacd20;
                  if (plVar14 == (long *)lVar7) break;
                  plVar14 = (long *)*plVar14;
                }
                iVar2 = *piVar1;
                if (iVar2 != iVar9) break;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar7 = 0;
                  if (*(long *)(lVar11 + 0x60) != 0) {
                    lVar7 = *(long *)(lVar11 + 0x60) + -0x50;
                  }
                  goto LAB_00cacd24;
                }
                iVar9 = iVar2;
                if (iVar2 == 0) goto LAB_00cacd20;
              }
              ClearExclusiveLocal();
            }
LAB_00cacd20:
            lVar7 = 0;
LAB_00cacd24:
            FUN_00ca9ed0(param_1,&local_70,*(undefined4 *)(lVar7 + 0x60));
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
            }
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar8);
            local_70 = 0;
            puVar10 = *(undefined8 **)(lVar11 + 0x60);
            if (puVar10 != (undefined8 *)0x0) {
              plVar14 = (long *)(**(code **)*puVar10)(puVar10);
              lVar11 = FUN_00c72e20();
              for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
                if (plVar14 == (long *)lVar11) {
                  puVar10 = puVar10 + -10;
                  goto LAB_00cacd94;
                }
              }
            }
            puVar10 = (undefined8 *)0x0;
LAB_00cacd94:
            FUN_00ca6970(puVar10,param_1);
            goto LAB_00cacd9c;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8);
        goto LAB_00cacdb0;
      }
      *(int *)plVar13 = 0;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_3);
  }
  return;
}


