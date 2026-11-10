/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7ff50; name: FUN_00c7ff50
 */


void FUN_00c7ff50(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long local_40;
  long local_38;
  long local_28;
  
  *param_1 = 0;
  local_38 = *param_3;
  if (local_38 == 0) {
    FUN_00c7c720(&local_28,param_2,&local_38,0);
    pbVar4 = PTR_DAT_0271c218;
    puVar8 = PTR_DAT_0271c220;
    lVar5 = local_28;
  }
  else {
    plVar10 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_00c7c720(&local_28,param_2,&local_38,0);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    local_38 = 0;
    pbVar4 = PTR_DAT_0271c218;
    puVar8 = PTR_DAT_0271c220;
    lVar5 = local_28;
  }
  PTR_DAT_0271c218 = pbVar4;
  PTR_DAT_0271c220 = puVar8;
  if (lVar5 != 0) {
    local_28 = lVar5;
    if (*(int *)(lVar5 + 0x54) != 0) {
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x54) == 0)) {
LAB_00c800b4:
        plVar10 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar5 + 0x54);
        iVar9 = *(int *)(lVar5 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar5 + 0x58);
            if ((*pbVar4 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(pbVar4);
              puVar8 = PTR_DAT_0271c220;
              if (iVar6 != 0) {
                uVar7 = FUN_00c72b60();
                *(undefined8 *)PTR_DAT_0271c220 = uVar7;
                __cxa_guard_release(pbVar4);
                puVar8 = PTR_DAT_0271c220;
              }
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00c800b4;
              if (plVar10 == (long *)puVar8) break;
              plVar10 = (long *)*plVar10;
            }
            iVar6 = *piVar1;
            if (iVar6 != iVar9) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              plVar10 = (long *)0x0;
              if (*(long *)(lVar5 + 0x60) != 0) {
                plVar10 = (long *)(*(long *)(lVar5 + 0x60) + -0x50);
              }
              goto LAB_00c800b8;
            }
            plVar10 = (long *)0x0;
            iVar9 = iVar6;
            if (iVar6 == 0) goto LAB_00c800b8;
          }
          ClearExclusiveLocal();
          plVar10 = (long *)0x0;
          iVar9 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00c800b8:
      (**(code **)(*plVar10 + 0xa0))(&local_40,plVar10);
      if (*param_1 != 0) {
        (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
        *param_1 = 0;
      }
      lVar5 = local_40;
      local_40 = 0;
      *param_1 = lVar5;
      if (plVar10 != (long *)0x0) {
        (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


