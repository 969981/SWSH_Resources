/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c92ac0; name: FUN_00c92ac0
 */


void FUN_00c92ac0(long param_1,byte param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long local_80 [3];
  long local_68;
  ulong local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long *local_38;
  
  *(byte *)(param_1 + 0x5f0) = param_2 & 1;
  FUN_00c91500();
  FUN_00c92e90(param_1);
  if (*(long *)(param_1 + 0x270) != 0) {
    FUN_00c834c0(*(long *)(param_1 + 0x270),*(undefined1 *)(param_1 + 799));
    FUN_00c825a0(&local_38);
    plVar13 = local_38;
    if (local_38 != (long *)0x0) {
      plVar9 = (long *)(**(code **)local_38[10])(local_38 + 10);
      plVar4 = plVar9;
      if (((*PTR_DAT_0271c490 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar8 != 0)) {
        uVar10 = FUN_00c95940();
        *(undefined8 *)PTR_DAT_0271c488 = uVar10;
        __cxa_guard_release(PTR_DAT_0271c490);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)PTR_DAT_0271c488) {
          (**(code **)(plVar13[9] + 0x10))(plVar13 + 9);
          bVar15 = false;
          goto LAB_00c92b74;
        }
        plVar4 = (long *)0x0;
      }
      bVar15 = true;
      plVar13 = plVar4;
LAB_00c92b74:
      (**(code **)(*plVar13 + 0xd0))(local_80,plVar13);
      if (local_80[0] != 0) {
        iVar8 = *(int *)(local_80[0] + 0x54);
        if (local_80[0] != 0) {
          (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
        }
        if ((iVar8 != 0) &&
           ((**(code **)(*plVar13 + 0xd0))(local_80,plVar13), lVar5 = local_80[0],
           puVar6 = PTR_DAT_027150a8, local_80[0] != 0)) {
          if (*(int *)(local_80[0] + 0x54) != 0) {
            piVar1 = (int *)(local_80[0] + 0x54);
            puVar12 = PTR_DAT_027150b0;
            iVar8 = *(int *)(local_80[0] + 0x54);
            do {
              while( true ) {
                plVar9 = *(long **)(lVar5 + 0x58);
                if (((*puVar6 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(puVar6), puVar12 = PTR_DAT_027150b0, iVar7 != 0)) {
                  uVar10 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_027150b0 = uVar10;
                  __cxa_guard_release(puVar6);
                  puVar12 = PTR_DAT_027150b0;
                }
                while( true ) {
                  if (plVar9 == (long *)0x0) goto LAB_00c92c9c;
                  if (plVar9 == (long *)puVar12) break;
                  plVar9 = (long *)*plVar9;
                }
                iVar7 = *piVar1;
                if (iVar7 != iVar8) break;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar14 = *(long *)(lVar5 + 0x60);
                  lVar5 = 0;
                  if (lVar14 != 0) {
                    lVar5 = lVar14 + -0x50;
                  }
                  goto joined_r0x00c92e54;
                }
                iVar8 = iVar7;
                if (iVar7 == 0) goto LAB_00c92c9c;
              }
              ClearExclusiveLocal();
              iVar8 = iVar7;
            } while (iVar7 != 0);
          }
LAB_00c92c9c:
          lVar5 = 0;
joined_r0x00c92e54:
          if (local_80[0] != 0) {
            (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
            local_80[0] = 0;
          }
          if (lVar5 != 0) {
            if (*(char *)(param_1 + 0x5f0) == '\0') {
              lVar14 = *(long *)(param_1 + 0x6a0);
              *(undefined8 *)(param_1 + 0x6a0) = 0;
              if (lVar14 != 0) {
                (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
              }
              uVar11 = FUN_0069d340(lVar5);
              if ((uVar11 & 1) != 0) {
                FUN_0069d330(lVar5);
              }
            }
            else {
              uVar11 = FUN_0069d340(lVar5);
              if ((uVar11 & 1) == 0) {
                if ((param_3 & 1) != 0) {
                  local_48 = DAT_02640ce8;
                  local_58 = DAT_02640cd8;
                  puStack_50 = PTR_s_mouth_02640ce0;
                  FUN_006cf0a0(local_80,&local_58);
                  uVar11 = FUN_0069bda0(lVar5,local_80);
                  local_60 = uVar11;
                  if (local_68 != 0) {
                    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))((long *)(local_68 + 0x48));
                    uVar11 = local_60 & 0xff;
                    local_68 = 0;
                  }
                  if ((uVar11 & 0xff) != 0) {
                    local_88 = DAT_02640d00;
                    local_98 = DAT_02640cf0;
                    puStack_90 = PTR_s_mouth01_02640cf8;
                    FUN_006cf0a0(local_80,&local_98);
                    FUN_0069c850(DAT_01d4be8c,0x40a00000,lVar5,local_80,&local_60);
                    if (local_68 != 0) {
                      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                      local_68 = 0;
                    }
                  }
                }
                lVar14 = *(long *)(lVar5 + 0x58);
                if (lVar14 != 0) {
                  (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x6a0) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x6a0) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x6a0) = 0;
                }
                *(long *)(param_1 + 0x6a0) = lVar14;
              }
            }
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
        }
      }
      if (!bVar15) {
        (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
      }
    }
  }
  return;
}


