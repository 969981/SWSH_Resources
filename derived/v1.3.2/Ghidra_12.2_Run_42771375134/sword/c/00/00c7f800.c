/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7f800; name: FUN_00c7f800
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c7f800(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  *param_1 = 0;
  local_38 = *param_3;
  if (local_38 == 0) {
    FUN_00c7c720(&local_28,param_2,&local_38,0);
    pbVar5 = PTR_DAT_0271c218;
    puVar10 = PTR_DAT_0271c220;
    lVar9 = local_28;
  }
  else {
    plVar12 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00c7c720(&local_28,param_2,&local_38,0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_38 = 0;
    pbVar5 = PTR_DAT_0271c218;
    puVar10 = PTR_DAT_0271c220;
    lVar9 = local_28;
  }
  PTR_DAT_0271c218 = pbVar5;
  PTR_DAT_0271c220 = puVar10;
  if (lVar9 != 0) {
    local_28 = lVar9;
    if (*(int *)(lVar9 + 0x54) != 0) {
      lVar6 = lVar9;
      iVar7 = _DAT_00000060;
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar11 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            plVar12 = *(long **)(lVar9 + 0x58);
            if (((*pbVar5 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(pbVar5), puVar10 = PTR_DAT_0271c220, iVar7 != 0)) {
              uVar8 = FUN_00c72b60();
              *(undefined8 *)PTR_DAT_0271c220 = uVar8;
              __cxa_guard_release(pbVar5);
              puVar10 = PTR_DAT_0271c220;
            }
            while( true ) {
              lVar6 = local_28;
              iVar7 = _DAT_00000060;
              if (plVar12 == (long *)0x0) goto joined_r0x00c7f990;
              if (plVar12 == (long *)puVar10) break;
              plVar12 = (long *)*plVar12;
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar11) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar7 = _DAT_00000060;
            if (cVar3 == '\0') {
              lVar9 = *(long *)(lVar9 + 0x60);
              if (lVar9 != 0) {
                iVar7 = *(int *)(lVar9 + 0x10);
                (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
                lVar6 = local_28;
              }
              goto joined_r0x00c7f990;
            }
            iVar11 = iVar2;
            if (iVar2 == 0) goto joined_r0x00c7f990;
          }
          ClearExclusiveLocal();
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
joined_r0x00c7f990:
      local_28 = lVar6;
      if (iVar7 == 0x12) {
        if (lVar6 == 0) {
          local_48 = 0;
          FUN_00c89360(&local_40,0);
          lVar9 = *param_1;
        }
        else {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          FUN_00c810d0(&local_48,lVar6);
          FUN_00c89360(&local_40,local_48);
          lVar9 = *param_1;
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
          *param_1 = 0;
        }
        lVar9 = local_40;
        local_40 = 0;
        *param_1 = lVar9;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


