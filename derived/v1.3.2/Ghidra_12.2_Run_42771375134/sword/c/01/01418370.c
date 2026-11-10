/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01418370; name: FUN_01418370
 */


void FUN_01418370(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 **local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 *local_70;
  long local_68;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar19 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar19)(puVar19);
    lVar7 = FUN_01410b60();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        local_70 = puVar19 + -10;
        goto LAB_014183d4;
      }
    }
  }
  local_70 = (undefined8 *)0x0;
LAB_014183d4:
  uVar8 = FUN_0140ce50();
  FUN_01415fe0(uVar8,1);
  puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar20)(puVar20);
  puVar2 = PTR_DAT_02717528;
  puVar19 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), puVar19 = (undefined8 *)PTR_DAT_02717530,
     iVar4 != 0)) {
    uVar9 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar19 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar6 != puVar19; plVar6 = (long *)*plVar6) {
  }
  PTR_DAT_02717530 = (undefined *)puVar19;
  FUN_00ff86a0(&local_78,puVar20[0xd],0);
  puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar20)(puVar20);
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar19 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar19; plVar6 = (long *)*plVar6) {
  }
  FUN_00ff86a0(&local_80,puVar20[0xd],1);
  puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar20)(puVar20);
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar19 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar19; plVar6 = (long *)*plVar6) {
  }
  FUN_00ff86a0(&local_88,puVar20[0xd],4);
  FUN_014160a0(uVar8,&local_80);
  local_68 = *(long *)(param_1 + 0x98);
  if (local_68 == -0x340d631b7bddd9bb) {
    puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar12 = *puVar10;
    uVar15 = puVar10[1];
    uVar14 = uVar15 ^ uVar12;
    *puVar10 = uVar14 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar14 << 0x10;
    puVar10[1] = uVar14 >> 0x1b | uVar14 << 0x25;
    local_68 = *(long *)(&DAT_01d4d800 + ((ulong)(uint)((int)uVar15 + (int)uVar12) & 3) * 8);
    *(long *)(param_1 + 0x98) = local_68;
  }
  FUN_01416100(uVar8,&local_68);
  puVar2 = PTR_DAT_02710848;
  lVar7 = *(long *)(param_1 + 0x78);
  uVar12 = *(ulong *)(lVar7 + 0x20);
  uVar15 = *(ulong *)(lVar7 + 0x28);
  if (uVar12 == 1) {
    lVar7 = *(long *)(lVar7 + 0x30);
  }
  else {
    puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    if (uVar12 == 0) {
      uVar14 = *puVar10;
      uVar17 = puVar10[1];
      uVar16 = uVar17 ^ uVar14;
      *puVar10 = uVar16 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10;
      puVar10[1] = uVar16 >> 0x1b | uVar16 << 0x25;
      lVar7 = *(long *)(lVar7 + (uVar17 + uVar14) * 8 + 0x30);
    }
    else {
      uVar17 = (0x40 - LZCOUNT(uVar12)) -
               (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar12)) & 0x3f) & uVar12)
                      == 0);
      uVar14 = uVar17 >> 6;
      if ((uVar17 & 0x3f) != 0) {
        uVar14 = uVar14 + 1;
      }
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar17 / uVar14;
      }
      uVar1 = 0;
      if (uVar14 <= uVar17) {
        uVar1 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
      }
      uVar14 = *puVar10;
      uVar17 = puVar10[1];
      do {
        uVar18 = uVar14 ^ uVar17;
        uVar16 = uVar14 + uVar17;
        uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
        uVar14 = uVar18 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar18 << 0x10;
        uVar16 = uVar16 & uVar1;
      } while (uVar12 <= uVar16);
      *puVar10 = uVar14;
      puVar10[1] = uVar17;
      lVar7 = *(long *)(lVar7 + uVar16 * 8 + 0x30);
    }
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x78);
  if (uVar15 == 1) {
    lVar11 = *(long *)(lVar11 + uVar12 * 8 + 0x30);
  }
  else {
    puVar10 = *(ulong **)(*(long *)puVar2 + 0x98);
    if (uVar15 == 0) {
      uVar15 = *puVar10;
      uVar14 = puVar10[1];
      uVar17 = uVar14 ^ uVar15;
      *puVar10 = uVar17 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar17 << 0x10;
      puVar10[1] = uVar17 >> 0x1b | uVar17 << 0x25;
      lVar11 = *(long *)(lVar11 + (uVar14 + uVar15 + uVar12) * 8 + 0x30);
    }
    else {
      uVar17 = (0x40 - LZCOUNT(uVar15)) -
               (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar15)) & 0x3f) & uVar15)
                      == 0);
      uVar14 = uVar17 >> 6;
      if ((uVar17 & 0x3f) != 0) {
        uVar14 = uVar14 + 1;
      }
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar17 / uVar14;
      }
      uVar1 = 0;
      if (uVar14 <= uVar17) {
        uVar1 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
      }
      uVar14 = *puVar10;
      uVar17 = puVar10[1];
      do {
        uVar18 = uVar14 ^ uVar17;
        uVar16 = uVar14 + uVar17;
        uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
        uVar14 = uVar18 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar18 << 0x10;
        uVar16 = uVar16 & uVar1;
      } while (uVar15 <= uVar16);
      *puVar10 = uVar14;
      puVar10[1] = uVar17;
      lVar11 = *(long *)(lVar11 + (uVar16 + uVar12) * 8 + 0x30);
    }
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  uVar9 = FUN_01416420(uVar8);
  local_90 = &local_70;
  FUN_014c7bf0(uVar9,0,lVar7);
  FUN_014c7bf0(uVar9,1,lVar11);
  lVar3 = local_78;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(lVar3 + 0x60);
  if (lVar21 != 0) {
    plVar6 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (*(long *)(param_1 + 0xa0) == -0x340d631b7bddd9bb) {
    FUN_012ba510(&local_68);
    iVar4 = FUN_012f7310(local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(&DAT_0216cd70 + (long)iVar4 * 8);
  }
  uVar5 = FUN_01418f00(&local_90);
  FUN_014c7840(uVar9,2,lVar21,uVar5,0);
  plVar6 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar3 = local_78;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(lVar3 + 0x60);
  if (lVar21 != 0) {
    plVar6 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (*(long *)(param_1 + 0xa8) == -0x340d631b7bddd9bb) {
    puVar10 = *(ulong **)(*(long *)puVar2 + 0x98);
    uVar12 = *puVar10;
    uVar15 = puVar10[1];
    do {
      uVar14 = uVar12 ^ uVar15;
      iVar13 = (int)uVar15;
      iVar4 = (int)uVar12;
      uVar15 = uVar14 >> 0x1b | uVar14 << 0x25;
      uVar12 = uVar14 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar14 << 0x10;
      uVar14 = (ulong)(uint)(iVar4 + iVar13) & 0x1f;
    } while (0x18 < uVar14);
    *puVar10 = uVar12;
    puVar10[1] = uVar15;
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(&DAT_0216cbb8 + uVar14 * 8);
  }
  uVar5 = FUN_01418f00(&local_90);
  FUN_014c7840(uVar9,3,lVar21,uVar5,0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar3 = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(lVar3 + 0x60);
  if (lVar21 != 0) {
    plVar6 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  uVar12 = FUN_014b7940(lVar11);
  if (*(long *)(param_1 + 0xb0) == -0x340d631b7bddd9bb) {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(&DAT_0216cc80 + (uVar12 & 0xff) * 8);
  }
  uVar5 = FUN_01418f00(&local_90);
  FUN_014c7840(uVar9,4,lVar21,uVar5,0);
  plVar6 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  uVar5 = FUN_0087cd00(lVar11);
  FUN_014c9510(uVar9,5,uVar5);
  FUN_014162d0(uVar8,*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
  FUN_01416760(uVar8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


