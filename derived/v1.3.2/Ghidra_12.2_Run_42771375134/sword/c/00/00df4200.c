/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4200; name: FUN_00df4200
 */


bool FUN_00df4200(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  int iVar10;
  long local_a8 [3];
  long local_90;
  long local_88;
  long local_80 [3];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 uStack_48;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_38);
  local_80[0] = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar6 = FUN_00e7cb20(local_80);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if ((uVar6 & 1) == 0) {
    local_60 = local_38;
    local_50 = PTR_DAT_02653a70;
    uStack_48 = DAT_02653a78;
    local_58 = DAT_02653a68;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_006cf0a0(local_80,&local_58);
    uVar6 = FUN_00e7be90(&local_60,local_80);
    if ((uVar6 & 1) == 0) {
      local_88 = local_38;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      FUN_006cf0a0(local_a8,&local_58);
      uVar5 = FUN_00e7c110(&local_88,local_a8);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      uVar5 = uVar5 ^ 1;
    }
    else {
      uVar5 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if ((uVar5 & 1) != 0) goto LAB_00df4428;
  }
  else {
    local_a8[0] = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00e7b880(local_80,local_a8);
    if (local_a8[0] != 0) {
      (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
      local_a8[0] = 0;
    }
    lVar2 = local_80[0];
    if ((local_80[0] == 0) || (*(int *)(local_80[0] + 0x54) == 0)) {
LAB_00df44a0:
      bVar8 = false;
    }
    else {
      if (local_80[0] == 0) {
LAB_00df444c:
        local_a8[0] = FUN_0069d2b0(0);
      }
      else {
        if (*(int *)(local_80[0] + 0x54) != 0) {
          piVar1 = (int *)(local_80[0] + 0x54);
          iVar10 = *(int *)(local_80[0] + 0x54);
          do {
            while( true ) {
              plVar9 = *(long **)(lVar2 + 0x58);
              lVar7 = FUN_00c781c0();
              while( true ) {
                if (plVar9 == (long *)0x0) goto LAB_00df444c;
                if (plVar9 == (long *)lVar7) break;
                plVar9 = (long *)*plVar9;
              }
              iVar3 = *piVar1;
              if (iVar3 != iVar10) break;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar7 = *(long *)(lVar2 + 0x60);
                lVar2 = 0;
                if (lVar7 != 0) {
                  lVar2 = lVar7 + -0x50;
                }
                local_a8[0] = FUN_0069d2b0(lVar2);
                if (lVar2 != 0) {
                  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
                }
                goto LAB_00df446c;
              }
              iVar10 = iVar3;
              if (iVar3 == 0) goto LAB_00df444c;
            }
            ClearExclusiveLocal();
            iVar10 = iVar3;
          } while (iVar3 != 0);
          goto LAB_00df444c;
        }
        local_a8[0] = FUN_0069d2b0(0);
      }
LAB_00df446c:
      plVar9 = (long *)FUN_006b93b0(local_a8);
      if (*plVar9 != 0x2183a1da081cfd3a) goto LAB_00df44a0;
      bVar8 = true;
    }
    if (local_80[0] != 0) {
      (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
      local_80[0] = 0;
    }
    if (!bVar8) {
LAB_00df4428:
      iVar10 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar10 + 1;
      bVar8 = 0x3c < iVar10;
      goto joined_r0x00df4440;
    }
  }
  bVar8 = true;
joined_r0x00df4440:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return bVar8;
}


