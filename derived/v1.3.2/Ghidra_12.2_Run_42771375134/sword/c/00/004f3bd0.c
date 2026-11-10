/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f3bd0; name: FUN_004f3bd0
 */


void FUN_004f3bd0(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float afStack_d0 [3];
  uint local_c4;
  void *local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar17 = (ulong)uVar1;
  if (uVar1 == 0) {
    return;
  }
  lVar18 = (long)afStack_d0 - (uVar17 * 8 + 0xf & 0xffffffff0);
  if ((param_3 >> 3 & 1) == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = lVar18 - (uVar17 * 0x28 + 0xf & 0x7ffffffff0);
  }
  lVar11 = *(long *)(param_1 + 0xd8) + 0x80;
  local_c0 = (void *)(param_1 + 0xb0);
  uVar20 = 0;
  fVar25 = DAT_01d4c18c;
  local_c4 = param_3;
  if ((param_3 >> 1 & 1) == 0) {
    do {
      lVar16 = *param_2;
      lVar21 = lVar16 + uVar20 * 0x110;
      local_88 = 0x3f80000000000000;
      FUN_004f3520(lVar21,lVar11,local_c0,&local_b8,0,0,&local_88);
      *(undefined4 *)(lVar18 + uVar20 * 8) = 0;
      uVar2 = *(uint *)(lVar21 + 0x100);
      uVar15 = (ulong)uVar2;
      uVar4 = (undefined4)local_88;
      if (uVar2 == 0) {
        fVar22 = *(float *)(param_1 + 0x110);
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(float *)(lVar18 + uVar20 * 8 + 4) = fVar22;
      }
      else {
        uVar12 = uVar15 & 3;
        if (uVar15 - 1 < 3) {
          lVar21 = 0;
          fVar22 = 0.0;
        }
        else {
          fVar22 = 0.0;
          lVar21 = 0;
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + 0x10);
          do {
            if (fVar22 <= *(float *)(plVar14[-2] + 0x8c)) {
              fVar22 = *(float *)(plVar14[-2] + 0x8c);
            }
            if (fVar22 <= *(float *)(plVar14[-1] + 0x8c)) {
              fVar22 = *(float *)(plVar14[-1] + 0x8c);
            }
            if (fVar22 <= *(float *)(*plVar14 + 0x8c)) {
              fVar22 = *(float *)(*plVar14 + 0x8c);
            }
            if (fVar22 <= *(float *)(plVar14[1] + 0x8c)) {
              fVar22 = *(float *)(plVar14[1] + 0x8c);
            }
            lVar21 = lVar21 + 4;
            plVar14 = plVar14 + 4;
          } while (uVar15 - uVar12 != lVar21);
        }
        if ((uVar2 & 3) != 0) {
          lVar13 = -uVar12;
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + lVar21 * 8);
          do {
            if (fVar22 <= *(float *)(*plVar14 + 0x8c)) {
              fVar22 = *(float *)(*plVar14 + 0x8c);
            }
            lVar13 = lVar13 + 1;
            plVar14 = plVar14 + 1;
          } while (lVar13 != 0);
        }
        fVar24 = *(float *)(param_1 + 0x110);
        fVar23 = fVar24;
        if (fVar24 < fVar22) {
          fVar23 = 0.0;
        }
        if ((uVar2 != 0) && (fVar24 < fVar22)) {
          if (uVar15 - 1 < 3) {
            lVar21 = 0;
            fVar23 = 0.0;
          }
          else {
            fVar23 = 0.0;
            lVar21 = 0;
            plVar14 = (long *)(lVar16 + uVar20 * 0x110 + 0x10);
            do {
              if (fVar23 <= *(float *)(plVar14[-2] + 0x8c)) {
                fVar23 = *(float *)(plVar14[-2] + 0x8c);
              }
              if (fVar23 <= *(float *)(plVar14[-1] + 0x8c)) {
                fVar23 = *(float *)(plVar14[-1] + 0x8c);
              }
              if (fVar23 <= *(float *)(*plVar14 + 0x8c)) {
                fVar23 = *(float *)(*plVar14 + 0x8c);
              }
              if (fVar23 <= *(float *)(plVar14[1] + 0x8c)) {
                fVar23 = *(float *)(plVar14[1] + 0x8c);
              }
              lVar21 = lVar21 + 4;
              plVar14 = plVar14 + 4;
            } while (uVar15 - (uVar15 & 3) != lVar21);
          }
          if ((uVar2 & 3) != 0) {
            lVar13 = -uVar12;
            plVar14 = (long *)(lVar16 + uVar20 * 0x110 + lVar21 * 8);
            do {
              if (fVar23 <= *(float *)(*plVar14 + 0x8c)) {
                fVar23 = *(float *)(*plVar14 + 0x8c);
              }
              lVar13 = lVar13 + 1;
              plVar14 = plVar14 + 1;
            } while (lVar13 != 0);
          }
        }
        *(float *)(lVar18 + uVar20 * 8 + 4) = fVar23;
      }
      if (lVar19 != 0) {
        pvVar9 = (void *)(lVar19 + uVar20 * 0x28);
        *(undefined4 *)((long)pvVar9 + 0x24) = 0x3ff3f;
        memcpy(pvVar9,&local_b8,0x24);
      }
      fVar25 = (float)NEON_fminnm(uVar4,fVar25);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar17);
  }
  else {
    do {
      lVar16 = *param_2;
      lVar21 = lVar16 + uVar20 * 0x110;
      local_88 = 0x3f80000000000000;
      FUN_004f3520(lVar21,lVar11,local_c0,&local_b8,0,0,&local_88);
      *(undefined4 *)(lVar18 + uVar20 * 8) = 0;
      uVar2 = *(uint *)(lVar21 + 0x100);
      uVar15 = (ulong)uVar2;
      fVar22 = 0.0;
      if (uVar2 != 0) {
        if (uVar15 - 1 < 3) {
          lVar21 = 0;
          fVar22 = 0.0;
        }
        else {
          fVar22 = 0.0;
          lVar21 = 0;
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + 0x10);
          do {
            if (fVar22 <= *(float *)(plVar14[-2] + 0x8c)) {
              fVar22 = *(float *)(plVar14[-2] + 0x8c);
            }
            if (fVar22 <= *(float *)(plVar14[-1] + 0x8c)) {
              fVar22 = *(float *)(plVar14[-1] + 0x8c);
            }
            if (fVar22 <= *(float *)(*plVar14 + 0x8c)) {
              fVar22 = *(float *)(*plVar14 + 0x8c);
            }
            if (fVar22 <= *(float *)(plVar14[1] + 0x8c)) {
              fVar22 = *(float *)(plVar14[1] + 0x8c);
            }
            lVar21 = lVar21 + 4;
            plVar14 = plVar14 + 4;
          } while (uVar15 - (uVar15 & 3) != lVar21);
        }
        if ((uVar2 & 3) != 0) {
          lVar13 = -(uVar15 & 3);
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + lVar21 * 8);
          do {
            if (fVar22 <= *(float *)(*plVar14 + 0x8c)) {
              fVar22 = *(float *)(*plVar14 + 0x8c);
            }
            lVar13 = lVar13 + 1;
            plVar14 = plVar14 + 1;
          } while (lVar13 != 0);
        }
      }
      uVar4 = (undefined4)local_88;
      fVar24 = *(float *)(param_1 + 0x110);
      fVar23 = fVar24;
      if (fVar24 < fVar22) {
        fVar23 = 0.0;
      }
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      if (uVar2 != 0) {
        bVar6 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar22) && !NAN(fVar24)) {
          bVar6 = fVar22 < fVar24;
          bVar7 = fVar22 == fVar24;
          bVar8 = false;
        }
      }
      if (!bVar7 && bVar6 == bVar8) {
        if (uVar15 - 1 < 3) {
          lVar21 = 0;
          fVar23 = 0.0;
        }
        else {
          fVar23 = 0.0;
          lVar21 = 0;
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + 0x10);
          do {
            if (fVar23 <= *(float *)(plVar14[-1] + 0x8c)) {
              fVar23 = *(float *)(plVar14[-1] + 0x8c);
            }
            if (fVar23 <= *(float *)(*plVar14 + 0x8c)) {
              fVar23 = *(float *)(*plVar14 + 0x8c);
            }
            lVar21 = lVar21 + 4;
            plVar14 = plVar14 + 4;
          } while (uVar15 - (uVar15 & 3) != lVar21);
        }
        if ((uVar2 & 3) != 0) {
          lVar13 = -(uVar15 & 3);
          plVar14 = (long *)(lVar16 + uVar20 * 0x110 + lVar21 * 8);
          do {
            if (fVar23 <= *(float *)(*plVar14 + 0x8c)) {
              fVar23 = *(float *)(*plVar14 + 0x8c);
            }
            lVar13 = lVar13 + 1;
            plVar14 = plVar14 + 1;
          } while (lVar13 != 0);
        }
      }
      *(float *)(lVar18 + uVar20 * 8 + 4) = fVar23;
      if (lVar19 != 0) {
        pvVar9 = (void *)(lVar19 + uVar20 * 0x28);
        *(undefined4 *)((long)pvVar9 + 0x24) = 0x3ff3f;
        memcpy(pvVar9,&local_b8,0x24);
      }
      fVar25 = (float)NEON_fminnm(uVar4,fVar25);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar17);
  }
  if ((local_c4 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 8);
    iVar3 = *(int *)(lVar11 + 0x40);
  }
  else {
    local_b8 = *(long *)(param_1 + 8);
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xff;
    local_98 = 0xff;
    local_90 = 0;
    FUN_0049f0a0(fVar25 * DAT_01d4be08,*(undefined8 *)PTR_DAT_02712b50,8,&local_b8);
    lVar11 = *(long *)(param_1 + 8);
    iVar3 = *(int *)(lVar11 + 0x40);
  }
  if (lVar19 == 0) {
    if ((iVar3 != 0) && (lVar18 = **(long **)(lVar11 + 0x38), lVar18 != 0)) {
      local_94 = 0xffffffff;
      memcpy(&local_b8,local_c0,0x24);
      FUN_00496290(lVar18,&local_b8,1,0);
      lVar11 = *(long *)(param_1 + 8);
    }
    FUN_00498cc0(fVar25 * DAT_01d4c6c0,0,*(undefined8 *)PTR_DAT_02712d20,lVar11,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48));
  }
  else {
    if ((iVar3 != 0) && (**(long **)(lVar11 + 0x38) != 0)) {
      FUN_00496290(**(long **)(lVar11 + 0x38),lVar19,uVar1,2);
      lVar11 = *(long *)(param_1 + 8);
    }
    FUN_00498e30(*(undefined8 *)PTR_DAT_02712d20,lVar11,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48),lVar18,uVar17);
  }
  puVar5 = PTR_DAT_02712d20;
  lVar19 = *(long *)(*(long *)(param_1 + 0xd8) + 0x30);
  lVar18 = -4;
  if (lVar19 != -1) {
    lVar18 = lVar19;
  }
  puVar10 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar18);
  if (puVar10 != (undefined8 *)0x0) {
    iVar3 = *(int *)(puVar10 + 10);
    *(int *)(puVar10 + 10) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      uVar4 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar10)(puVar10);
      FUN_00404870(uVar4,puVar10);
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0xd8) + 0x30);
    lVar18 = -4;
    if (lVar19 != -1) {
      lVar18 = lVar19;
    }
    FUN_00498cc0(0,0,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 8),lVar18);
  }
  return;
}


