/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047c720; name: FUN_0047c720
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0047c720(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined4 param_5,
                byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char *__s;
  long *plVar19;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_02712a90;
  plVar11 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x128);
  if (plVar11 == (long *)0x0) {
    return 0x34;
  }
  plVar11[2] = param_1;
  puVar1 = PTR_DAT_027131f0;
  *(undefined8 *)((long)plVar11 + 0x4c) = 0;
  plVar11[5] = 0;
  plVar11[6] = 0;
  *(undefined4 *)((long)plVar11 + 0x54) = 0;
  *(undefined4 *)(plVar11 + 7) = 1;
  *(undefined8 *)((long)plVar11 + 0x44) = 0;
  *plVar11 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar11 + 0x3c) = 0;
  plVar11[0xc] = param_2[1];
  lVar15 = *param_2;
  *(undefined4 *)(plVar11 + 0x18) = 0;
  *(undefined4 *)(plVar11 + 0x17) = 0;
  plVar11[0xb] = lVar15;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x14] = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  *(undefined1 *)(plVar11 + 0x19) = 0xff;
  *(undefined1 *)(plVar11 + 0x1a) = 0xff;
  plVar11[0xf] = 0;
  plVar11[0x10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  puVar1 = PTR_DAT_027130b8 + 0x10;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x13] = (long)puVar1;
  *(undefined4 *)(plVar11 + 0x20) = 0x3f800000;
  *(undefined4 *)((long)plVar11 + 0x104) = 0x3f800000;
  plVar11[0x1f] = 0;
  plVar11[0x21] = 0;
  *(undefined1 *)((long)plVar11 + 0x124) = 0;
  *(byte *)((long)plVar11 + 0x125) = param_6 & 1;
  *(undefined4 *)(plVar11 + 0x24) = 2;
  *(undefined1 *)((long)plVar11 + 0x126) = 0;
  plVar11[0x22] = 0;
  plVar11[0x23] = 0;
  *(int *)((long)plVar11 + 0x54) = (int)param_2[1];
  uVar12 = FUN_0047bab0(plVar11);
  if ((uVar12 & 1) == 0) {
    if ((int)plVar11[0x24] == 0) {
      uVar8 = *(undefined4 *)((long)plVar11 + 0x3c);
    }
    else {
      plVar19 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x28);
      if (plVar19 == (long *)0x0) {
LAB_0047c8ec:
        uVar8 = *(undefined4 *)puVar2;
        (**(code **)*plVar11)(plVar11);
        FUN_00404870(uVar8,plVar11);
        return 0x34;
      }
      plVar19[3] = 0;
      plVar19[4] = 0;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = 0;
      FUN_004a5bd0(plVar19);
      puVar1 = PTR_DAT_02713208;
      *(undefined4 *)(plVar19 + 4) = 0;
      *plVar19 = (long)(puVar1 + 0x10);
      plVar19[2] = 0;
      plVar19[3] = 0x2b00000000;
      local_80._4_4_ = *(undefined4 *)((long)plVar11 + 100);
      iVar10 = (**(code **)(*plVar19 + 0x38))(plVar19,0,0,0,&local_80);
      if (iVar10 != 1) goto LAB_0047c8ec;
      FUN_00462550(plVar11 + 0x13);
      plVar11[0x1f] = (long)plVar19;
      *(undefined4 *)((long)plVar11 + 0x3c) = local_80._4_4_;
      *(undefined4 *)(plVar11 + 0x24) = 0;
      *(undefined4 *)(plVar11 + 3) = 0xb5;
      uVar8 = local_80._4_4_;
    }
  }
  else {
    uVar8 = *(undefined4 *)((long)plVar11 + 0x3c);
  }
  FUN_004b1170(uVar8,&local_80,&local_64);
  iVar10 = FUN_0047b210(local_64,plVar11,&local_80,3);
  puVar1 = PTR_DAT_02713240;
  if (iVar10 != 1) {
    uVar8 = *(undefined4 *)puVar2;
    (**(code **)*plVar11)(plVar11);
    FUN_00404870(uVar8,plVar11);
    return iVar10;
  }
  lVar15 = *(long *)(PTR_DAT_02713240 + 0x10);
  if (lVar15 != 0) {
    puVar2 = PTR_DAT_02712d28 + 0x10;
    puVar3 = PTR_DAT_02712d30 + 0x10;
LAB_0047ccf8:
    if (*(int *)(lVar15 + 0x58) == (int)plVar11[0xb]) {
      if ((*(char *)(lVar15 + 0x126) == '\0') && (*(int *)(lVar15 + 0x30) == 0)) {
        plVar19 = *(long **)PTR_DAT_02712d18;
        local_78 = (long *)0x0;
        local_70 = 0;
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
          if (plVar19 == (long *)0x0) {
            *(undefined8 *)PTR_DAT_02712d18 = 0;
          }
          else {
            *plVar19 = (long)puVar2;
            plVar19[1] = 0;
            puVar9 = PTR_DAT_02712d38;
            lVar16 = *(long *)(PTR_DAT_02712d38 + 8);
            plVar19[2] = 0;
            plVar19[3] = lVar16;
            plVar13 = (long *)(puVar9 + 0x10);
            if (*(long *)(puVar9 + 0x10) != 0) {
              plVar13 = (long *)(lVar16 + 0x10);
            }
            *plVar13 = (long)plVar19;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(long **)(puVar9 + 8) = plVar19;
            *plVar19 = (long)puVar3;
            plVar19[7] = 0;
            plVar19[8] = 0;
            plVar19[10] = 0;
            plVar19[0xb] = 0;
            plVar19[0xf] = 0;
            plVar19[0x10] = 0;
            plVar19[0x12] = 0;
            plVar19[0x13] = 0;
            plVar19[0x15] = 0;
            plVar19[0x16] = 0;
            *(long **)PTR_DAT_02712d18 = plVar19;
            *(undefined2 *)(plVar19 + 0x17) = 0x101;
          }
          if (local_78 != (long *)0x0) {
            local_70 = local_70 & 0xffffffff00000000;
            if (&local_80 != local_78) {
              FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
            }
            local_78 = (long *)0x0;
            local_70 = local_70 & 0xffffffff;
          }
        }
        uVar6 = *(uint *)(plVar19 + 0x16);
        if ((uVar6 < (uint)local_70) || (uVar6 <= local_70._4_4_)) {
          plVar13 = (long *)0x0;
          uVar7 = uVar6;
          uVar5 = local_70._4_4_;
joined_r0x0047ca14:
          local_70 = CONCAT44(uVar5,uVar6);
          if ((uVar7 != 0) && (*plVar13 = *(long *)plVar19[0x15], 1 < *(uint *)(plVar19 + 0x16))) {
            uVar12 = 1;
            do {
              uVar4 = uVar12 + 1;
              local_78[uVar12] = *(long *)(plVar19[0x15] + uVar12 * 8);
              uVar12 = uVar4;
            } while (uVar4 < *(uint *)(plVar19 + 0x16));
          }
        }
        else {
          uVar5 = local_70._4_4_ + (uVar6 - (uint)local_70);
          if (uVar5 < 2) {
            plVar13 = &local_80;
LAB_0047cbe8:
            uVar7 = *(uint *)(plVar19 + 0x16);
            local_78 = plVar13;
            goto joined_r0x0047ca14;
          }
          plVar13 = (long *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar5 << 3,8);
          if (plVar13 != (long *)0x0) {
            if ((local_78 != (long *)0x0) && (local_78 != plVar13)) {
              if (((uint)local_70 != 0) && (*plVar13 = *local_78, (uint)local_70 != 1)) {
                uVar7 = (uint)local_70 + 3 & 3;
                if ((local_70 & 0xffffffff) - 2 < 3) {
                  lVar17 = 1;
                }
                else {
                  lVar16 = 0;
                  do {
                    lVar17 = lVar16;
                    plVar13[lVar17 + 1] = local_78[lVar17 + 1];
                    plVar13[lVar17 + 2] = local_78[lVar17 + 2];
                    plVar13[lVar17 + 3] = local_78[lVar17 + 3];
                    plVar13[lVar17 + 4] = local_78[lVar17 + 4];
                    lVar16 = lVar17 + 4;
                  } while (((local_70 & 0xffffffff) - 1) - (ulong)uVar7 != lVar17 + 4);
                  lVar17 = lVar17 + 5;
                }
                if (uVar7 != 0) {
                  lVar17 = lVar17 << 3;
                  lVar16 = -(ulong)uVar7;
                  do {
                    *(undefined8 *)((long)plVar13 + lVar17) =
                         *(undefined8 *)((long)local_78 + lVar17);
                    lVar17 = lVar17 + 8;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 0);
                }
              }
              if (&local_80 != local_78) {
                FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
              }
            }
            goto LAB_0047cbe8;
          }
        }
        plVar19 = *(long **)(puVar1 + 0x10);
        if (*(long *)(lVar15 + 0x10) == 0) {
          for (; plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
            uVar12 = (**(code **)(*plVar19 + 0x60))(plVar19);
            if ((uVar12 & 1) != 0) goto LAB_0047cc88;
          }
        }
        else {
          for (; plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
            if (plVar19[2] == *(long *)(lVar15 + 0x10)) goto LAB_0047cc88;
          }
        }
      }
      goto LAB_0047cd18;
    }
    goto LAB_0047cd20;
  }
