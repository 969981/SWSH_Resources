/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6440; name: FUN_004c6440
 */


void FUN_004c6440(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long local_70;
  long local_68;
  
  lVar11 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar11 = *(long *)(param_1 + 0x20) + -0x18;
  }
  lVar7 = FUN_0044fc50(lVar11 + 0x18);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(lVar11 + 0x28) + 0x48);
    lVar11 = FUN_0047d440();
    if (lVar11 == 0) {
      return;
    }
    local_70 = 0;
    local_68 = lVar7;
    for (lVar11 = *(long *)(param_1 + 0x48); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x40)) {
      plVar8 = (long *)FUN_004699d0(lVar11);
      if ((*plVar8 == 0) && (plVar8[1] == lVar7)) {
        return;
      }
    }
    if (*(uint *)((long)PTR_DAT_027134f8 + 8) != 0) {
      plVar8 = *(long **)PTR_DAT_027134f8;
      lVar11 = (ulong)*(uint *)((long)PTR_DAT_027134f8 + 8) << 3;
      do {
        lVar10 = *plVar8;
        if ((((*(long *)(lVar10 + 0x70) == 0) && (*(long *)(lVar10 + 0x78) == lVar7)) &&
            (*(int *)(lVar10 + 0x348) != 2)) &&
           ((*(long *)(lVar10 + 0x20) == 0 ||
            (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
        goto LAB_004c678c;
        plVar8 = plVar8 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
  else {
    if (*(char *)(lVar11 + 0x135) != '\0') {
      plVar8 = (long *)FUN_004958e0();
      puVar6 = PTR_DAT_02712d38;
      puVar5 = PTR_DAT_02712d18;
      puVar4 = PTR_DAT_02712a90;
      if ((char)plVar8[0x17] == '\0') {
        plVar8 = *(long **)PTR_DAT_02712d18;
        puVar1 = PTR_DAT_02712d28 + 0x10;
        puVar2 = PTR_DAT_02712d30 + 0x10;
        do {
          while (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
            *plVar8 = (long)puVar1;
            plVar8[1] = 0;
            lVar11 = *(long *)(puVar6 + 8);
            plVar8[2] = 0;
            plVar8[3] = lVar11;
            plVar13 = (long *)(puVar6 + 0x10);
            if (*(long *)(puVar6 + 0x10) != 0) {
              plVar13 = (long *)(lVar11 + 0x10);
            }
            *plVar13 = (long)plVar8;
            *(long **)(puVar6 + 8) = plVar8;
            *(int *)puVar6 = *(int *)puVar6 + 1;
            *plVar8 = (long)puVar2;
            plVar8[7] = 0;
            plVar8[8] = 0;
            plVar8[10] = 0;
            plVar8[0xb] = 0;
            plVar8[0xf] = 0;
            plVar8[0x10] = 0;
            plVar8[0x12] = 0;
            plVar8[0x13] = 0;
            plVar8[0x15] = 0;
            plVar8[0x16] = 0;
            *(long **)puVar5 = plVar8;
            *(undefined2 *)(plVar8 + 0x17) = 0x101;
            if ((char)plVar8[0x17] != '\0') goto LAB_004c6554;
          }
        } while ((char)plVar8[0x17] == '\0');
      }
LAB_004c6554:
      puVar4 = PTR_DAT_027134f8;
      if ((int)plVar8[0xb] == 0) {
        return;
      }
      plVar13 = (long *)plVar8[10];
      do {
        local_68 = *plVar13;
        local_70 = lVar7;
        for (lVar11 = *(long *)(param_1 + 0x48); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x40)) {
          plVar9 = (long *)FUN_004699d0(lVar11);
          if ((*plVar9 == local_70) && (plVar9[1] == local_68)) goto LAB_004c6628;
        }
        uVar3 = *(uint *)(puVar4 + 8);
        if (uVar3 != 0) {
          plVar9 = *(long **)puVar4;
          lVar11 = (ulong)uVar3 << 3;
          do {
            lVar10 = *plVar9;
            if ((((*(long *)(lVar10 + 0x70) == local_70) && (*(long *)(lVar10 + 0x78) == local_68))
                && (*(int *)(lVar10 + 0x348) != 2)) &&
               ((*(long *)(lVar10 + 0x20) == 0 ||
                (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
            goto LAB_004c6618;
            plVar9 = plVar9 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        lVar10 = FUN_004c6a50(&local_70);
        if (lVar10 != 0) {
LAB_004c6618:
          FUN_004d0be0(param_1,lVar10,0);
        }
LAB_004c6628:
        plVar13 = plVar13 + 1;
        if (plVar13 == (long *)(plVar8[10] + (ulong)*(uint *)(plVar8 + 0xb) * 8)) {
          return;
        }
      } while( true );
    }
    lVar12 = *(long *)(*(long *)(lVar11 + 0x28) + 0x48);
    local_68 = lVar12;
    local_70 = lVar7;
    for (lVar11 = *(long *)(param_1 + 0x48); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x40)) {
      plVar8 = (long *)FUN_004699d0(lVar11);
      if ((*plVar8 == lVar7) && (plVar8[1] == lVar12)) {
        return;
      }
    }
    if (*(uint *)((long)PTR_DAT_027134f8 + 8) != 0) {
      plVar8 = *(long **)PTR_DAT_027134f8;
      lVar11 = (ulong)*(uint *)((long)PTR_DAT_027134f8 + 8) << 3;
      do {
        lVar10 = *plVar8;
        if ((((*(long *)(lVar10 + 0x70) == lVar7) && (*(long *)(lVar10 + 0x78) == lVar12)) &&
            (*(int *)(lVar10 + 0x348) != 2)) &&
           ((*(long *)(lVar10 + 0x20) == 0 ||
            (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
        goto LAB_004c678c;
        plVar8 = plVar8 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
  lVar10 = FUN_004c6a50(&local_70);
  if (lVar10 != 0) {
LAB_004c678c:
    FUN_004d0be0(param_1,lVar10,0);
  }
  return;
}


