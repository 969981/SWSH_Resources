/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b7f80; name: FUN_004b7f80
 */


long FUN_004b7f80(long *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint unaff_w23;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 local_64;
  uint *local_58;
  
  local_64 = param_3;
  local_58 = param_2;
  iVar7 = (**(code **)(*param_1 + 0x88))();
  if (iVar7 != 4) {
    uVar16 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar9 = param_1[2];
    uVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar16,(int)lVar9,4,uVar8);
    return 0x5a;
  }
  local_58 = param_2 + 1;
  lVar9 = FUN_004854e0(param_1,&local_58,&local_64,0);
  if ((int)lVar9 != 1) {
    return lVar9;
  }
  uVar11 = *local_58;
  iVar7 = *(int *)((long)local_58 + 1);
  uVar8 = *(undefined4 *)((long)local_58 + 5);
  bVar2 = *(byte *)((long)local_58 + 9);
  local_58 = (uint *)((long)local_58 + 10);
  if (((int)param_1[0x1f] != iVar7) ||
     (puVar12 = local_58, *(uint *)((long)param_1 + 0xf4) != (uint)(byte)uVar11)) {
    *(uint *)((long)param_1 + 0xf4) = (uint)(byte)uVar11;
    *(int *)(param_1 + 0x1f) = iVar7;
    lVar9 = FUN_004b79b0(param_1 + 0x1b);
    if ((int)lVar9 != 1) {
      return lVar9;
    }
    puVar12 = local_58;
  }
  *(undefined4 *)((long)param_1 + 0xfc) = uVar8;
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xc0000000 |
       *(uint *)((long)param_1 + 0x9c) & 0x1fffffff | (uint)(bVar2 != 0) << 0x1d;
  local_58 = puVar12 + 1;
  uVar11 = *puVar12;
  if (uVar11 != 0) {
    lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 3);
    param_1[0x17] = lVar9;
    if (lVar9 == 0) {
      return 0x34;
    }
    uVar13 = 0;
    *(uint *)((long)param_1 + 0xc4) = uVar11;
    do {
      uVar14 = *local_58;
      local_58 = local_58 + 1;
      lVar9 = (**(code **)(*param_1 + 0x58))(param_1,uVar14);
      iVar7 = (int)lVar9;
      if (iVar7 != 0xf && iVar7 != 1) {
        return lVar9;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar11);
    if (iVar7 != 1) {
      return lVar9;
    }
  }
  puVar5 = PTR_DAT_02712a90;
  uVar11 = *local_58;
  if (uVar11 == 0) {
    uVar13 = local_58[1];
    local_58 = local_58 + 2;
    puVar4 = (undefined4 *)PTR_DAT_02712a90;
  }
  else {
    local_58 = local_58 + 1;
    puVar10 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 5);
    param_1[0x23] = (long)puVar10;
    if (puVar10 == (undefined8 *)0x0) {
      uVar13 = *local_58;
      unaff_w23 = 0;
      local_58 = local_58 + 1;
      goto LAB_004b81c4;
    }
    uVar13 = 0;
    *(uint *)(param_1 + 0x24) = uVar11;
    param_1[0x22] = (long)puVar10;
    do {
      puVar3 = puVar10;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar13 = uVar13 + 1;
      *puVar3 = puVar3 + 4;
      puVar10 = puVar3 + 4;
    } while (uVar13 < *(uint *)(param_1 + 0x24));
    *puVar3 = 0;
    puVar12 = local_58 + 1;
    uVar13 = *local_58;
    local_58 = puVar12;
    puVar4 = (undefined4 *)PTR_DAT_02712a90;
    if (uVar11 != 0) {
      unaff_w23 = 0;
      plVar15 = (long *)param_1[0x20];
      if (plVar15 != (long *)0x0) goto LAB_004b81cc;
LAB_004b81e0:
      plVar15 = (long *)param_1[0x22];
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)FUN_00404690(*(undefined4 *)puVar5,0x20);
        if (plVar15 == (long *)0x0) {
          return 2;
        }
        plVar15[2] = 0;
        plVar15[3] = 0;
        *plVar15 = param_1[0x22];
        param_1[0x22] = (long)plVar15;
        puVar10 = (undefined8 *)param_1[0x21];
        puVar12 = local_58;
      }
      else {
        puVar10 = (undefined8 *)param_1[0x21];
        puVar12 = local_58;
      }
      if (puVar10 == (undefined8 *)0x0) {
        param_1[0x20] = (long)plVar15;
      }
      else {
        *puVar10 = plVar15;
        plVar15 = (long *)param_1[0x22];
      }
      param_1[0x21] = (long)plVar15;
      param_1[0x22] = *plVar15;
      *plVar15 = 0;
      plVar15 = (long *)param_1[0x21];
      *(int *)((long)param_1 + 0x124) = *(int *)((long)param_1 + 0x124) + 1;
      *(uint *)(plVar15 + 1) = uVar13;
      while( true ) {
        local_58 = puVar12 + 1;
        uVar13 = *puVar12;
        if (uVar13 != 0) {
          lVar9 = FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar13 << 2);
          plVar15[2] = lVar9;
          if (lVar9 != 0) {
            *(uint *)((long)plVar15 + 0x1c) = uVar13;
          }
          uVar14 = 1;
          do {
            uVar1 = *local_58;
            local_58 = local_58 + 1;
            lVar9 = FUN_004b8420(lVar9,plVar15 + 2,uVar1);
            bVar6 = uVar14 < uVar13;
            uVar14 = uVar14 + 1;
          } while ((int)lVar9 == 1 && bVar6);
          if ((int)lVar9 != 1) {
            return lVar9;
          }
        }
        puVar12 = local_58 + 1;
        uVar13 = *local_58;
        unaff_w23 = unaff_w23 + 1;
        local_58 = puVar12;
        puVar4 = (undefined4 *)PTR_DAT_02712a90;
        if (uVar11 <= unaff_w23) break;
