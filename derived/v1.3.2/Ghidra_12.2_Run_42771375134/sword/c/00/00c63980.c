/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c63980; name: FUN_00c63980
 */


undefined8 FUN_00c63980(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long local_160;
  int local_158;
  long *local_150 [2];
  uint local_140 [4];
  long *local_130;
  long *local_128;
  undefined4 local_120;
  int local_118;
  long *local_110;
  long *local_108;
  int local_100;
  int local_f8;
  long *local_f0;
  long *local_e8;
  int local_e0;
  int local_d8;
  long *local_d0;
  long *local_c8;
  undefined4 local_c0;
  int local_b8;
  long *local_b0;
  long *local_a8;
  int local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  long local_78;
  long lStack_70;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  uVar17 = param_2 - 1;
  if (uVar17 < 6) {
    uVar9 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
    iVar19 = *(int *)(&DAT_0215d5c0 + uVar9);
    iVar13 = *(int *)(&DAT_0215d600 + uVar9);
    uVar17 = *(uint *)(&DAT_0215d5e0 + uVar9);
    iVar15 = *(int *)(&DAT_0215d620 + uVar9);
    if (uVar17 != *(uint *)(param_1 + 0x21f0)) goto LAB_00c63a0c;
LAB_00c63a34:
    bVar4 = iVar13 == *(int *)(param_1 + 0x21ec);
    bVar5 = *(int *)(param_1 + 0x21f4) == 0;
    uVar9 = 1;
    if (bVar5) {
      uVar9 = 2;
    }
    if (bVar5 && bVar4) {
      uVar9 = 3;
    }
    uVar6 = 6;
    if (iVar19 != *(int *)(param_1 + 0x21f8)) {
      uVar6 = 4;
    }
    if ((bVar5 && bVar4) && iVar15 == *(int *)(param_1 + 0x21e8)) {
      uVar9 = uVar6;
    }
  }
  else {
    iVar19 = 0;
    uVar17 = 0;
    iVar13 = 0;
    iVar15 = 0;
    if (*(int *)(param_1 + 0x21f0) == 0) goto LAB_00c63a34;
LAB_00c63a0c:
    uVar9 = 0;
  }
  local_150[0] = (long *)(param_1 + 0x1558);
  local_150[1] = (long *)(param_1 + 0x1000);
  local_128 = (long *)(param_1 + 0x1ab0);
  local_140[2] = 5;
  local_130 = (long *)(param_1 + 0x1c18);
  local_110 = (long *)(param_1 + 0xe68);
  local_108 = (long *)(param_1 + 0xcd0);
  local_f0 = (long *)(param_1 + 0x778);
  local_e8 = (long *)(param_1 + 0x220);
  local_158 = 4;
  local_d0 = (long *)(param_1 + 0x1fc0);
  local_c8 = (long *)(param_1 + 0x1ee8);
  local_c0 = 0;
  if (iVar19 != 0) {
    local_c0 = 4;
  }
  local_118 = 3;
  local_b0 = (long *)(param_1 + 0x2140);
  local_a8 = (long *)(param_1 + 0x2098);
  local_f8 = 2;
  local_120 = 0;
  local_d8 = 6;
  local_b8 = 7;
  local_98 = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_94 = 0;
  uStack_90 = 0;
  local_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  local_140[0] = uVar17;
  local_100 = iVar13;
  local_e0 = iVar15;
  local_a0 = iVar19;
  if (lVar10 == 0) {
LAB_00c63c10:
    if (uVar9 == 1) {
LAB_00c63c4c:
      if (((local_130 == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_130 + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_128 == (long *)0x0 ||
          (uVar6 = (**(code **)(*local_128 + 0x20))(), (uVar6 & 1) != 0)))) {
LAB_00c63c9c:
        if (((local_110 == (long *)0x0) ||
            (uVar6 = (**(code **)(*local_110 + 0x20))(), (uVar6 & 1) != 0)) &&
           ((local_108 == (long *)0x0 ||
            (uVar6 = (**(code **)(*local_108 + 0x20))(), (uVar6 & 1) != 0)))) {
LAB_00c63ccc:
          if (((local_f0 == (long *)0x0) ||
              (uVar6 = (**(code **)(*local_f0 + 0x20))(), (uVar6 & 1) != 0)) &&
             ((local_e8 == (long *)0x0 ||
              (uVar6 = (**(code **)(*local_e8 + 0x20))(), (uVar6 & 1) != 0)))) {
LAB_00c63cfc:
            if (((((local_d0 == (long *)0x0) ||
                  (uVar6 = (**(code **)(*local_d0 + 0x20))(), (uVar6 & 1) != 0)) &&
                 ((local_c8 == (long *)0x0 ||
                  (uVar6 = (**(code **)(*local_c8 + 0x20))(), (uVar6 & 1) != 0)))) &&
                ((local_b0 == (long *)0x0 ||
                 (uVar6 = (**(code **)(*local_b0 + 0x20))(), (uVar6 & 1) != 0)))) &&
               ((local_a8 == (long *)0x0 ||
                (uVar6 = (**(code **)(*local_a8 + 0x20))(), (uVar6 & 1) != 0)))) goto LAB_00c63d5c;
          }
        }
      }
    }
    else {
      if (uVar9 == 0) {
        if (((local_150[0] != (long *)0x0) &&
            (uVar6 = (**(code **)(*local_150[0] + 0x20))(), (uVar6 & 1) == 0)) ||
           ((local_150[1] != (long *)0x0 &&
            (uVar6 = (**(code **)(*local_150[1] + 0x20))(), (uVar6 & 1) == 0)))) goto LAB_00c64698;
        goto LAB_00c63c4c;
      }
      if (uVar9 < 3) goto LAB_00c63c9c;
      if (uVar9 == 3) goto LAB_00c63ccc;
      if (uVar9 < 5) goto LAB_00c63cfc;
LAB_00c63d5c:
      if ((((long *)CONCAT44(local_8c,uStack_90) == (long *)0x0) ||
          (uVar6 = (**(code **)(*(long *)CONCAT44(local_8c,uStack_90) + 0x20))(), (uVar6 & 1) != 0))
         && (((long *)CONCAT44(local_84,uStack_88) == (long *)0x0 ||
             (uVar6 = (**(code **)(*(long *)CONCAT44(local_84,uStack_88) + 0x20))(),
             (uVar6 & 1) != 0)))) goto LAB_00c63f50;
    }
LAB_00c64698:
    uVar7 = 0;
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    FUN_00c58c20(&local_160,lVar10);
    if (local_160 == 0) goto LAB_00c63c10;
    FUN_00c62ba0(&local_78);
    lVar10 = local_78;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (local_160 != 0) {
      (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
      local_160 = 0;
    }
    if (lVar10 == 0) goto LAB_00c63c10;
    if (uVar9 == 0) {
      if (local_158 != 0) {
        FUN_00ca8d60(lVar10);
      }
      if (((local_150[0] == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_150[0] + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_150[1] == (long *)0x0 ||
          (uVar6 = (**(code **)(*local_150[1] + 0x20))(), (uVar6 & 1) != 0)))) goto LAB_00c63dd0;
      goto LAB_00c64698;
    }
    if (uVar9 == 1) {
LAB_00c63dd0:
      if (local_140[2] != 0) {
        FUN_00ca8d60(lVar10);
      }
      if (((local_130 == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_130 + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_128 == (long *)0x0 ||
          (uVar6 = (**(code **)(*local_128 + 0x20))(), (uVar6 & 1) != 0)))) goto LAB_00c63e10;
      goto LAB_00c64698;
    }
    if (uVar9 < 3) {
LAB_00c63e10:
      if (local_118 != 0) {
        FUN_00ca8d60(lVar10);
      }
      if (((local_110 == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_110 + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_108 == (long *)0x0 ||
          (uVar6 = (**(code **)(*local_108 + 0x20))(), (uVar6 & 1) != 0)))) goto LAB_00c63e50;
      goto LAB_00c64698;
    }
    if (uVar9 == 3) {
LAB_00c63e50:
      if (local_f8 != 0) {
        FUN_00ca8d60(lVar10);
      }
      if (((local_f0 == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_f0 + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_e8 == (long *)0x0 || (uVar6 = (**(code **)(*local_e8 + 0x20))(), (uVar6 & 1) != 0))
         )) goto LAB_00c63e90;
      goto LAB_00c64698;
    }
    if (uVar9 < 5) {
LAB_00c63e90:
      if (local_d8 != 0) {
        FUN_00ca8d60(lVar10);
      }
      if (((local_d0 == (long *)0x0) ||
          (uVar6 = (**(code **)(*local_d0 + 0x20))(), (uVar6 & 1) != 0)) &&
         ((local_c8 == (long *)0x0 || (uVar6 = (**(code **)(*local_c8 + 0x20))(), (uVar6 & 1) != 0))
         )) {
        if (local_b8 != 0) {
          FUN_00ca8d60(lVar10);
        }
        if (((local_b0 == (long *)0x0) ||
            (uVar6 = (**(code **)(*local_b0 + 0x20))(), (uVar6 & 1) != 0)) &&
           ((local_a8 == (long *)0x0 ||
            (uVar6 = (**(code **)(*local_a8 + 0x20))(), (uVar6 & 1) != 0)))) goto LAB_00c63f10;
      }
      goto LAB_00c64698;
    }
LAB_00c63f10:
    if (local_98 != 0) {
      FUN_00ca8d60(lVar10);
    }
    if ((((long *)CONCAT44(local_8c,uStack_90) != (long *)0x0) &&
        (uVar6 = (**(code **)(*(long *)CONCAT44(local_8c,uStack_90) + 0x20))(), (uVar6 & 1) == 0))
       || (((long *)CONCAT44(local_84,uStack_88) != (long *)0x0 &&
           (uVar6 = (**(code **)(*(long *)CONCAT44(local_84,uStack_88) + 0x20))(), (uVar6 & 1) == 0)
           ))) goto LAB_00c64698;
LAB_00c63f50:
    plVar11 = (long *)(param_1 + 0x37c8);
    uVar6 = FUN_008d42a0(plVar11,0);
    puVar3 = PTR_DAT_0271bec8;
    uVar7 = 0;
    if ((uVar6 & 1) != 0) {
      lVar10 = 0;
      uVar6 = 0;
      lVar18 = 0x1e78;
      do {
        if (uVar9 <= uVar6) {
          if (*(long **)((long)local_150 + lVar10) != (long *)0x0) {
            (**(code **)(**(long **)((long)local_150 + lVar10) + 0x18))();
          }
          plVar8 = *(long **)((long)local_150 + lVar10 + 8);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x18))();
          }
          lVar14 = *(long *)puVar3 + lVar10;
          if (*(undefined8 **)(lVar14 + 8) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar14 + 8))();
            *(undefined8 *)(lVar14 + 8) = 0;
            (**(code **)(**(long **)(lVar14 + 0x10) + 0x18))
                      (*(long **)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),
                       *(undefined8 *)(lVar14 + 0x20),8);
            *(undefined8 *)(lVar14 + 0x18) = 0;
            *(undefined8 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          FUN_008d4290(&local_78);
          *(long *)(param_1 + lVar18) = local_78;
          ((long *)(param_1 + lVar18))[1] = lStack_70;
        }
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 0x20;
        lVar18 = lVar18 + 0x10;
      } while (uVar6 != 7);
      lVar10 = *(long *)PTR_DAT_0271bf40;
      if (*(undefined8 **)(lVar10 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar10 + 8))();
        *(undefined8 *)(lVar10 + 8) = 0;
        (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                  (*(long **)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                   *(undefined8 *)(lVar10 + 0x20),8);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x10) = 0;
      }
      FUN_008d4290(&local_78);
      puVar2 = PTR_DAT_027108e0;
      *plVar11 = local_78;
      *(long *)(param_1 + 0x37d0) = lStack_70;
      plVar8 = *(long **)(*(long *)puVar2 + 0x108);
      uVar6 = 0;
      puVar12 = local_140;
      do {
        if (uVar9 <= uVar6) {
          switch(uVar6 & 0xffffffff) {
          case 0:
            uVar1 = *puVar12;
            if (uVar1 != 0) {
              lVar18 = *(long *)puVar3;
              *(long **)(lVar18 + 0x10) = plVar8;
              uVar16 = (ulong)uVar1 * 0xc80000 | 0x8000;
              *(ulong *)(lVar18 + 0x20) = uVar16;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0x18) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0x10) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0x18);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 8) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 8));
              *(long *)(param_1 + 0x1e78) = local_78;
              *(long *)(param_1 + 0x1e80) = lStack_70;
              FUN_00c65280(param_1,*(undefined8 *)(*(long *)puVar3 + 8),*puVar12);
            }
            break;
          case 1:
            if (*puVar12 != 0) {
              lVar18 = *(long *)puVar3;
              uVar16 = (ulong)*puVar12 << 0x16 | 0x8000;
              *(ulong *)(lVar18 + 0x40) = uVar16;
              *(long **)(lVar18 + 0x30) = plVar8;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0x38) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0x30) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0x38);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 0x28) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 0x28));
              *(long *)(param_1 + 0x1e88) = local_78;
              *(long *)(param_1 + 0x1e90) = lStack_70;
              FUN_00c65470(param_1,*(undefined8 *)(*(long *)puVar3 + 0x28),*puVar12);
            }
            break;
          case 2:
            if (*puVar12 != 0) {
              lVar18 = *(long *)puVar3;
              uVar16 = (ulong)*puVar12 * 0xc00000 | 0x8000;
              *(long **)(lVar18 + 0x50) = plVar8;
              *(ulong *)(lVar18 + 0x60) = uVar16;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0x58) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0x50) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0x58);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 0x48) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 0x48));
              *(long *)(param_1 + 0x1e98) = local_78;
              *(long *)(param_1 + 0x1ea0) = lStack_70;
              FUN_00c65610(param_1,*(undefined8 *)(*(long *)puVar3 + 0x48),*puVar12);
            }
            break;
          case 3:
            if (*puVar12 != 0) {
              lVar18 = *(long *)puVar3;
              uVar16 = (ulong)*puVar12 * 0xc00000 | 0x8000;
              *(long **)(lVar18 + 0x70) = plVar8;
              *(ulong *)(lVar18 + 0x80) = uVar16;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0x78) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0x70) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0x78);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 0x68) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 0x68));
              *(long *)(param_1 + 0x1ea8) = local_78;
              *(long *)(param_1 + 0x1eb0) = lStack_70;
              FUN_00c657b0(param_1,*(undefined8 *)(*(long *)puVar3 + 0x68),*puVar12);
            }
            break;
          case 4:
            if (*puVar12 != 0) {
              lVar18 = *(long *)puVar3;
              uVar16 = (ulong)*puVar12 * 0x1800000 | 0x8000;
              *(long **)(lVar18 + 0x90) = plVar8;
              *(ulong *)(lVar18 + 0xa0) = uVar16;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0x98) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0x90) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0x98);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 0x88) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 0x88));
              *(long *)(param_1 + 0x1eb8) = local_78;
              *(long *)(param_1 + 0x1ec0) = lStack_70;
              FUN_00c65990(param_1,*(undefined8 *)(*(long *)puVar3 + 0x88),*puVar12);
            }
            break;
          case 5:
            uVar1 = *puVar12;
            if (uVar1 != 0) {
              lVar18 = *(long *)puVar3;
              *(long **)(lVar18 + 0xb0) = plVar8;
              uVar16 = (ulong)uVar1 * 0x1900000 | 0x8000;
              *(ulong *)(lVar18 + 0xc0) = uVar16;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,8);
              *(long *)(lVar18 + 0xb8) = lVar10;
              if (lVar10 == 0) {
                (**(code **)(**(long **)(lVar18 + 0xb0) + 0xb8))();
                lVar10 = *(long *)(lVar18 + 0xb8);
              }
              FUN_00760770(lVar10,lVar10 + 0xb8,uVar16 - 0xb8,0);
              *(long *)(lVar18 + 0xa8) = lVar10;
              FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 0xa8));
              *(long *)(param_1 + 0x1ec8) = local_78;
              *(long *)(param_1 + 0x1ed0) = lStack_70;
              FUN_00c65b20(param_1,*(undefined8 *)(*(long *)puVar3 + 0xa8),*puVar12);
            }
            break;
          case 6:
            if (param_2 != 0) {
              if (iVar19 != 0) {
                lVar18 = *(long *)PTR_DAT_0271bf40;
                *(undefined1 **)(lVar18 + 0x20) = &LAB_00900000;
                *(long **)(lVar18 + 0x10) = plVar8;
                lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,&LAB_00900000,8);
                *(long *)(lVar18 + 0x18) = lVar10;
                if (lVar10 == 0) {
                  (**(code **)(**(long **)(lVar18 + 0x10) + 0xb8))();
                  lVar10 = *(long *)(lVar18 + 0x18);
                }
                FUN_00760770(lVar10,lVar10 + 0xb8,&LAB_008fff48,0);
                *(long *)(lVar18 + 8) = lVar10;
                FUN_008d4280(&local_78,*(undefined8 *)(*(long *)PTR_DAT_0271bf40 + 8));
                *plVar11 = local_78;
                *(long *)(param_1 + 0x37d0) = lStack_70;
              }
              lVar18 = (**(code **)(*plVar8 + 0x40))();
              lVar10 = lVar18 + -0x8000;
              if (lVar10 != 0) {
                lVar14 = *(long *)puVar3;
                *(long **)(lVar14 + 0xd0) = plVar8;
                *(long *)(lVar14 + 0xe0) = lVar10;
                lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,lVar10,8);
                *(long *)(lVar14 + 0xd8) = lVar10;
                if (lVar10 == 0) {
                  (**(code **)(**(long **)(lVar14 + 0xd0) + 0xb8))();
                  lVar10 = *(long *)(lVar14 + 0xd8);
                }
                FUN_00760770(lVar10,lVar10 + 0xb8,lVar18 + -0x80b8,0);
                *(long *)(lVar14 + 200) = lVar10;
                FUN_008d4280(&local_78,*(undefined8 *)(*(long *)puVar3 + 200));
                *(long *)(param_1 + 0x1ed8) = local_78;
                *(long *)(param_1 + 0x1ee0) = lStack_70;
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
        puVar12 = puVar12 + 8;
      } while (uVar6 != 7);
      *(int *)(param_1 + 0x21e8) = iVar15;
      uVar7 = 1;
      *(int *)(param_1 + 0x21ec) = iVar13;
      *(uint *)(param_1 + 0x21f0) = uVar17;
      *(undefined4 *)(param_1 + 0x21f4) = 0;
      *(int *)(param_1 + 0x21f8) = iVar19;
      *(int *)(param_1 + 8) = param_2;
    }
  }
  return uVar7;
}


