/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84bf0; name: FUN_00d84bf0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d84bf0(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined **local_190;
  byte *local_188;
  long *local_180;
  undefined ***local_170;
  byte local_15c [4];
  long local_158 [32];
  long local_58 [11];
  
  while (param_2 == 0) {
    FUN_00d84bf0(param_1,1);
    param_2 = 2;
  }
  FUN_00d852e0(local_58,param_1);
  lVar9 = local_58[0];
  local_190 = &PTR_LAB_0264d618;
  local_188 = local_15c;
  local_180 = local_158;
  local_15c[0] = 0;
  local_170 = &local_190;
  FUN_00c687d0(local_58[0],&local_190);
  if (&local_190 == local_170) {
    pcVar8 = (code *)(*local_170)[4];
  }
  else {
    if (local_170 == (undefined ***)0x0) goto LAB_00d84cb0;
    pcVar8 = (code *)(*local_170)[5];
  }
  (*pcVar8)();
LAB_00d84cb0:
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  if (local_15c[0] != 0) {
    uVar14 = 0;
    do {
      lVar11 = local_158[uVar14];
      lVar9 = *(long *)(lVar11 + 0x68);
      if (lVar9 == 0) {
LAB_00d84e64:
        lVar12 = 0;
        lVar9 = FUN_00d78b40(0,&local_190);
      }
      else {
        if (*(int *)(lVar9 + 0x54) != 0) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar10 = *(int *)(lVar9 + 0x54);
          do {
            while( true ) {
              plVar13 = *(long **)(lVar9 + 0x58);
              if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                uVar7 = FUN_00a87090();
                *(undefined8 *)puVar5 = uVar7;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar13 == (long *)0x0) goto LAB_00d84e64;
                if (plVar13 == (long *)puVar5) break;
                plVar13 = (long *)*plVar13;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar10) break;
              ClearExclusiveLocal();
              iVar10 = iVar6;
              if (iVar6 == 0) goto LAB_00d84e64;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
              }
              lVar9 = FUN_00d78b40(lVar12,&local_190);
              goto joined_r0x00d84da4;
            }
            iVar10 = iVar6;
          } while (iVar6 != 0);
          goto LAB_00d84e64;
        }
        lVar12 = 0;
        lVar9 = FUN_00d78b40(0,&local_190);
      }
joined_r0x00d84da4:
      if (lVar9 == 0) {
        local_1a0 = lVar11;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        local_1a8 = *(long *)(param_1 + 0x120);
        if (local_1a8 != 0) {
          (**(code **)(*(long *)(local_1a8 + 0x48) + 0x10))();
        }
        FUN_00da16f0(&local_198,&local_1a0,&local_1a8,1);
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
          local_198 = 0;
        }
        if (local_1a8 != 0) {
          (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
          local_1a8 = 0;
        }
        if (local_1a0 != 0) {
          (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
          local_1a0 = 0;
        }
        FUN_00727800(lVar11,1);
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < local_15c[0]);
    lVar9 = local_58[0];
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