LAB_004b81c4:
        plVar15 = (long *)param_1[0x20];
        puVar12 = local_58;
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_004b81e0;
LAB_004b81cc:
          if (*(uint *)(plVar15 + 1) == uVar13) break;
          plVar15 = (long *)*plVar15;
        }
      }
    }
  }
  PTR_DAT_02712a90 = (undefined *)puVar4;
  if (uVar13 != 0) {
    puVar10 = (undefined8 *)FUN_00404690(*puVar4,(ulong)uVar13 * 0x18);
    param_1[0x28] = (long)puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = 0;
      *(uint *)(param_1 + 0x29) = uVar13;
      param_1[0x27] = (long)puVar10;
      do {
        puVar3 = puVar10;
        *puVar3 = puVar3 + 3;
        uVar11 = uVar11 + 1;
        puVar10 = puVar3 + 3;
      } while (uVar11 < *(uint *)(param_1 + 0x29));
      *puVar3 = 0;
      if (uVar13 == 0) {
        return 1;
      }
    }
    uVar11 = 0;
    do {
      puVar12 = (uint *)((long)local_58 + 0xe);
      uVar14 = *local_58;
      uVar1 = local_58[1];
      bVar2 = *(byte *)((long)local_58 + 5);
      uVar16 = *(undefined8 *)((long)local_58 + 6);
      for (plVar15 = (long *)param_1[0x25]; local_58 = puVar12, plVar15 != (long *)0x0;
          plVar15 = (long *)*plVar15) {
        if (*(uint *)(plVar15 + 1) == uVar14) goto LAB_004b83d0;
      }
      plVar15 = (long *)param_1[0x27];
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)FUN_00404690(*puVar4,0x18);
        if (plVar15 == (long *)0x0) {
          return 2;
        }
        *plVar15 = param_1[0x27];
        param_1[0x27] = (long)plVar15;
        puVar10 = (undefined8 *)param_1[0x26];
        if (puVar10 != (undefined8 *)0x0) goto LAB_004b8378;
LAB_004b83a8:
        param_1[0x25] = (long)plVar15;
      }
      else {
        puVar10 = (undefined8 *)param_1[0x26];
        if (puVar10 == (undefined8 *)0x0) goto LAB_004b83a8;
LAB_004b8378:
        *puVar10 = plVar15;
        plVar15 = (long *)param_1[0x27];
      }
      param_1[0x26] = (long)plVar15;
      param_1[0x27] = *plVar15;
      *plVar15 = 0;
      *(int *)((long)param_1 + 0x14c) = *(int *)((long)param_1 + 0x14c) + 1;
      plVar15 = (long *)param_1[0x26];
      *(uint *)((long)plVar15 + 8) = uVar14;
LAB_004b83d0:
      uVar11 = uVar11 + 1;
      unaff_w23 = unaff_w23 & 0xffffff00 |
                  unaff_w23 & 0xe0 |
                  ((byte)uVar1 & 1) << 3 | bVar2 & 7 | ((byte)((byte)uVar1 >> 1) & 1) << 4;
      *(undefined8 *)((long)plVar15 + 0xc) = uVar16;
      *(uint *)((long)plVar15 + 0x14) = unaff_w23;
    } while (uVar11 < uVar13);
  }
  return 1;
}


