/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01321fd0; name: FUN_01321fd0
 */


undefined8 FUN_01321fd0(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long local_38;
  long local_30;
  long local_28;
  
  lVar7 = *(long *)(param_1 + 0x98);
  if (lVar7 == 0) {
    local_28 = *(long *)(param_1 + 0x90);
  }
  else {
    plVar11 = (long *)(param_1 + 0x90);
    if (*(int *)(lVar7 + 0x54) != 0) {
      plVar11 = (long *)(param_1 + 0x98);
    }
    local_28 = *plVar11;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  if ((*(long *)(param_1 + 0x88) == 0) || (*(int *)(*(long *)(param_1 + 0x88) + 0x54) == 0)) {
    FUN_01320fc0(&local_30,&local_28);
    lVar7 = local_30;
    if (local_30 != 0) {
      lVar8 = *(long *)(param_1 + 0x68);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
        piVar1 = (int *)(lVar8 + 0x54);
        pbVar6 = PTR_DAT_02715078;
        puVar9 = PTR_DAT_02715080;
        iVar10 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar8 + 0x58);
            if ((*pbVar6 & 1) == 0) {
              iVar4 = __cxa_guard_acquire(pbVar6);
              pbVar6 = PTR_DAT_02715078;
              puVar9 = PTR_DAT_02715080;
              if (iVar4 != 0) {
                uVar12 = FUN_00a87090();
                *(undefined8 *)PTR_DAT_02715080 = uVar12;
                __cxa_guard_release(PTR_DAT_02715078);
                pbVar6 = PTR_DAT_02715078;
                puVar9 = PTR_DAT_02715080;
              }
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_01322138;
              if (plVar11 == (long *)puVar9) break;
              plVar11 = (long *)*plVar11;
            }
            iVar4 = *piVar1;
            if (iVar4 != iVar10) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_38 = 0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                local_38 = *(long *)(lVar8 + 0x60) + -0x50;
              }
              goto LAB_0132213c;
            }
            iVar10 = iVar4;
            if (iVar4 == 0) goto LAB_01322138;
          }
          ClearExclusiveLocal();
          iVar10 = iVar4;
        } while (iVar4 != 0);
      }
LAB_01322138:
      local_38 = 0;
LAB_0132213c:
      uVar5 = FUN_01323f70(lVar7,&local_38,param_2 & 1);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      lVar7 = local_28;
      if ((uVar5 & 1) == 0) {
        uVar12 = 0;
        lVar7 = local_30;
      }
      else {
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(param_1 + 0x88);
        *(long *)(param_1 + 0x88) = lVar7;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        uVar12 = 1;
        lVar7 = local_30;
      }
      local_30 = 0;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        local_30 = 0;
      }
      goto joined_r0x013221b0;
    }
  }
  uVar12 = 0;
joined_r0x013221b0:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar12;
}


