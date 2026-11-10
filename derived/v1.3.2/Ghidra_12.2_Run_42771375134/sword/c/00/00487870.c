/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00487870; name: FUN_00487870
 */


undefined4 FUN_00487870(long param_1,undefined4 *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  float fVar15;
  long local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  long *local_48;
  
  uVar13 = *(uint *)(param_1 + 0x9c) & 0x3ff;
  if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) && (uVar13 != 0)) &&
     (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
    local_80 = *(long *)(param_2 + 2);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xff;
    local_60 = 0xff;
    local_58 = 0;
    fVar15 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0x10,&local_80);
    uVar13 = (uint)fVar15;
  }
  plVar11 = *(long **)(param_1 + 0x70);
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  lVar8 = *(long *)(param_2 + 2);
  plVar9 = (long *)*plVar11;
  uVar1 = *(uint *)(plVar11 + 1);
  plVar11 = plVar9;
  if (uVar1 == 0) {
LAB_00487944:
    plVar14 = plVar11 + 1;
    local_48 = (long *)0x0;
    if ((plVar11 == plVar9 + (ulong)uVar1 * 2) || (local_48 = plVar14, (param_3 & 1) == 0)) {
      if (plVar11 == plVar9 + (ulong)uVar1 * 2) goto LAB_00487aa0;
      uVar5 = 1;
      uVar13 = uVar13 & 0xffff;
      goto joined_r0x00487a98;
    }
    lVar12 = *plVar14;
    if (lVar12 == 0) {
      return 1;
    }
    uVar3 = *(ushort *)(lVar12 + 0x58);
    uVar13 = (uint)uVar3;
    uVar5 = 1;
    if ((lVar12 == 0) || (*(char *)((long)param_2 + 0x1d) == '\0')) goto LAB_00487b18;
    if ((*(short *)(lVar12 + 0x58) == 0) ||
       ((int)(((uint)*(ushort *)(lVar12 + 0x70) - (uint)*(ushort *)(lVar12 + 0x72)) -
             (uint)*(ushort *)((long)param_2 + 0x1a)) < (int)(uint)uVar3)) {
      uVar5 = 1;
      goto joined_r0x00487a98;
    }
    local_80 = 0;
    uVar5 = FUN_004bf750(*param_2,lVar12 + 0x48,uVar13,lVar8,*(uint *)(param_1 + 0x9c) >> 10 & 1,
                         *(uint *)(param_1 + 0x9c) >> 0xb & 1,&local_80,1);
    *(short *)((long)param_2 + 0x1a) = *(short *)((long)param_2 + 0x1a) + 1;
    if (uVar3 == 0) {
      return uVar5;
    }
  }
  else {
    lVar12 = (ulong)uVar1 << 4;
    do {
      if (*plVar11 == lVar8) goto LAB_00487944;
      lVar12 = lVar12 + -0x10;
      plVar11 = plVar11 + 2;
    } while (lVar12 != 0);
    local_48 = (long *)0x0;
LAB_00487aa0:
    uVar13 = *(uint *)(param_1 + 0x9c) & 0x3ff;
    if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) && (uVar13 != 0)) &&
       (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xff;
      local_60 = 0xff;
      local_58 = 0;
      local_80 = lVar8;
      fVar15 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0x10,&local_80);
      uVar13 = (uint)fVar15;
      lVar8 = *(long *)(param_2 + 2);
    }
    uVar5 = FUN_00487be0(param_1,lVar8,&local_48,uVar13);
LAB_00487b18:
    uVar13 = uVar13 & 0xffff;
    plVar14 = local_48;
joined_r0x00487a98:
    if (uVar13 == 0) {
      return uVar5;
    }
  }
  puVar4 = PTR_DAT_02712a90;
  if (plVar14 == (long *)0x0) {
    return uVar5;
  }
  plVar11 = *(long **)(param_2 + 4);
  uVar1 = *(uint *)(plVar11 + 1);
  uVar13 = *(uint *)((long)plVar11 + 0xc);
  lVar8 = 0;
  if (*plVar14 != 0) {
    lVar8 = *plVar14 + 0x48;
  }
  if (uVar1 < uVar13) goto LAB_00487a54;
  uVar13 = uVar13 + 3;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    return uVar5;
  }
  puVar7 = (undefined8 *)*plVar11;
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
    uVar2 = *(uint *)(plVar11 + 1);
    if (uVar2 != 0) {
      *puVar6 = *puVar7;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar10 = 1;
        }
        else {
          lVar12 = 0;
          do {
            lVar10 = lVar12;
            puVar6[lVar10 + 1] = *(undefined8 *)(*plVar11 + lVar10 * 8 + 8);
            puVar6[lVar10 + 2] = *(undefined8 *)(*plVar11 + lVar10 * 8 + 0x10);
            lVar12 = lVar10 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar10 + 2);
          lVar10 = lVar10 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_00487a40;
        }
        puVar6[lVar10] = *(undefined8 *)(*plVar11 + lVar10 * 8);
      }
LAB_00487a40:
      puVar7 = (undefined8 *)*plVar11;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar7);
  }
  *plVar11 = (long)puVar6;
  *(uint *)((long)plVar11 + 0xc) = uVar13;
LAB_00487a54:
  if (uVar1 < uVar13) {
    plVar9 = (long *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 8);
    *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) + 1;
    if (plVar9 != (long *)0x0) {
      *plVar9 = lVar8;
    }
  }
  return uVar5;
}