LAB_0047cd28:
  plVar11[1] = 0;
  if (*(long *)(puVar1 + 0x10) == 0) {
    *(long **)(puVar1 + 0x10) = plVar11;
    plVar19 = plVar11;
  }
  else {
    *(long **)(*(long *)(puVar1 + 8) + 8) = plVar11;
    plVar19 = *(long **)(puVar1 + 0x10);
  }
  puVar2 = PTR_DAT_02712a90;
  *(long **)(puVar1 + 8) = plVar11;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  if (param_1 == 0) {
    for (; plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
      uVar12 = (**(code **)(*plVar19 + 0x60))(plVar19);
      if ((uVar12 & 1) != 0) goto LAB_0047cdd4;
    }
  }
  else {
    for (; plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1]) {
      if (plVar19[2] == param_1) goto LAB_0047cdd4;
    }
  }
LAB_0047ce3c:
  FUN_004c5bc0(0);
  puVar2 = PTR_DAT_02713248;
  __s = *(char **)PTR_DAT_02713248;
  if (__s != (char *)0x0) {
    sVar14 = strlen(__s);
    __s[sVar14 - 5] = __s[sVar14 - 5] + '\x01';
    FUN_0047b010(plVar11,*(undefined8 *)puVar2);
  }
  return 1;
