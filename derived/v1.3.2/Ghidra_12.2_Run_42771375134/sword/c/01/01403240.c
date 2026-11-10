/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01403240; name: FUN_01403240
 */


void FUN_01403240(long param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  char *local_100;
  char *local_f8;
  char *local_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  uint *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_6c [3];
  
  plVar25 = (long *)PTR_DAT_02710798;
  local_6c[0] = 0;
  bVar8 = *(int *)(param_1 + 0x98) != 0;
  uVar10 = 2;
  if (!bVar8) {
    uVar10 = 1;
  }
  uVar27 = (uint)bVar8;
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar27 = uVar10;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (uVar27 != -(uint)(*(int *)(param_1 + 0xbc) != 0)) {
    return;
  }
  lVar28 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar28 != 0) {
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x10))();
  }
  uVar9 = FUN_00888c50(0x95,0xe);
  uVar10 = FUN_01520330(lVar28,uVar9);
  puVar11 = (uint *)FUN_015200a0(lVar28,uVar9,local_6c);
  puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar12 = (long *)(**(code **)*puVar23)(puVar23);
  lVar13 = FUN_013f9d40();
  for (; plVar12 != (long *)lVar13; plVar12 = (long *)*plVar12) {
  }
  lVar13 = *(long *)(puVar23[9] + 0x460);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  plVar12 = *(long **)(param_1 + 8);
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = plVar12;
  if (uVar10 != 0) {
    uVar27 = 0;
    do {
      local_a8 = 0;
      lVar26 = *(long *)(lVar13 + 0x4d8);
      local_b0 = puVar11;
      if (lVar26 != 0) {
        (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
      }
      FUN_01329d10(auStack_d0,lVar26,*local_b0 & 0x7fff);
      local_100 = (char *)0x2854d33b80ec1509;
      local_f8 = "rare_grade";
      local_f0 = &DAT_0000000a;
      FUN_012b4250(auStack_c0,auStack_d0,&local_100);
      local_a8 = FUN_012b4420(auStack_c0,0);
      if (lVar26 != 0) {
        (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
      }
      plVar25 = local_88;
      puVar23 = local_98;
      if (local_98 == local_90) {
        FUN_01405640(&local_a0,&local_b0);
      }
      else {
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_014037f4;
        *(long **)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = plVar25;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        *puVar23 = local_b0;
        puVar23[1] = CONCAT44(uStack_a4,local_a8);
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        local_98 = local_98 + 2;
      }
      uVar27 = uVar27 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar27 < uVar10);
    plVar12 = *(long **)(param_1 + 8);
    plVar25 = (long *)PTR_DAT_02710798;
  }
  puVar23 = local_98;
  puVar6 = PTR_DAT_02710860;
  local_f8 = (char *)0x0;
  local_f0 = (char *)0x0;
  local_100 = (char *)0x0;
  local_d8 = 0;
  uStack_e0 = 0;
  local_e8 = plVar12;
  if ((long)local_98 - (long)local_a0 == 0) {
    lVar26 = 0;
  }
  else {
    puVar24 = local_a0 + 2;
    puVar16 = local_a0;
    if (puVar24 != local_98) {
      uVar20 = ((long)local_98 - (long)local_a0) - 0x20;
      puVar17 = puVar24;
      puVar14 = local_a0;
      if (((uint)uVar20 >> 4 & 1) == 0) {
        puVar17 = local_a0 + 4;
        puVar14 = puVar24;
        puVar16 = puVar24;
        if (*(int *)(local_a0 + 1) <= *(int *)(local_a0 + 3)) {
          puVar16 = local_a0;
        }
      }
      if (0xf < uVar20) {
        do {
          piVar1 = (int *)(puVar14 + 3);
          piVar2 = (int *)(puVar17 + 3);
          puVar14 = puVar17 + 2;
          puVar24 = puVar17;
          if (*(int *)(puVar16 + 1) <= *piVar1) {
            puVar24 = puVar16;
          }
          puVar17 = puVar17 + 4;
          puVar16 = puVar14;
          if (*(int *)(puVar24 + 1) <= *piVar2) {
            puVar16 = puVar24;
          }
        } while (local_98 != puVar17);
      }
    }
    iVar5 = *(int *)(puVar16 + 1);
    puVar24 = local_a0;
    do {
      while( true ) {
        plVar12 = local_e8;
        pcVar7 = local_f8;
        if (*(int *)(puVar24 + 1) == iVar5) break;
LAB_0140360c:
        puVar24 = puVar24 + 2;
        if (puVar23 == puVar24) goto LAB_01403634;
      }
      if (local_f8 != local_f0) {
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (0xf < *(ulong *)(lVar26 + 0x80)) {
LAB_014037f4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = plVar12;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        uVar4 = puVar24[1];
        *(undefined8 *)pcVar7 = *puVar24;
        *(undefined8 *)(pcVar7 + 8) = uVar4;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        local_f8 = local_f8 + 0x10;
        goto LAB_0140360c;
      }
      FUN_01405640(&local_100,puVar24);
      puVar24 = puVar24 + 2;
    } while (puVar23 != puVar24);
LAB_01403634:
    lVar26 = (long)local_f8 - (long)local_100;
    if (lVar26 == 0x10) {
      uVar19 = 0;
      goto LAB_014036f0;
    }
  }
  puVar15 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  if (lVar26 == 0) {
    uVar20 = *puVar15;
    uVar19 = puVar15[1] + uVar20;
    uVar21 = puVar15[1] ^ uVar20;
    *puVar15 = uVar21 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar21 << 0x10;
    puVar15[1] = uVar21 >> 0x1b | uVar21 << 0x25;
  }
  else {
    uVar21 = lVar26 >> 4;
    uVar18 = (0x40 - LZCOUNT(uVar21)) -
             (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar21)) & 0x3f) & uVar21) ==
                    0);
    uVar20 = uVar18 >> 6;
    if ((uVar18 & 0x3f) != 0) {
      uVar20 = uVar20 + 1;
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar18 / uVar20;
    }
    uVar3 = 0;
    if (uVar20 <= uVar18) {
      uVar3 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
    }
    uVar20 = *puVar15;
    uVar18 = puVar15[1];
    do {
      uVar22 = uVar20 ^ uVar18;
      uVar19 = uVar20 + uVar18;
      uVar18 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar20 = uVar22 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar22 << 0x10;
      uVar19 = uVar19 & uVar3;
    } while (uVar21 <= uVar19);
    *puVar15 = uVar20;
    puVar15[1] = uVar18;
  }
LAB_014036f0:
  uVar10 = **(uint **)(local_100 + uVar19 * 0x10);
  *(uint *)(param_1 + 0x98) = uVar10 & 0x7fff;
  lVar26 = *(long *)(*plVar25 + 0x1d8);
  if (lVar26 == 0) {
    FUN_01520b70(0,uVar10 & 0x7fff,1);
  }
  else {
    plVar25 = (long *)(lVar26 + 0x48);
    (**(code **)(*plVar25 + 0x10))(plVar25);
    FUN_01520b70(lVar26,*(undefined4 *)(param_1 + 0x98),1);
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (local_100 != (char *)0x0) {
    local_f8 = local_100;
    (**(code **)(*local_e8 + 0x18))(local_e8,local_100,(long)local_f0 - (long)local_100,8);
  }
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - (long)local_a0,8);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar28 != 0) {
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x18))((long *)(lVar28 + 0x48));
  }
  return;
}


