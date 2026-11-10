/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e14360; name: FUN_00e14360
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e14360(code *param_1)

{
  long *plVar1;
  ulong uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *__dest;
  long *__dest_00;
  long *plVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  
  local_f0 = FUN_00e2dc10;
  local_e8 = FUN_00e2dc70;
  local_e0 = (code *)&LAB_00e2dc80;
  local_d8 = (long *)&LAB_00e2dc90;
  __dest = *(undefined8 **)(param_1 + 0xb0);
  pcVar13 = FUN_00e2dc70;
  if (*(undefined8 **)(param_1 + 0xb8) == __dest) {
LAB_00e14434:
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar13)(&uStack_d0);
  }
  else {
    do {
      while( true ) {
        local_120 = (long *)*__dest;
        uVar9 = (*local_f0)(&uStack_d0,&local_120);
        if ((uVar9 & 1) == 0) break;
        sVar3 = *(long *)(param_1 + 0xb8) - (long)(__dest + 1);
        if (sVar3 != 0) {
          memmove(__dest,__dest + 1,sVar3);
        }
        *(undefined8 **)(param_1 + 0xb8) = __dest + ((long)sVar3 >> 3);
        if (__dest + ((long)sVar3 >> 3) == __dest) goto LAB_00e1442c;
      }
      __dest = __dest + 1;
    } while (*(undefined8 **)(param_1 + 0xb8) != __dest);
LAB_00e1442c:
    pcVar13 = local_e8;
    if (local_e8 != (code *)0x0) goto LAB_00e14434;
  }
  uVar9 = FUN_00dbbcf0(*(undefined8 *)(param_1 + 0xe8));
  if ((uVar9 & 1) != 0) {
    return;
  }
  local_f0 = param_1;
  FUN_00e2dca0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),&local_f0);
  local_108 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  local_e8 = (code *)0x0;
  local_e0 = (code *)0x0;
  local_f0 = (code *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_118 = (long *)0x0;
  local_110 = (long *)0x0;
  local_120 = (long *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  plVar12 = *(long **)(param_1 + 0xb0);
  plVar16 = *(long **)(param_1 + 0xb8);
  local_d8 = local_108;
  if (plVar12 == plVar16) {
    uVar8 = 0;
LAB_00e146cc:
    plVar16 = local_120;
    puVar4 = (undefined4 *)PTR_DAT_02710860;
    plVar12 = local_118;
    if (local_120 == local_118) goto LAB_00e1498c;
  }
  else {
    uVar8 = 0;
    iVar19 = 0;
    uVar18 = 0;
    do {
      uVar9 = (**(code **)(*(long *)*plVar12 + 200))();
      iVar7 = iVar19;
      if ((uVar9 & 1) == 0) {
        if (*(uint *)(param_1 + 0x50) <= uVar8 + iVar19) goto LAB_00e14560;
        uVar9 = (**(code **)(*(long *)*plVar12 + 0xb8))();
        plVar6 = local_108;
        plVar1 = local_118;
        if ((uVar9 & 1) == 0) {
          uVar8 = uVar8 + 1;
          goto LAB_00e14584;
        }
        if (local_118 == local_110) {
          FUN_00dbc050(&local_120,plVar12);
        }
        else {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00e14a78;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar6;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar1 = *plVar12;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          local_118 = local_118 + 1;
        }
        plVar6 = local_118;
        for (plVar1 = local_120; iVar7 = iVar19 + 1, puVar5 = PTR_DAT_02710848,
            __dest_00 = local_120, plVar1 != plVar6; plVar1 = plVar1 + 1) {
          if ((long *)*plVar12 != (long *)*plVar1) {
            lVar10 = (**(code **)(*(long *)*plVar12 + 0xd8))();
            lVar11 = (**(code **)(*(long *)*plVar1 + 0xd8))();
            iVar7 = iVar19;
            puVar5 = PTR_DAT_02710848;
            __dest_00 = local_120;
            if (lVar10 == lVar11) break;
          }
        }
      }
      else if (uVar18 < *(uint *)(param_1 + 0x50)) {
        uVar18 = uVar18 + 1;
LAB_00e14584:
        uVar9 = (**(code **)(*(long *)*plVar12 + 0x28))();
        plVar1 = local_d8;
        pcVar13 = local_e8;
        puVar5 = PTR_DAT_02710848;
        __dest_00 = local_120;
        if ((uVar9 & 1) != 0) {
          if (local_e8 == local_e0) {
            FUN_00dbc050(&local_f0,plVar12);
            puVar5 = PTR_DAT_02710848;
            __dest_00 = local_120;
          }
          else {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00e14a78;
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar1;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            *(long *)pcVar13 = *plVar12;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            local_e8 = local_e8 + 8;
            puVar5 = PTR_DAT_02710848;
            __dest_00 = local_120;
          }
        }
      }
      else {
LAB_00e14560:
        (**(code **)(*(long *)*plVar12 + 0x20))();
        puVar5 = PTR_DAT_02710848;
        __dest_00 = local_120;
      }
      iVar19 = iVar7;
      plVar12 = plVar12 + 1;
      PTR_DAT_02710848 = puVar5;
      local_120 = __dest_00;
    } while (plVar12 != plVar16);
    if (local_118 == __dest_00) goto LAB_00e146cc;
LAB_00e14704:
    do {
      uVar9 = (**(code **)(*(long *)*__dest_00 + 0x28))();
      plVar12 = local_118;
      if ((uVar9 & 1) == 0) {
        plVar16 = local_120;
        if (local_118 != local_120) {
          do {
            while( true ) {
              while (__dest_00 == plVar16) {
                plVar16 = plVar16 + 1;
                if (plVar12 == plVar16) goto LAB_00e14874;
              }
              lVar10 = (**(code **)(*(long *)*__dest_00 + 0xd8))();
              lVar11 = (**(code **)(*(long *)*plVar16 + 0xd8))();
              if (lVar10 != lVar11) break;
              sVar3 = (long)local_118 - (long)(plVar16 + 1);
              if (sVar3 != 0) {
                memmove(plVar16,plVar16 + 1,sVar3);
              }
              local_118 = plVar16 + ((long)sVar3 >> 3);
              plVar12 = local_118;
              if (local_118 == plVar16) goto LAB_00e14874;
            }
            plVar16 = plVar16 + 1;
            plVar12 = local_118;
          } while (local_118 != plVar16);
        }
      }
      else {
        plVar16 = local_120;
        if (local_118 != local_120) {
          do {
            while( true ) {
              while (__dest_00 == plVar16) {
                plVar16 = plVar16 + 1;
                if (plVar12 == plVar16) goto LAB_00e14874;
              }
              lVar10 = (**(code **)(*(long *)*__dest_00 + 0xd8))();
              lVar11 = (**(code **)(*(long *)*plVar16 + 0xd8))();
              if (lVar10 != lVar11) break;
              puVar14 = *(ulong **)(*(long *)puVar5 + 0x98);
              uVar9 = *puVar14;
              uVar2 = puVar14[1];
              uVar15 = uVar2 ^ uVar9;
              *puVar14 = uVar15 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar15 << 0x10;
              puVar14[1] = uVar15 >> 0x1b | uVar15 << 0x25;
              if ((((int)uVar2 + (int)uVar9 & 1U) == 0) ||
                 (uVar9 = (**(code **)(*(long *)*plVar16 + 0x28))(), (uVar9 & 1) == 0)) {
                sVar3 = (long)local_118 - (long)(__dest_00 + 1);
                if (sVar3 != 0) {
                  memmove(__dest_00,__dest_00 + 1,sVar3);
                }
                plVar12 = __dest_00 + ((long)sVar3 >> 3);
                local_118 = plVar12;
                if (plVar12 != __dest_00) goto LAB_00e14704;
                goto LAB_00e148b0;
              }
              sVar3 = (long)local_118 - (long)(plVar16 + 1);
              if (sVar3 != 0) {
                memmove(plVar16,plVar16 + 1,sVar3);
              }
              plVar12 = plVar16 + ((long)sVar3 >> 3);
              local_118 = plVar12;
              if (plVar12 == plVar16) goto LAB_00e14874;
            }
            plVar16 = plVar16 + 1;
            plVar12 = local_118;
          } while (local_118 != plVar16);
        }
      }
LAB_00e14874:
      __dest_00 = __dest_00 + 1;
    } while (plVar12 != __dest_00);
LAB_00e148b0:
    plVar16 = local_120;
    puVar4 = (undefined4 *)PTR_DAT_02710860;
    if (local_120 == plVar12) goto LAB_00e1498c;
  }
  do {
    while (*(uint *)(param_1 + 0x50) <= uVar8) {
      (**(code **)(*(long *)*plVar16 + 0x20))();
      plVar16 = plVar16 + 1;
      if (plVar12 == plVar16) goto LAB_00e1498c;
    }
    uVar9 = (**(code **)(*(long *)*plVar16 + 0x28))();
    plVar1 = local_d8;
    pcVar13 = local_e8;
    if ((uVar9 & 1) != 0) {
      if (local_e8 == local_e0) {
        FUN_00dbc050(&local_f0,plVar16);
      }
      else {
        lVar10 = nn::os::GetTlsValue(*puVar4);
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00e14a78:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar1;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *(long *)pcVar13 = *plVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        local_e8 = local_e8 + 8;
      }
    }
    plVar16 = plVar16 + 1;
    uVar8 = uVar8 + 1;
  } while (plVar12 != plVar16);
LAB_00e1498c:
  if (((local_f0 != local_e8) &&
      (uVar9 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x68))(*(long **)(param_1 + 0xe8),1),
      pcVar13 = local_e8, (uVar9 & 1) == 0)) && (local_f0 != local_e8)) {
    uVar18 = 0;
    pcVar17 = local_f0;
    do {
      plVar12 = (long *)(**(code **)(**(long **)pcVar17 + 0x10))
                                  (*(long **)pcVar17,*(undefined8 *)(param_1 + 0xe8));
      if (plVar12 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar12 + 0x58))();
        uVar18 = uVar18 | uVar8 ^ 1;
      }
      pcVar17 = pcVar17 + 8;
    } while (pcVar13 != pcVar17);
    if ((uVar18 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x38))(*(long **)(param_1 + 0xe8),1);
    }
  }
  if (local_120 != (long *)0x0) {
    local_118 = local_120;
    (**(code **)(*local_108 + 0x18))(local_108,local_120,(long)local_110 - (long)local_120,8);
  }
  if (local_f0 != (code *)0x0) {
    local_e8 = local_f0;
    (**(code **)(*local_d8 + 0x18))(local_d8,local_f0,(long)local_e0 - (long)local_f0,8);
  }
  return;
}