LAB_0047cc88:
  plVar13 = plVar19 + 4;
  if ((long *)plVar19[5] != (long *)0x0) {
    *(undefined4 *)(plVar19 + 6) = 0;
    if (plVar13 != (long *)plVar19[5]) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    plVar19[5] = 0;
    *(undefined4 *)((long)plVar19 + 0x34) = 0;
  }
  if (&local_80 == local_78) {
    *plVar13 = CONCAT44(local_80._4_4_,(undefined4)local_80);
    local_78 = plVar13;
  }
  plVar19[5] = (long)local_78;
  *(uint *)(plVar19 + 6) = (uint)local_70;
  *(uint *)((long)plVar19 + 0x34) = local_70._4_4_;
  *(undefined4 *)(plVar19 + 7) = 0;
  local_78 = (long *)0x0;
  local_70 = 0;
  FUN_0047d9f0(plVar13);
LAB_0047cd18:
  *(undefined1 *)(lVar15 + 0x126) = 1;
  *(undefined1 *)((long)plVar11 + 0x126) = 1;
LAB_0047cd20:
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == 0) goto LAB_0047cd28;
  goto LAB_0047ccf8;
LAB_0047cdd4:
  plVar13 = plVar19 + 4;
  if ((long *)plVar19[5] != (long *)0x0) {
    *(undefined4 *)(plVar19 + 6) = 0;
    if (plVar13 != (long *)plVar19[5]) {
      FUN_004047f0(*(undefined4 *)puVar2);
    }
    plVar19[5] = 0;
    *(undefined4 *)((long)plVar19 + 0x34) = 0;
  }
  plVar18 = (long *)param_4[1];
  if (param_4 == plVar18) {
    *plVar13 = *param_4;
    plVar18 = plVar13;
  }
  plVar19[5] = (long)plVar18;
  *(int *)(plVar19 + 6) = (int)param_4[2];
  *(undefined4 *)((long)plVar19 + 0x34) = *(undefined4 *)((long)param_4 + 0x14);
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(plVar19 + 7) = param_5;
  FUN_0047d9f0(plVar13);
  goto LAB_0047ce3c;
}


