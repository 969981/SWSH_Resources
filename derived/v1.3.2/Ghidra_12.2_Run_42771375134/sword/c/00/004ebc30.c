/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ebc30; name: FUN_004ebc30
 */


undefined8 FUN_004ebc30(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  long local_48;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  fStack_2c = *(float *)(param_2 + 0x30);
  local_28 = *(float *)(param_2 + 0x34);
  fStack_24 = *(float *)(param_2 + 0x38);
  fVar16 = *(float *)(param_2 + 0x3c);
  uVar17 = NEON_fminnm(fStack_2c,DAT_01d4c18c);
  uVar18 = NEON_fminnm(local_28,DAT_01d4c18c);
  uVar14 = NEON_fminnm(fStack_24,DAT_01d4c18c);
  if (local_28 <= DAT_01d4c5a8) {
    local_28 = DAT_01d4c5a8;
  }
  if (fStack_2c <= DAT_01d4c5a8) {
    fStack_2c = DAT_01d4c5a8;
  }
  fVar15 = *(float *)(param_2 + 0x40);
  fVar19 = *(float *)(param_2 + 0x44);
  uVar14 = NEON_fminnm(uVar14,fVar19);
  uVar17 = NEON_fminnm(uVar17,fVar16);
  uVar18 = NEON_fminnm(uVar18,fVar15);
  if (fStack_2c <= fVar16) {
    fStack_2c = fVar16;
  }
  if (local_28 <= fVar15) {
    local_28 = fVar15;
  }
  fVar16 = *(float *)(param_2 + 0x48);
  fVar15 = *(float *)(param_2 + 0x4c);
  if (fStack_24 <= fVar19) {
    fStack_24 = fVar19;
  }
  fVar19 = *(float *)(param_2 + 0x50);
  local_30 = NEON_fminnm(uVar14,fVar19);
  if (fStack_2c <= fVar16) {
    fStack_2c = fVar16;
  }
  local_38 = NEON_fminnm(uVar17,fVar16);
  uStack_34 = NEON_fminnm(uVar18,fVar15);
  if (local_28 <= fVar15) {
    local_28 = fVar15;
  }
  if (fStack_24 <= fVar19) {
    fStack_24 = fVar19;
  }
  local_3c = 1;
  local_48 = param_2;
  uVar3 = FUN_004f0410(param_1 + 0x48,&local_38,&local_48,param_1 + 0x50,&local_3c);
  if (((uVar3 & 1) != 0) && (local_3c == 1)) {
    local_3c = 0xf;
  }
  plVar13 = *(long **)(local_48 + 0x58);
  if (plVar13 != (long *)0x0) {
    uVar5 = *(uint *)(plVar13 + 4);
    uVar3 = (ulong)uVar5;
    if (uVar5 != 0) {
      plVar10 = (long *)plVar13[3];
      lVar12 = uVar3 * 8;
      plVar6 = plVar10;
LAB_004ebd1c:
      if (*plVar6 != local_48) goto code_r0x004ebd28;
      if (plVar6 < plVar10 + (uVar3 - 1)) {
        uVar11 = (long)plVar10 + ~(ulong)plVar6 + uVar3 * 8 + -8;
        uVar5 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
        if ((uVar5 & 3) != 0) {
          lVar12 = -((ulong)uVar5 & 3);
          plVar8 = plVar6;
          do {
            plVar6 = plVar8 + 1;
            *plVar8 = *plVar6;
            lVar12 = lVar12 + 1;
            plVar8 = plVar6;
          } while (lVar12 != 0);
        }
        if (0x17 < uVar11) {
          do {
            *plVar6 = plVar6[1];
            plVar6[1] = plVar6[2];
            plVar6[2] = plVar6[3];
            plVar8 = plVar6 + 4;
            plVar6[3] = *plVar8;
            plVar6 = plVar8;
          } while (plVar8 < plVar10 + (uVar3 - 1));
        }
        uVar5 = *(uint *)(plVar13 + 4);
      }
      uVar5 = uVar5 - 1;
      *(uint *)(plVar13 + 4) = uVar5;
      *(undefined4 *)(plVar13 + 2) = 0;
      if (uVar5 != 0) {
        plVar6 = (long *)plVar13[3];
        uVar9 = 0;
        uVar3 = (ulong)uVar5 * 8 - 8;
        uVar11 = uVar3 >> 3;
        uVar1 = (int)uVar11 + 1;
        if (uVar3 != 0) {
          lVar12 = (((ulong)uVar1 & 1) - 1) - uVar11;
          do {
            uVar9 = *(uint *)(*plVar6 + 100) | uVar9;
            *(uint *)(plVar13 + 2) = uVar9;
            plVar10 = plVar6 + 1;
            plVar6 = plVar6 + 2;
            uVar9 = *(uint *)(*plVar10 + 100) | uVar9;
            lVar12 = lVar12 + 2;
            *(uint *)(plVar13 + 2) = uVar9;
          } while (lVar12 != 0);
        }
        if ((uVar1 & 1) != 0) {
          *(uint *)(plVar13 + 2) = *(uint *)(*plVar6 + 100) | uVar9;
        }
LAB_004ebe40:
        if (uVar5 != 0) {
          return 1;
        }
      }
    }
    uVar5 = *(uint *)(param_1 + 0x98);
    if (uVar5 != 0) {
      lVar12 = (ulong)uVar5 << 3;
      puVar7 = *(undefined8 **)(param_1 + 0x90);
      do {
        if ((long *)*puVar7 == plVar13) {
          if (1 < uVar5) {
            *puVar7 = (*(undefined8 **)(param_1 + 0x90))[(ulong)uVar5 - 1];
            uVar5 = *(uint *)(param_1 + 0x98);
          }
          *(uint *)(param_1 + 0x98) = uVar5 - 1;
          lVar12 = plVar13[3];
          goto joined_r0x004ebf78;
        }
        lVar12 = lVar12 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar12 != 0);
    }
    lVar12 = plVar13[3];
joined_r0x004ebf78:
    if (lVar12 != 0) {
      *(undefined4 *)(plVar13 + 4) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
      plVar13[3] = 0;
      *(undefined4 *)((long)plVar13 + 0x24) = 0;
    }
    plVar6 = (long *)(param_1 + 0x88);
    if ((long *)*plVar6 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)0x0;
      plVar8 = (long *)*plVar6;
      do {
        plVar4 = plVar8;
        if ((plVar4 <= plVar13) && (plVar13 < plVar4 + 0x300)) goto LAB_004ebee4;
        plVar10 = plVar4;
        plVar8 = (long *)plVar4[0x300];
      } while ((long *)plVar4[0x300] != (long *)0x0);
    }
    plVar4 = (long *)0x0;
LAB_004ebee4:
    if (plVar4[0x302] == 0) {
      plVar4[0x302] = (long)plVar13;
      *plVar13 = 0;
    }
    else {
      *plVar13 = plVar4[0x302];
      plVar4[0x302] = (long)plVar13;
    }
    iVar2 = (int)plVar4[0x301] + 1;
    *(int *)(plVar4 + 0x301) = iVar2;
    if (iVar2 == 0x80) {
      if ((long *)*plVar6 != plVar4) {
        plVar6 = plVar10 + 0x300;
      }
      *plVar6 = plVar4[0x300];
      FUN_004047f0(*(undefined4 *)PTR_DAT_02713640);
    }
  }
  return 1;
code_r0x004ebd28:
  plVar6 = plVar6 + 1;
  lVar12 = lVar12 + -8;
  if (lVar12 == 0) goto LAB_004ebe40;
  goto LAB_004ebd1c;
}


