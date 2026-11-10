/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1540; name: FUN_00dc1540
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00dc1540(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 *local_208;
  long local_200;
  long local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  int *local_1d0;
  long *local_1c8;
  int local_16c;
  long local_168 [33];
  
  lVar10 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x110);
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if (*(int *)(lVar10 + 0x54) == 0) {
      uVar8 = 0;
    }
    else {
      local_1d0 = &local_16c;
      local_1c8 = local_168;
      local_1f0 = &LAB_00dc35e0;
      local_1e8 = FUN_00dc3610;
      local_1e0 = &LAB_00dc3620;
      local_16c = 0;
      local_1d8 = &LAB_00dc3630;
      (**(code **)(*param_1 + 0x100))(param_1,&local_1f0);
      pcVar5 = local_1e8;
      if (local_1e8 != (code *)0x0) {
        local_1e0 = (undefined1 *)0x0;
        local_1d8 = (undefined1 *)0x0;
        local_1f0 = (undefined1 *)0x0;
        local_1e8 = (code *)0x0;
        (*pcVar5)(&local_1d0);
      }
      puVar4 = PTR_DAT_02715080;
      if (0 < local_16c) {
        lVar15 = 0;
        do {
          lVar12 = local_168[lVar15];
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          lVar11 = *(long *)(lVar12 + 0x68);
          if (lVar11 == 0) {
LAB_00dc17e4:
            lVar13 = 0;
            lVar11 = FUN_00d78b40(0,&local_1f0);
          }
          else {
            if (*(int *)(lVar11 + 0x54) != 0) {
              piVar1 = (int *)(lVar11 + 0x54);
              iVar9 = *(int *)(lVar11 + 0x54);
              do {
                while( true ) {
                  plVar14 = *(long **)(lVar11 + 0x58);
                  if (((*PTR_DAT_02715078 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
                    uVar8 = FUN_00a87090();
                    *(undefined8 *)puVar4 = uVar8;
                    __cxa_guard_release(PTR_DAT_02715078);
                  }
                  while( true ) {
                    if (plVar14 == (long *)0x0) goto LAB_00dc17e4;
                    if (plVar14 == (long *)puVar4) break;
                    plVar14 = (long *)*plVar14;
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
                    lVar13 = 0;
                    if (*(long *)(lVar11 + 0x60) != 0) {
                      lVar13 = *(long *)(lVar11 + 0x60) + -0x50;
                    }
                    lVar11 = FUN_00d78b40(lVar13,&local_1f0);
                    goto joined_r0x00dc1718;
                  }
                  iVar9 = iVar6;
                  if (iVar6 == 0) goto LAB_00dc17e4;
                }
                ClearExclusiveLocal();
                iVar9 = iVar6;
              } while (iVar6 != 0);
              goto LAB_00dc17e4;
            }
            lVar13 = 0;
            lVar11 = FUN_00d78b40(0,&local_1f0);
          }
joined_r0x00dc1718:
          if (lVar11 == 0) {
            local_200 = lVar12;
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
            }
            FUN_00d78d40(&local_1f0,lVar10);
            local_208 = local_1f0;
            local_1f0 = (undefined1 *)0x0;
            FUN_00da16f0(&local_1f8,&local_200,&local_208,param_2);
            if (local_1f8 != 0) {
              (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
              local_1f8 = 0;
            }
            if (local_208 != (undefined1 *)0x0) {
              (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
              local_208 = (undefined1 *)0x0;
            }
            if (local_1f0 != (undefined1 *)0x0) {
              (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
              local_1f0 = (undefined1 *)0x0;
            }
            if (local_200 != 0) {
              (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
              local_200 = 0;
            }
            FUN_00727800(lVar12,param_3);
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_16c);
      }
      uVar8 = 1;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return uVar8;
}


