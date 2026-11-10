/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fac930; name: FUN_00fac930
 */


void FUN_00fac930(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *local_70;
  long local_68;
  long local_58;
  
  plVar6 = (long *)FUN_00fad5f0(&local_58);
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))();
  }
  (**(code **)(*plVar6 + 0x10))(&local_58,plVar6);
  lVar5 = local_58;
  *param_1 = local_58;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))((long *)(local_58 + 0x48));
    if (*(int *)(local_58 + 0x54) != 0) {
      piVar1 = (int *)(local_58 + 0x54);
      iVar10 = *(int *)(local_58 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(local_58 + 0x58);
          plVar7 = (long *)FUN_01455eb0();
          lVar9 = 0;
          if (plVar8 == (long *)0x0) goto LAB_00faca24;
          while (plVar8 != plVar7) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              lVar9 = 0;
              goto LAB_00faca24;
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
            lVar9 = 0;
            if (*(long *)(local_58 + 0x60) != 0) {
              lVar9 = *(long *)(local_58 + 0x60) + -0x50;
            }
            goto LAB_00faca24;
          }
          lVar9 = 0;
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00faca24;
        }
        ClearExclusiveLocal();
        lVar9 = 0;
        iVar10 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00faca24;
    }
  }
  lVar9 = 0;
LAB_00faca24:
  (**(code **)(*param_2 + 0x10))(&local_68,param_2);
  local_58 = local_68;
  local_68 = 0;
  FUN_0102eea0(lVar9,param_3,&local_58,param_4,param_5);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  local_70 = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))();
  }
  FUN_0102e5c0(param_2,&local_70);
  if (local_70 != (long *)0x0) {
    (**(code **)(local_70[9] + 0x18))();
    local_70 = (long *)0x0;
  }
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
  }
  return;
}


