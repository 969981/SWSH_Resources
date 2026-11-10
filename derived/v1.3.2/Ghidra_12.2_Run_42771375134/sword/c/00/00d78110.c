/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d78110; name: FUN_00d78110
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d78110(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long local_230;
  undefined1 *local_228;
  long local_220;
  long local_218;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  byte *local_1f0;
  long *local_1e8;
  byte local_184 [4];
  long local_180 [32];
  long local_80;
  long local_78;
  long local_70 [2];
  
  FUN_00c58c00(local_70,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar14 = local_70[0];
  plVar12 = (long *)(param_1 + 0x90);
  (**(code **)(*(long *)*plVar12 + 0x10))(local_180);
  local_78 = local_180[0];
  puVar6 = PTR_DAT_027194d8;
  local_180[0] = 0;
  lVar13 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x98);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar13 + 0x58);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  local_80 = lVar15;
  FUN_00c7a130(lVar14,&local_78,&local_80);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_180[0] != 0) {
    (**(code **)(*(long *)(local_180[0] + 0x48) + 0x18))();
    local_180[0] = 0;
  }
  local_184[0] = 0;
  local_1f0 = local_184;
  local_1e8 = local_180;
  local_210 = &LAB_00d78af0;
  local_208 = FUN_00d78b10;
  local_200 = &LAB_00d78b20;
  local_1f8 = &LAB_00d78b30;
  (**(code **)(*(long *)*plVar12 + 0x100))((long *)*plVar12,&local_210);
  pcVar7 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar7)(&local_1f0);
  }
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  if (local_184[0] != 0) {
    uVar17 = 0;
    do {
      lVar14 = local_180[uVar17];
      lVar13 = *(long *)(*(long *)puVar6 + 0x98);
      if (lVar13 == 0) {
        FUN_01052a10(0,lVar14);
        lVar13 = *(long *)(lVar14 + 0x68);
        if (lVar13 != 0) goto LAB_00d78424;
LAB_00d784e4:
        lVar15 = 0;
        lVar13 = FUN_00d78b40(0,&local_210);
      }
      else {
        plVar16 = (long *)(lVar13 + 0x48);
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_01052a10(lVar13,lVar14);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        lVar13 = *(long *)(lVar14 + 0x68);
        if (lVar13 == 0) goto LAB_00d784e4;
LAB_00d78424:
        if (*(int *)(lVar13 + 0x54) != 0) {
          piVar1 = (int *)(lVar13 + 0x54);
          iVar11 = *(int *)(lVar13 + 0x54);
          do {
            while( true ) {
              plVar16 = *(long **)(lVar13 + 0x58);
              if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
                uVar9 = FUN_00a87090();
                *(undefined8 *)puVar5 = uVar9;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar16 == (long *)0x0) goto LAB_00d784e4;
                if (plVar16 == (long *)puVar5) break;
                plVar16 = (long *)*plVar16;
              }
              iVar8 = *piVar1;
              if (iVar8 == iVar11) break;
              ClearExclusiveLocal();
              iVar11 = iVar8;
              if (iVar8 == 0) goto LAB_00d784e4;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar15 = 0;
              if (*(long *)(lVar13 + 0x60) != 0) {
                lVar15 = *(long *)(lVar13 + 0x60) + -0x50;
              }
              lVar13 = FUN_00d78b40(lVar15,&local_210);
              goto joined_r0x00d784f0;
            }
            iVar11 = iVar8;
          } while (iVar8 != 0);
          goto LAB_00d784e4;
        }
        lVar15 = 0;
        lVar13 = FUN_00d78b40(0,&local_210);
      }
joined_r0x00d784f0:
      if (lVar13 == 0) {
        local_220 = lVar14;
        if (lVar14 != 0) {
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
        }
        lVar13 = *(long *)(*(long *)puVar6 + 0x110);
        if (lVar13 == 0) {
          local_228 = (undefined1 *)0x0;
        }
        else {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          FUN_00d78d40(&local_210,lVar13);
          local_228 = local_210;
        }
        local_210 = (undefined1 *)0x0;
        FUN_00da16f0(&local_218,&local_220,&local_228,1);
        if (local_218 != 0) {
          (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
          local_218 = 0;
        }
        if (local_228 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
          local_228 = (undefined1 *)0x0;
        }
        if (local_210 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
          local_210 = (undefined1 *)0x0;
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        if (local_220 != 0) {
          (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
          local_220 = 0;
        }
        FUN_00727800(lVar14,1);
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < local_184[0]);
  }
  lVar14 = FUN_00d78f10(*plVar12,&local_210);
  if (lVar14 != 0) {
    FUN_00d79110(*plVar12,&local_210);
    lVar14 = *plVar12;
    local_230 = *(long *)(*(long *)puVar6 + 0x98);
    if (local_230 != 0) {
      (**(code **)(*(long *)(local_230 + 0x48) + 0x10))();
    }
    puVar10 = (undefined1 *)FUN_00d79430(&local_210,*(undefined8 *)(lVar14 + 8),&local_230,plVar12);
    if (puVar10 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
    }
    local_210 = puVar10;
    FUN_006d9640(lVar14,&local_210);
    if (local_210 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
      local_210 = (undefined1 *)0x0;
    }
    if (local_230 != 0) {
      (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
      local_230 = 0;
    }
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


