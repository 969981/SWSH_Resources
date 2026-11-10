/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1b840; name: FUN_00e1b840
 */


void FUN_00e1b840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  undefined *local_1b0;
  code *local_1a8;
  code *local_1a0;
  code *local_198;
  long local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [80];
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [112];
  undefined8 local_80;
  
  lVar14 = *(long *)PTR_DAT_0271e8d0;
  *(undefined8 *)(lVar14 + 0x1e8) = param_2;
  if (*(char *)(param_1 + 0x353) == '\0') {
    lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar19 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    puVar16 = *(undefined8 **)(param_1 + 0x398);
    puVar8 = *(undefined8 **)(param_1 + 0x3a0);
    if (puVar16 != puVar8) {
      puVar1 = PTR_DAT_02710a48 + 0x10;
LAB_00e1b974:
      uVar7 = FUN_01511a60(lVar19,*puVar16);
      FUN_016217f0(&local_1b0,param_2,uVar7);
      FUN_00e1be60(lVar14,&local_1b0,*(undefined4 *)(param_1 + 0x360));
      FUN_00e1be60(lVar14,&local_1b0,1);
      pcVar18 = local_1a8 + 0x60;
      if (*(long *)(local_1a8 + 0x78) != 0) {
        pcVar18 = local_1a8 + 0x68;
      }
      uVar17 = *(ulong *)pcVar18;
      local_1b0 = puVar1;
      if (local_1a8 == (code *)0x0) {
        local_1a8 = (code *)0x0;
        pcVar18 = local_118;
      }
      else {
        FUN_006e2100(local_1a8,&local_1b0);
        pcVar10 = local_1a8;
        local_1a8 = (code *)0x0;
        pcVar18 = local_118;
        if (pcVar10 != (code *)0x0) {
          (**(code **)(*(long *)(pcVar10 + 0x48) + 0x18))();
          pcVar18 = local_118;
        }
      }
      local_118 = pcVar18;
      if (pcVar18 != (code *)0x0) {
        local_110 = 0;
        local_108 = (code *)0x0;
        local_120 = 0;
        local_118 = (code *)0x0;
        (*pcVar18)(&local_100);
      }
      pcVar18 = local_198;
      if (local_198 != (code *)0x0) {
        local_190 = 0;
        local_188 = (code *)0x0;
        local_1a0 = (code *)0x0;
        local_198 = (code *)0x0;
        (*pcVar18)(&local_180);
      }
      if (local_1a8 != (code *)0x0) {
        (**(code **)(*(long *)((long)local_1a8 + 0x48) + 0x18))();
      }
      uVar12 = *(ulong *)(lVar14 + 0xa8);
      if (uVar12 != 0) {
        uVar13 = uVar12 - 1;
        if ((uVar13 & uVar12) == 0) {
          uVar9 = uVar13 & uVar17;
          plVar11 = *(long **)(*(long *)(lVar14 + 0xa0) + uVar9 * 8);
        }
        else {
          uVar9 = uVar17;
          if (uVar12 <= uVar17) {
            uVar9 = 0;
            if (uVar12 != 0) {
              uVar9 = uVar17 / uVar12;
            }
            uVar9 = uVar17 - uVar9 * uVar12;
          }
          plVar11 = *(long **)(*(long *)(lVar14 + 0xa0) + uVar9 * 8);
        }
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((uVar13 & uVar12) == 0) {
            do {
              uVar12 = plVar11[1];
              if (uVar17 != uVar12 && (uVar12 & uVar13) != uVar9) break;
              if ((uVar17 == uVar12) && (plVar11[2] == uVar17)) goto LAB_00e1b964;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar11[1];
              if (uVar17 == uVar13) {
                if (plVar11[2] == uVar17) goto LAB_00e1b964;
              }
              else {
                if (uVar12 <= uVar13) {
                  uVar4 = 0;
                  if (uVar12 != 0) {
                    uVar4 = uVar13 / uVar12;
                  }
                  uVar13 = uVar13 - uVar4 * uVar12;
                }
                if (uVar13 != uVar9) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      goto LAB_00e1bb14;
    }
LAB_00e1bbe0:
    lVar14 = *(long *)(param_1 + 0x3c8);
    lVar15 = *(long *)(param_1 + 0x3d0);
    if (lVar14 != lVar15) {
      puVar1 = PTR_DAT_0271f540 + 0x10;
      puVar2 = PTR_DAT_0271f548 + 0x10;
      pcVar18 = (code *)(PTR_DAT_02710a48 + 0x10);
      puVar3 = PTR_DAT_0271edf8 + 0x10;
      do {
        FUN_0131a840(&local_1b0,param_2);
        local_80 = 0;
        local_1b0 = puVar1;
        FUN_0131aaf0(&local_1b0,lVar14);
        puVar5 = PTR_DAT_0271e8d0;
        FUN_00e1be60(*(undefined8 *)PTR_DAT_0271e8d0,&local_1a0,*(undefined4 *)(param_1 + 0x360));
        FUN_00e1be60(*(undefined8 *)puVar5,&local_1a0,1);
        local_1b0 = puVar2;
        local_1a0 = pcVar18;
        if (local_198 == (code *)0x0) {
          local_198 = (code *)0x0;
          pcVar10 = local_108;
        }
        else {
          FUN_006e2100(local_198,&local_1a0);
          pcVar6 = local_198;
          local_198 = (code *)0x0;
          pcVar10 = local_108;
          if (pcVar6 != (code *)0x0) {
            (**(code **)(*(long *)(pcVar6 + 0x48) + 0x18))();
            pcVar10 = local_108;
          }
        }
        local_108 = pcVar10;
        if (pcVar10 != (code *)0x0) {
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = 0;
          local_108 = (code *)0x0;
          (*pcVar10)(auStack_f0);
        }
        pcVar10 = local_188;
        if (local_188 != (code *)0x0) {
          local_180 = 0;
          local_178 = 0;
          local_190 = 0;
          local_188 = (code *)0x0;
          (*pcVar10)(auStack_170);
        }
        if (local_198 != (code *)0x0) {
          (**(code **)(*(long *)((long)local_198 + 0x48) + 0x18))();
          local_198 = (code *)0x0;
        }
        FUN_0131a840(&local_1b0,param_2);
        local_80 = 0;
        local_1b0 = puVar3;
        FUN_0131aaf0(&local_1b0,lVar14);
        puVar5 = PTR_DAT_0271e8d0;
        FUN_00e1be60(*(undefined8 *)PTR_DAT_0271e8d0,&local_1a0,*(undefined4 *)(param_1 + 0x360));
        FUN_00e1be60(*(undefined8 *)puVar5,&local_1a0,1);
        local_1b0 = PTR_DAT_0271f548 + 0x10;
        local_1a0 = (code *)(PTR_DAT_02710a48 + 0x10);
        if (local_198 == (code *)0x0) {
          local_198 = (code *)0x0;
          pcVar10 = local_108;
        }
        else {
          FUN_006e2100(local_198,&local_1a0);
          pcVar6 = local_198;
          local_198 = (code *)0x0;
          pcVar10 = local_108;
          if (pcVar6 != (code *)0x0) {
            (**(code **)(*(long *)((long)pcVar6 + 0x48) + 0x18))();
            pcVar10 = local_108;
          }
        }
        local_108 = pcVar10;
        if (pcVar10 != (code *)0x0) {
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = 0;
          local_108 = (code *)0x0;
          (*pcVar10)(auStack_f0);
        }
        pcVar10 = local_188;
        if (local_188 != (code *)0x0) {
          local_180 = 0;
          local_178 = 0;
          local_190 = 0;
          local_188 = (code *)0x0;
          (*pcVar10)(auStack_170);
        }
        if (local_198 != (code *)0x0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
          local_198 = (code *)0x0;
        }
        lVar14 = lVar14 + 0x1c;
      } while (lVar15 != lVar14);
    }
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
    }
  }
  return;
LAB_00e1b964:
  if (plVar11[3] == 0) {
LAB_00e1bb14:
    pcVar18 = (code *)0x0;
  }
  else {
    pcVar18 = (code *)(plVar11[3] + 0x10);
  }
  local_178 = CONCAT44(local_178._4_4_,1);
  local_1b0 = &LAB_00e2f2a0;
  local_1a8 = FUN_00e2f540;
  local_1a0 = FUN_00e2f550;
  local_198 = (code *)&LAB_00e2f570;
  pcVar10 = *(code **)(pcVar18 + 0x18);
  local_190 = param_1;
  local_188 = pcVar18;
  local_180 = param_2;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(pcVar18 + 0x20) = 0;
    *(undefined8 *)(pcVar18 + 0x28) = 0;
    *(undefined8 *)(pcVar18 + 0x10) = 0;
    *(undefined8 *)(pcVar18 + 0x18) = 0;
    (*pcVar10)(pcVar18 + 0x30);
    if (local_1a0 == (code *)0x0) {
      lVar15 = *(long *)(pcVar18 + 8);
      goto joined_r0x00e1b95c;
    }
  }
  (*local_1a0)(&local_190,pcVar18 + 0x30);
  *(code **)(pcVar18 + 0x28) = local_198;
  *(code **)(pcVar18 + 0x18) = local_1a8;
  *(code **)(pcVar18 + 0x20) = local_1a0;
  *(undefined **)(pcVar18 + 0x10) = local_1b0;
  lVar15 = *(long *)(pcVar18 + 8);
joined_r0x00e1b95c:
  if (lVar15 != 0) {
    plVar11 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_006e1e70(lVar15,pcVar18,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  pcVar18 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = (code *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar18)(&local_190);
  }
  puVar16 = puVar16 + 1;
  if (puVar16 == puVar8) goto LAB_00e1bbe0;
  goto LAB_00e1b974;
}


