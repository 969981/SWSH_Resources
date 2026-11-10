/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00def540; name: FUN_00def540
 */


void FUN_00def540(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  char *local_88;
  undefined8 *local_80;
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  long alStack_60 [4];
  long *local_40;
  
  if (*(char *)(param_1 + 0xe3) == '\0') {
    return;
  }
  plVar15 = *(long **)(param_1 + 0x70);
  if (*(int *)(param_1 + 0xec) == 1) {
    if (*(char *)(param_1 + 0xe5) == '\0') {
      return;
    }
    local_90 = (undefined8 *)0xc0163eff1f402ca8;
    local_88 = "ba10_waitB01";
    local_80 = (undefined8 *)0xc;
    local_78 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_90);
    if ((uVar6 & 1) == 0) {
      return;
    }
    local_90 = (undefined8 *)0x450d36f15c2e779c;
    local_88 = "to_ba10_waitB01";
    local_80 = (undefined8 *)0xf;
    local_78 = 0;
    (**(code **)(*plVar15 + 0x1b0))(plVar15,&local_90);
    if (local_78 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    return;
  }
  if (*(int *)(param_1 + 0xec) != 2) {
    return;
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    if (*(char *)(param_1 + 0xe5) == '\0') {
      return;
    }
    local_88 = (char *)0x0;
    local_80 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_70 = (long *)FUN_0075ecb0();
    uStack_68 = 0x7ffffffffffffff;
    local_b0 = 0x38fcfdbb970f619;
    local_a8 = "kw33_moveA01";
    local_40 = (long *)0x0;
    local_a0 = 0xc;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) != 0) {
      local_b0 = 0xfd70b0039c798d65;
      local_a8 = "to_kw33_moveA01";
      local_a0 = 0xf;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00deff48;
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        *(long *)((long)pcVar4 + 0x18) = local_98;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
      }
    }
    local_b0 = 0xfc2cb2dbb59e59c8;
    local_a8 = "kw33_moveB01";
    local_a0 = 0xc;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) != 0) {
      local_b0 = 0xf4c7930397922e74;
      local_a8 = "to_kw33_moveB01";
      local_a0 = 0xf;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00deff48;
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        *(long *)((long)pcVar4 + 0x18) = local_98;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
      }
    }
    local_b0 = 0xf31679dbb059f963;
    local_a8 = "kw33_moveC01";
    local_a0 = 0xc;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) != 0) {
      local_b0 = 0xebb15a03924dce0f;
      local_a8 = "to_kw33_moveC01";
      local_a0 = 0xf;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00deff48;
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        *(long *)((long)pcVar4 + 0x18) = local_98;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
      }
    }
    local_b0 = 0x2edf34dbd1f8ec0a;
    local_a8 = "kw33_moveD01";
    local_a0 = 0xc;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) == 0) {
      lVar7 = *(long *)((ulong)&local_90 | 8) - (long)local_90;
    }
    else {
      local_b0 = 0xe29abd038d08c3be;
      local_a8 = "to_kw33_moveD01";
      local_a0 = 0xf;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        lVar7 = local_98;
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00deff48;
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        local_98 = 0;
        *(long *)((long)pcVar4 + 0x18) = lVar7;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
        plVar16 = (long *)((ulong)&local_90 | 8);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        plVar16 = (long *)((ulong)&local_90 | 8);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
      }
      lVar7 = *plVar16 - (long)local_90;
    }
    if (lVar7 != 0) {
      if (lVar7 == 0x20) {
        uVar6 = 0;
      }
      else {
        uVar11 = lVar7 >> 5;
        uVar12 = (0x40 - LZCOUNT(uVar11)) -
                 (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar11)) & 0x3f) & uVar11)
                        == 0);
        uVar6 = uVar12 >> 6;
        if ((uVar12 & 0x3f) != 0) {
          uVar6 = uVar6 + 1;
        }
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar12 / uVar6;
        }
        puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        uVar1 = 0;
        if (uVar6 <= uVar12) {
          uVar1 = 0xffffffffffffffff >> (-uVar2 & 0x3f);
        }
        do {
          uVar12 = uVar13 ^ uVar14;
          uVar6 = uVar13 + uVar14;
          uVar14 = uVar12 >> 0x1b | uVar12 << 0x25;
          uVar13 = uVar12 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar12 << 0x10;
          uVar6 = uVar6 & uVar1;
        } while (uVar11 <= uVar6);
        *puVar9 = uVar13;
        puVar9[1] = uVar14;
      }
      (**(code **)(*plVar15 + 0x1b0))(plVar15,local_90 + uVar6 * 4);
    }
    puVar17 = local_90;
    pcVar4 = local_88;
    if (local_90 == (undefined8 *)0x0) goto LAB_00defee4;
    while (puVar5 = (undefined8 *)pcVar4, puVar5 != puVar17) {
      pcVar4 = (char *)(puVar5 + -4);
      if (puVar5[-1] != 0) {
        (**(code **)(*(long *)(puVar5[-1] + 0x48) + 0x18))();
        puVar5[-1] = 0;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0xf0) != 4) {
      return;
    }
    local_88 = (char *)0x0;
    local_80 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_70 = (long *)FUN_0075ecb0();
    uStack_68 = 0x7ffffffffffffff;
    local_b0 = 0xa573df39852876bc;
    local_a8 = "kw32_happyB01";
    local_40 = (long *)0x0;
    local_a0 = 0xd;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) != 0) {
      local_b0 = 0xbc451bba79bd37d0;
      local_a8 = "to_kw32_happyB01";
      local_a0 = 0x10;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00deff48;
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        *(long *)((long)pcVar4 + 0x18) = local_98;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
      }
    }
    local_b0 = 0xae8a1c398a6cdded;
    local_a8 = "kw32_happyA01";
    local_a0 = 0xd;
    local_98 = 0;
    uVar6 = FUN_00df13c0(param_1,&local_b0);
    plVar16 = local_70;
    pcVar4 = local_88;
    if ((uVar6 & 1) == 0) {
      lVar7 = *(long *)((ulong)&local_90 | 8) - (long)local_90;
    }
    else {
      local_b0 = 0xc3a858ba7d900a81;
      local_a8 = "to_kw32_happyA01";
      local_a0 = 0x10;
      local_98 = 0;
      if (local_88 < local_80) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        lVar7 = local_98;
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00deff48:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *(undefined8 *)pcVar4 = local_b0;
        *(char **)((long)pcVar4 + 8) = local_a8;
        *(undefined8 *)((long)pcVar4 + 0x10) = local_a0;
        local_98 = 0;
        *(long *)((long)pcVar4 + 0x18) = lVar7;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        local_88 = (char *)((long)local_88 + 0x20);
        plVar16 = (long *)((ulong)&local_90 | 8);
      }
      else {
        FUN_00df2480(&local_90,&local_b0);
        plVar16 = (long *)((ulong)&local_90 | 8);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
      }
      lVar7 = *plVar16 - (long)local_90;
    }
    puVar17 = local_90;
    if (lVar7 != 0) {
      if (lVar7 == 0x20) {
        uVar6 = 0;
      }
      else {
        uVar11 = lVar7 >> 5;
        uVar12 = (0x40 - LZCOUNT(uVar11)) -
                 (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar11)) & 0x3f) & uVar11)
                        == 0);
        uVar6 = uVar12 >> 6;
        if ((uVar12 & 0x3f) != 0) {
          uVar6 = uVar6 + 1;
        }
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar12 / uVar6;
        }
        puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        uVar1 = 0;
        if (uVar6 <= uVar12) {
          uVar1 = 0xffffffffffffffff >> (-uVar2 & 0x3f);
        }
        do {
          uVar12 = uVar13 ^ uVar14;
          uVar6 = uVar13 + uVar14;
          uVar14 = uVar12 >> 0x1b | uVar12 << 0x25;
          uVar13 = uVar12 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar12 << 0x10;
          uVar6 = uVar6 & uVar1;
        } while (uVar11 <= uVar6);
        *puVar9 = uVar13;
        puVar9[1] = uVar14;
      }
      (**(code **)(*plVar15 + 0x1b0))(plVar15,local_90 + uVar6 * 4);
      puVar17 = local_90;
    }
    local_90 = puVar17;
    puVar5 = (undefined8 *)local_88;
    if (puVar17 == (undefined8 *)0x0) goto LAB_00defee4;
    while (puVar3 = puVar5, puVar3 != puVar17) {
      puVar5 = puVar3 + -4;
      if (puVar3[-1] != 0) {
        (**(code **)(*(long *)(puVar3[-1] + 0x48) + 0x18))();
        puVar3[-1] = 0;
      }
    }
  }
  local_88 = (char *)puVar17;
  (**(code **)(*local_70 + 0x18))(local_70,local_90,(long)local_80 - (long)local_90,8);
LAB_00defee4:
  if (alStack_60 == local_40) {
    pcVar10 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) {
      return;
    }
    pcVar10 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar10)();
  return;
}


