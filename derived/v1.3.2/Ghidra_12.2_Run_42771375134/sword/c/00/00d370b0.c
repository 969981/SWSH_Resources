/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d370b0; name: FUN_00d370b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d370b0(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_2 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  puVar7 = (undefined8 *)FUN_00d11ca0(local_38 + 0xf8,param_2 + 0x60);
  uVar12 = *puVar7;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00d1bae0(&local_38,uVar12);
  if (local_38 == 0) {
    FUN_00d369b0(&local_40,param_2);
    if (local_40 == 0) {
      *param_1 = 0;
      lVar2 = 0;
    }
    else {
      FUN_00c6a590(&local_48);
      lVar2 = local_48;
      puVar5 = PTR_DAT_02715b80;
      if (local_48 == 0) {
        *param_1 = 0;
      }
      else {
        if (*(int *)(local_48 + 0x54) != 0) {
          piVar1 = (int *)(local_48 + 0x54);
          puVar9 = PTR_DAT_02715b88;
          iVar11 = *(int *)(local_48 + 0x54);
          do {
            while( true ) {
              plVar10 = *(long **)(lVar2 + 0x58);
              if (((*puVar5 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_02715b88, iVar6 != 0)) {
                if (((*PTR_DAT_02715b90 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_02715b90), iVar6 != 0)) {
                  uVar12 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_02715b98 = uVar12;
                  __cxa_guard_release(PTR_DAT_02715b90);
                }
                puVar9 = PTR_DAT_02715b88;
                *(undefined **)PTR_DAT_02715b88 = PTR_DAT_02715b98;
                __cxa_guard_release(puVar5);
              }
              while( true ) {
                if (plVar10 == (long *)0x0) goto LAB_00d3728c;
                if (plVar10 == (long *)puVar9) break;
                plVar10 = (long *)*plVar10;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar11) break;
              ClearExclusiveLocal();
              iVar11 = iVar6;
              if (iVar6 == 0) goto LAB_00d3728c;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar8 = *(long *)(lVar2 + 0x60);
              lVar2 = 0;
              if (lVar8 != 0) {
                lVar2 = lVar8 + -0x50;
              }
              *param_1 = lVar2;
              goto joined_r0x00d37324;
            }
            iVar11 = iVar6;
          } while (iVar6 != 0);
        }
LAB_00d3728c:
        *param_1 = 0;
joined_r0x00d37324:
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
      }
      local_48 = 0;
      lVar2 = 0;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
        lVar2 = local_40;
      }
    }
  }
  else {
    lVar8 = *(long *)(local_38 + 0x490);
    *param_1 = lVar8;
    lVar2 = local_40;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar2 = local_40;
    }
  }
  local_40 = lVar2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


