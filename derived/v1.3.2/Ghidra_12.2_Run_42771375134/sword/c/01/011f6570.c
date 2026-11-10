/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6570; name: FUN_011f6570
 */


void FUN_011f6570(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  long lVar13;
  ushort *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ushort local_d8 [4];
  undefined *local_d0 [2];
  char local_c0;
  uint local_b0;
  undefined2 local_ac;
  undefined *local_a8 [2];
  char local_98;
  undefined *local_88 [2];
  char local_78;
  char local_68;
  undefined2 local_67;
  
  lVar10 = nn::time::StandardSteadyClock::now();
  puVar1 = PTR_DAT_02716b80;
  local_68 = '\0';
  lVar11 = *(long *)PTR_DAT_02716b80;
  if (lVar11 == 0) {
    lVar13 = FUN_007c5300(*(undefined8 *)(param_1 + 0x60));
    lVar17 = *(long *)(lVar13 + 0x48);
    puVar5 = (undefined8 *)PTR_DAT_02710958;
  }
  else {
    puVar12 = (undefined2 *)FUN_007c26b0();
    local_67 = *puVar12;
    local_68 = '\x01';
    lVar13 = FUN_007c5300(*(undefined8 *)(param_1 + 0x60));
    lVar17 = *(long *)(lVar13 + 0x48);
    puVar5 = (undefined8 *)PTR_DAT_02710958;
  }
  PTR_DAT_02710958 = (undefined *)puVar5;
  if (lVar17 == 0) {
    bVar4 = false;
    lVar11 = *(long *)puVar1;
joined_r0x011f67c4:
    if (lVar11 != 0) {
      thunk_FUN_007c2700();
    }
    if (bVar4) {
      if (*(char *)(param_1 + 0x78) == '\0') {
        *(long *)(param_1 + 0x80) = lVar10;
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
      else {
        *(long *)(param_1 + 0x80) = lVar10;
      }
    }
    else if (*(char *)(param_1 + 0x78) == '\0') {
      *(undefined1 *)(param_1 + 0x71) = 0;
      return;
    }
    *(bool *)(param_1 + 0x71) = lVar10 - *(long *)(param_1 + 0x80) < 0x3c;
    return;
  }
  plVar18 = *(long **)(lVar13 + 0x40);
  puVar1 = PTR_DAT_02725d38 + 0x10;
  puVar2 = PTR_DAT_02725d40 + 0x10;
  lVar17 = lVar17 * 0x180 + -0x180;
  puVar3 = PTR_DAT_02725d48 + 0x10;
  if (lVar11 != 0) goto LAB_011f6650;
  do {
    uVar15 = FUN_007c1f80(plVar18);
    (**(code **)(*plVar18 + 0x18))(&local_b0,plVar18);
    FUN_011f8cc0(local_88,uVar15,&local_b0);
    if ((char)local_b0 != '\0') {
      local_b0 = local_b0 & 0xffffff00;
    }
    FUN_011f8700(&local_b0,local_88);
    if ((char)local_b0 == '\0') {
      FUN_011f8800(local_d8,local_88);
      if ((char)local_d8[0] != '\0') {
        plVar16 = *(long **)(param_1 + 0x68);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x38))(plVar16,local_d0);
          if ((char)local_d8[0] == '\0') goto LAB_011f6758;
        }
        if (local_c0 != '\0') {
          local_c0 = '\0';
        }
        local_d8[0] = local_d8[0] & 0xff00;
        local_d0[0] = puVar1;
      }
LAB_011f6758:
    }
    else {
      FUN_0120f240(*puVar5,local_a8);
    }
    if ((char)local_b0 != '\0') {
      if (local_98 != '\0') {
        local_98 = '\0';
      }
      local_b0 = local_b0 & 0xffffff00;
      local_a8[0] = puVar3;
    }
    local_88[0] = puVar2;
    if (local_78 != '\0') {
      local_78 = '\0';
    }
    while( true ) {
      if (lVar17 == 0) {
        bVar4 = true;
        lVar11 = *(long *)PTR_DAT_02716b80;
        goto joined_r0x011f67c4;
      }
      plVar18 = plVar18 + 0x30;
      lVar17 = lVar17 + -0x180;
      if (local_68 == '\0') break;
LAB_011f6650:
      uVar15 = FUN_007c1d50(plVar18);
      local_b0 = (uint)uVar15;
      local_ac = (undefined2)((ulong)uVar15 >> 0x20);
      puVar14 = (ushort *)FUN_007c1b50(&local_b0);
      local_d8[0] = *puVar14;
      cVar6 = FUN_007c1820(local_d8);
      cVar7 = FUN_007c1820((ulong)&local_68 | 1);
      if (cVar6 == cVar7) break;
      if (*(char *)(param_1 + 0x70) == '\0') {
        bVar8 = FUN_007c1820(local_d8);
        bVar9 = FUN_007c1820((ulong)&local_68 | 1);
        *(bool *)(param_1 + 0x70) = bVar9 < bVar8;
      }
      else {
        *(undefined1 *)(param_1 + 0x70) = 1;
      }
    }
  } while( true );
}


