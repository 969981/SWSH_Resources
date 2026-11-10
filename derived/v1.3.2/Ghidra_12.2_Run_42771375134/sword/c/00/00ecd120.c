/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd120; name: FUN_00ecd120
 */


void FUN_00ecd120(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar9 = (long)(int)*(uint *)(param_2 + 0x87);
  if (*(uint *)(param_2 + 0x87) < 10) {
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    lVar10 = local_48;
    pcVar8 = (char *)(param_1 + lVar9 * 0x70 + 0xb4);
    if (*pcVar8 == '\0') {
      if (local_48 == 0) {
        return;
      }
      if ((*(int *)(local_48 + 0x54) != 0) &&
         (plVar5 = (long *)(param_1 + lVar9 * 0x70 + 0x58), *plVar5 != 0)) {
        plVar6 = (long *)(param_1 + lVar9 * 0x70 + 0x50);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        lVar9 = *plVar6;
        *plVar6 = lVar10;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
          lVar10 = *plVar6;
        }
        lVar9 = *plVar5;
        if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
          lVar7 = 0;
        }
        else {
          piVar1 = (int *)(lVar10 + 0x54);
          iVar11 = *(int *)(lVar10 + 0x54);
          while( true ) {
            plVar6 = *(long **)(lVar10 + 0x58);
            plVar5 = (long *)FUN_00ecd7b0();
            lVar7 = 0;
            if (plVar6 == (long *)0x0) break;
            while (plVar6 != plVar5) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) {
                lVar7 = 0;
                goto LAB_00ecd254;
              }
            }
            iVar2 = *piVar1;
            if (iVar2 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar7 = 0;
                if (*(long *)(lVar10 + 0x60) != 0) {
                  lVar7 = *(long *)(lVar10 + 0x60) + -0x50;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            lVar7 = 0;
            iVar11 = iVar2;
            if (iVar2 == 0) break;
          }
        }
LAB_00ecd254:
        local_68 = *(undefined8 *)(lVar7 + 0x3f8);
        local_60 = *(undefined8 *)(lVar7 + 0x400);
        local_58 = *(undefined8 *)(lVar7 + 0x408);
        local_50 = *(long *)(lVar7 + 0x410);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
        }
        FUN_00895fd0(lVar9,&local_68);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        *pcVar8 = '\x01';
      }
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


