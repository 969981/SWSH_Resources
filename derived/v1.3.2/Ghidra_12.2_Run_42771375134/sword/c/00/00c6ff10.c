/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6ff10; name: FUN_00c6ff10
 */


void FUN_00c6ff10(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long local_48;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar6 = *(long *)(param_1 + 0x118);
    if (*(long *)(lVar6 + 0x328) != *(long *)(lVar6 + 800)) {
      lVar9 = *param_2;
      if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
        lVar8 = 0;
      }
      else {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar10 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            plVar7 = *(long **)(lVar9 + 0x58);
            plVar5 = (long *)FUN_006f10c0();
            lVar8 = 0;
            if (plVar7 == (long *)0x0) goto LAB_00c6ffc0;
            while (plVar7 != plVar5) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) {
                lVar8 = 0;
                goto LAB_00c6ffc0;
              }
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
              lVar8 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
              }
              goto LAB_00c6ffc0;
            }
            lVar8 = 0;
            iVar10 = iVar2;
            if (iVar2 == 0) goto LAB_00c6ffc0;
          }
          ClearExclusiveLocal();
          lVar8 = 0;
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00c6ffc0:
      local_48 = 8;
      FUN_00727220(lVar6,lVar8,&local_48);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 0x170);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 0x180);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 0x188);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar5 = *(long **)(param_1 + 400);
    if (plVar5 != (long *)0x0) {
      local_48 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x80) = 1;
    lVar6 = *param_2;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar6;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
  }
  return;
}


