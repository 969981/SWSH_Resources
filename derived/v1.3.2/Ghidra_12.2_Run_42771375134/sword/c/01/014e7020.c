/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e7020; name: FUN_014e7020
 */


void FUN_014e7020(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_16a;
  undefined8 uStack_162;
  undefined8 local_15a;
  undefined8 uStack_152;
  undefined8 local_14a;
  undefined8 uStack_142;
  undefined8 local_13a;
  undefined8 uStack_132;
  undefined8 local_12a;
  undefined8 uStack_122;
  undefined8 local_11a;
  undefined8 uStack_112;
  undefined8 local_10a;
  undefined8 uStack_102;
  undefined8 local_fa;
  undefined8 uStack_f2;
  undefined8 local_ea;
  undefined8 uStack_e2;
  undefined8 local_da;
  undefined8 uStack_d2;
  undefined8 local_ca;
  undefined8 uStack_c2;
  undefined8 local_ba;
  undefined8 uStack_b2;
  undefined8 local_aa;
  undefined8 uStack_a2;
  undefined8 local_9a;
  undefined8 uStack_92;
  undefined8 local_8a;
  undefined8 uStack_82;
  undefined8 local_7a;
  undefined8 uStack_72;
  
  uVar12 = *(undefined8 *)(param_1 + 8);
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710798;
  lVar8 = *(long *)PTR_DAT_02710798;
  lVar11 = *(long *)(lVar8 + 0x228);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(lVar8 + 0x220);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar16 = *(long **)(param_1 + 0x1c0);
  lVar10 = *plVar16;
  lVar1 = plVar16[1];
  while (lVar1 != lVar10) {
    lVar6 = *(long *)(lVar1 + -0x140);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *(long *)(lVar1 + -0x140) = 0;
    }
    lVar15 = lVar1 + -0x158;
    plVar13 = (long *)(lVar1 + -0x150);
    lVar6 = *plVar13;
    lVar1 = lVar15;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *plVar13 = 0;
    }
  }
  uVar14 = 0;
  plVar16[1] = lVar10;
  do {
    local_7a = 0;
    uStack_72 = 0;
    local_8a = 0;
    uStack_82 = 0;
    local_9a = 0;
    uStack_92 = 0;
    local_aa = 0;
    uStack_a2 = 0;
    local_ba = 0;
    uStack_b2 = 0;
    local_ca = 0;
    uStack_c2 = 0;
    local_da = 0;
    uStack_d2 = 0;
    local_ea = 0;
    uStack_e2 = 0;
    local_fa = 0;
    uStack_f2 = 0;
    local_10a = 0;
    uStack_102 = 0;
    local_11a = 0;
    uStack_112 = 0;
    local_12a = 0;
    uStack_122 = 0;
    local_13a = 0;
    uStack_132 = 0;
    local_14a = 0;
    uStack_142 = 0;
    local_15a = 0;
    uStack_152 = 0;
    local_16a = 0;
    uStack_162 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    FUN_015f9390(&local_1c0,uVar12);
    plVar13 = (long *)plVar16[1];
    if (plVar13 < (long *)plVar16[2]) {
      lVar15 = plVar16[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar1 = local_1a8;
      lVar10 = local_1b8;
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *plVar13 = local_1c0;
      local_1b8 = 0;
      plVar13[1] = lVar10;
      plVar13[2] = local_1b0;
      local_1a8 = 0;
      plVar13[3] = lVar1;
      memcpy(plVar13 + 4,&local_1a0,0x136);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      plVar16[1] = plVar16[1] + 0x158;
    }
    else {
      FUN_014e7ac0(plVar16,&local_1c0);
    }
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      local_1a8 = 0;
    }
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    lVar10 = plVar16[1];
    FUN_015f9390((undefined4 *)(lVar10 + -0x158),uVar12);
    *(undefined4 *)(lVar10 + -0x158) = 1;
    *(uint *)(lVar10 + -0x154) = uVar14;
    uVar17 = *(undefined8 *)(lVar10 + -0x150);
    uVar7 = FUN_0150a5f0(lVar11,uVar14);
    FUN_0077d520(uVar17,uVar7);
    uVar3 = FUN_015f91b0(uVar14);
    *(undefined4 *)(lVar10 + -0x144) = uVar3;
    uVar4 = FUN_0150a980(lVar11,uVar14);
    if (uVar4 != 0) {
      uVar18 = 0;
      do {
        uVar3 = FUN_0150a590(lVar11,uVar14,uVar18 & 0xffffffff);
        uVar5 = FUN_0150a5c0(lVar11,uVar14,uVar18 & 0xffffffff);
        FUN_01505f50(&local_1c0,lVar8,uVar3,uVar5,uVar12);
        (**(code **)(**(long **)(lVar10 + -0x140) + 0x28))(*(long **)(lVar10 + -0x140),local_1c0);
        *(undefined1 *)(lVar10 + -0x108 + uVar18) = 0;
        if (local_1c0 != 0) {
          (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
          local_1c0 = 0;
        }
        uVar18 = uVar18 + 1;
      } while (uVar4 != uVar18);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 6);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


