/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e09710; name: FUN_00e09710
 */


undefined8 FUN_00e09710(long param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(*(long *)(param_1 + 0x68) + 0x170) != '\0')) {
    lVar1 = param_1 + 0x170;
    FUN_006c6290(lVar1,*(undefined8 *)(param_1 + 0x58),1,1);
    plVar2 = (long *)(param_1 + 0x288);
    uVar7 = FUN_006c7650(lVar1,plVar2);
    if (((uVar7 & 1) != 0) && (*plVar2 != 0)) {
      puVar8 = *(undefined8 **)(*plVar2 + 0x60);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
      plVar9 = (long *)(**(code **)*puVar8)();
      plVar10 = (long *)FUN_006cb2c0();
      plVar11 = plVar10;
      if (plVar9 != (long *)0x0) {
        while (plVar9 != plVar10) {
          plVar9 = (long *)*plVar9;
          plVar11 = (long *)0x0;
          if (plVar9 == (long *)0x0) {
            return 0;
          }
        }
        lVar12 = *(long *)(param_1 + 0x68);
        lVar14 = *(long *)(param_1 + 0x288);
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
          lVar13 = 0;
        }
        else {
          piVar3 = (int *)(lVar14 + 0x54);
          iVar15 = *(int *)(lVar14 + 0x54);
          while( true ) {
            plVar9 = *(long **)(lVar14 + 0x58);
            plVar11 = (long *)FUN_006cb2c0(plVar11);
            lVar13 = 0;
            if (plVar9 == (long *)0x0) break;
            while (plVar9 != plVar11) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) {
                lVar13 = 0;
                goto LAB_00e09840;
              }
            }
            iVar4 = *piVar3;
            if (iVar4 == iVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = iVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar13 = 0;
                if (*(long *)(lVar14 + 0x60) != 0) {
                  lVar13 = *(long *)(lVar14 + 0x60) + -0x50;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            lVar13 = 0;
            iVar15 = iVar4;
            if (iVar4 == 0) break;
          }
        }
LAB_00e09840:
        local_60 = 0;
        uStack_58 = 0;
        FUN_006cb4e0(lVar13,&local_60,lVar12 + 0x1b0);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        FUN_006c7810(lVar1,plVar2);
        *(undefined1 *)(param_1 + 0x291) = 1;
        return 1;
      }
    }
  }
  return 0;
}


