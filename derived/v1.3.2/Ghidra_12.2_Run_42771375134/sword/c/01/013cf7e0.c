/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cf7e0; name: FUN_013cf7e0
 */


void FUN_013cf7e0(long param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  long local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar13 == (undefined8 *)0x0)) {
    uVar10 = FUN_0130fe90(param_2);
  }
  else {
    plVar8 = (long *)(**(code **)*puVar13)(puVar13);
    lVar9 = FUN_0132d9a0();
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)lVar9) {
        puVar13 = puVar13 + -10;
        uVar10 = FUN_0130fe90(param_2);
        goto joined_r0x013cfa28;
      }
    }
    uVar10 = FUN_0130fe90(param_2);
  }
  puVar13 = (undefined8 *)0x0;
joined_r0x013cfa28:
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_012e7c90(param_2), (uVar10 & 1) == 0)) &&
     (FUN_012e54a0(&local_50,param_2), local_50 != 0)) {
    uVar10 = FUN_012e8e40(param_2);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
    if ((((uVar10 & 1) == 0) && (uVar10 = FUN_0130fe90(param_3), (uVar10 & 1) == 0)) &&
       ((uVar10 = FUN_012e7c90(param_3), (uVar10 & 1) == 0 &&
        (FUN_012e54a0(&local_50,param_3), local_50 != 0)))) {
      uVar10 = FUN_012e8e40(param_3);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      if ((uVar10 & 1) == 0) {
        local_50 = -0xfc8d975a50f4809;
        local_48 = 0;
        FUN_0130fad0(param_2,&local_50,0);
        local_50 = -0xfc8d975a50f4809;
        local_48 = 0;
        FUN_0130fad0(param_3,&local_50,0);
        puVar6 = PTR_DAT_02715080;
        puVar5 = PTR_DAT_02715078;
        local_50 = 0;
        local_48 = 0;
        lVar9 = *(long *)(param_2 + 0x68);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar12 = *(int *)(lVar9 + 0x54);
          do {
            plVar8 = *(long **)(lVar9 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar11 = FUN_00a87090();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar8 == (long *)0x0) goto joined_r0x013cf9e0;
              if (plVar8 == (long *)puVar6) break;
              plVar8 = (long *)*plVar8;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar12) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar4 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  lVar4 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto joined_r0x013cfba0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar7;
          } while (iVar7 != 0);
        }
joined_r0x013cf9e0:
        lVar4 = 0;
joined_r0x013cfba0:
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        }
        puVar6 = PTR_DAT_02715080;
        puVar5 = PTR_DAT_02715078;
        lVar9 = *(long *)(param_3 + 0x68);
        local_50 = lVar4;
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar12 = *(int *)(lVar9 + 0x54);
          do {
            plVar8 = *(long **)(lVar9 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar11 = FUN_00a87090();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar8 == (long *)0x0) goto joined_r0x013cfb08;
              if (plVar8 == (long *)puVar6) break;
              plVar8 = (long *)*plVar8;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar12) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar4 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  lVar4 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto joined_r0x013cfbbc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar7;
          } while (iVar7 != 0);
        }
joined_r0x013cfb08:
        lVar4 = 0;
joined_r0x013cfbbc:
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
        local_48 = lVar4;
        FUN_013d2fb0(puVar13[0xc],0x1d001dbf9f080f4d,&local_50,0);
        *(undefined4 *)(puVar13 + 0xf) = 10;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (local_50 == 0) {
          return;
        }
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        return;
      }
    }
  }
  FUN_013cfbd0(param_1,param_2);
  return;
}


