/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e5650; name: FUN_003e5650
 */


void FUN_003e5650(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  uVar1 = *(uint *)(param_1 + 0x1f1c);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    plVar10 = *(long **)(param_1 + 0x1ef0);
    plVar7 = *(long **)(param_1 + 0x10f0);
    uVar2 = *(uint *)(param_1 + 0x10f8);
    uVar8 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        lVar3 = plVar7[uVar6];
        if (*(long *)(lVar3 + 0x48) != 0) {
          *(undefined4 *)(lVar3 + 0x28) = 0;
          if ((*(uint *)(lVar3 + 0x2c) & 0x7fffffff) < uVar1) {
            FUN_003f6f80(lVar3 + 0x20,uVar1);
            lVar3 = plVar7[uVar6];
          }
          *(undefined4 *)(lVar3 + 0x38) = 0;
          if ((*(uint *)(lVar3 + 0x3c) & 0x7fffffff) < uVar1) {
            FUN_003bd510(lVar3 + 0x30,uVar1);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar6);
      if ((uVar2 == 1) && (lVar3 = *plVar7, *(long *)(lVar3 + 0x48) != 0)) {
        do {
          while ((*(byte *)(*plVar10 + 0x7c) & 1) != 0) {
LAB_003e5948:
            plVar10 = plVar10 + 1;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) goto LAB_003e5970;
          }
          lVar9 = *(long *)(*plVar10 + 0x50);
          local_80 = FUN_003d9790(lVar9);
          uVar1 = *(uint *)(lVar3 + 0x28);
          if (uVar1 < (*(uint *)(lVar3 + 0x2c) & 0x7fffffff)) {
            *(undefined8 *)(*(long *)(lVar3 + 0x20) + (ulong)uVar1 * 8) = local_80;
            *(uint *)(lVar3 + 0x28) = uVar1 + 1;
          }
          else {
            FUN_003ef040(lVar3 + 0x20,&local_80);
          }
          fVar11 = *(float *)(lVar9 + 0x38);
          fVar13 = *(float *)(lVar9 + 0x3c);
          fVar17 = *(float *)(lVar9 + 0x44) * -2.0;
          fVar14 = *(float *)(lVar9 + 0x30);
          fVar12 = *(float *)(lVar9 + 0x34);
          fVar15 = *(float *)(lVar9 + 0x40) * -2.0;
          fVar19 = *(float *)(lVar9 + 0x48) * -2.0;
          fVar23 = *(float *)(lVar9 + 0x10);
          fVar24 = *(float *)(lVar9 + 0x14);
          fVar20 = fVar13 * fVar13 + -0.5;
          fVar21 = fVar15 * fVar14 + fVar17 * fVar12 + fVar19 * fVar11;
          fVar16 = fVar14 * fVar21 +
                   (fVar15 * fVar20 - fVar13 * (fVar19 * fVar12 - fVar17 * fVar11));
          fVar18 = fVar12 * fVar21 +
                   (fVar17 * fVar20 - fVar13 * (fVar15 * fVar11 - fVar19 * fVar14));
          fVar25 = *(float *)(lVar9 + 0x18);
          fVar26 = *(float *)(lVar9 + 0x1c);
          fVar22 = fVar26 * fVar26 + -0.5;
          fVar17 = (fVar19 * fVar20 - fVar13 * (fVar17 * fVar14 - fVar15 * fVar12)) +
                   fVar11 * fVar21;
          fVar16 = fVar16 + fVar16;
          fVar18 = fVar18 + fVar18;
          fVar17 = fVar17 + fVar17;
          fVar15 = fVar25 * fVar17 + fVar23 * fVar16 + fVar24 * fVar18;
          local_70 = *(float *)(lVar9 + 0x20) +
                     fVar23 * fVar15 +
                     fVar22 * fVar16 + fVar26 * (fVar24 * fVar17 - fVar25 * fVar18);
          fStack_6c = *(float *)(lVar9 + 0x24) +
                      fVar24 * fVar15 +
                      fVar22 * fVar18 + fVar26 * (fVar25 * fVar16 - fVar23 * fVar17);
          fVar19 = ((fVar13 * fVar23 - fVar26 * fVar14) - fVar24 * fVar11) + fVar25 * fVar12;
          fVar20 = ((fVar13 * fVar24 - fVar26 * fVar12) - fVar25 * fVar14) + fVar23 * fVar11;
          local_68 = *(float *)(lVar9 + 0x28) +
                     fVar22 * fVar17 + fVar26 * (fVar23 * fVar18 - fVar24 * fVar16) +
                     fVar25 * fVar15;
          local_78 = ((fVar13 * fVar25 - fVar26 * fVar11) - fVar23 * fVar12) + fVar24 * fVar14;
          local_80 = CONCAT44(fVar20,fVar19);
          fStack_74 = fVar13 * fVar26 + fVar23 * fVar14 + fVar24 * fVar12 + fVar25 * fVar11;
          uVar1 = *(uint *)(lVar3 + 0x38);
          if (uVar1 < (*(uint *)(lVar3 + 0x3c) & 0x7fffffff)) {
            pfVar4 = (float *)(*(long *)(lVar3 + 0x30) + (ulong)uVar1 * 0x1c);
            *pfVar4 = fVar19;
            pfVar4[1] = fVar20;
            pfVar4[2] = local_78;
            pfVar4[3] = fStack_74;
            pfVar4[4] = local_70;
            pfVar4[5] = fStack_6c;
            pfVar4[6] = local_68;
            *(uint *)(lVar3 + 0x38) = uVar1 + 1;
            goto LAB_003e5948;
          }
          FUN_003ef1d0(lVar3 + 0x30,&local_80);
          plVar10 = plVar10 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
LAB_003e5970:
        if (*(int *)(lVar3 + 0x28) == 0) {
          return;
        }
        (**(code **)(**(long **)(lVar3 + 0x48) + 0x28))
                  (*(long **)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x20),
                   *(undefined8 *)(lVar3 + 0x30));
        return;
      }
    }
    do {
      while( true ) {
        lVar3 = *(long *)(*plVar10 + 0x50);
        lVar9 = plVar7[*(byte *)(lVar3 + 0xb)];
        if ((*(long *)(lVar9 + 0x48) != 0) && ((*(byte *)(*plVar10 + 0x7c) & 1) == 0)) break;
LAB_003e5be8:
        plVar10 = plVar10 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_003e5c10;
      }
      local_80 = FUN_003d9790(lVar3);
      uVar1 = *(uint *)(lVar9 + 0x28);
      if (uVar1 < (*(uint *)(lVar9 + 0x2c) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(lVar9 + 0x20) + (ulong)uVar1 * 8) = local_80;
        *(uint *)(lVar9 + 0x28) = uVar1 + 1;
      }
      else {
        FUN_003ef040(lVar9 + 0x20,&local_80);
      }
      fVar11 = *(float *)(lVar3 + 0x38);
      fVar13 = *(float *)(lVar3 + 0x3c);
      fVar17 = *(float *)(lVar3 + 0x44) * -2.0;
      fVar14 = *(float *)(lVar3 + 0x30);
      fVar12 = *(float *)(lVar3 + 0x34);
      fVar15 = *(float *)(lVar3 + 0x40) * -2.0;
      fVar19 = *(float *)(lVar3 + 0x48) * -2.0;
      fVar23 = *(float *)(lVar3 + 0x10);
      fVar24 = *(float *)(lVar3 + 0x14);
      fVar20 = fVar13 * fVar13 + -0.5;
      fVar21 = fVar15 * fVar14 + fVar17 * fVar12 + fVar19 * fVar11;
      fVar16 = fVar14 * fVar21 + (fVar15 * fVar20 - fVar13 * (fVar19 * fVar12 - fVar17 * fVar11));
      fVar18 = fVar12 * fVar21 + (fVar17 * fVar20 - fVar13 * (fVar15 * fVar11 - fVar19 * fVar14));
      fVar25 = *(float *)(lVar3 + 0x18);
      fVar26 = *(float *)(lVar3 + 0x1c);
      fVar22 = fVar26 * fVar26 + -0.5;
      fVar17 = (fVar19 * fVar20 - fVar13 * (fVar17 * fVar14 - fVar15 * fVar12)) + fVar11 * fVar21;
      fVar16 = fVar16 + fVar16;
      fVar18 = fVar18 + fVar18;
      fVar17 = fVar17 + fVar17;
      fVar15 = fVar25 * fVar17 + fVar23 * fVar16 + fVar24 * fVar18;
      local_70 = *(float *)(lVar3 + 0x20) +
                 fVar23 * fVar15 + fVar22 * fVar16 + fVar26 * (fVar24 * fVar17 - fVar25 * fVar18);
      fStack_6c = *(float *)(lVar3 + 0x24) +
                  fVar24 * fVar15 + fVar22 * fVar18 + fVar26 * (fVar25 * fVar16 - fVar23 * fVar17);
      fVar19 = ((fVar13 * fVar23 - fVar26 * fVar14) - fVar24 * fVar11) + fVar25 * fVar12;
      fVar20 = ((fVar13 * fVar24 - fVar26 * fVar12) - fVar25 * fVar14) + fVar23 * fVar11;
      local_68 = *(float *)(lVar3 + 0x28) +
                 fVar22 * fVar17 + fVar26 * (fVar23 * fVar18 - fVar24 * fVar16) + fVar25 * fVar15;
      local_78 = ((fVar13 * fVar25 - fVar26 * fVar11) - fVar23 * fVar12) + fVar24 * fVar14;
      local_80 = CONCAT44(fVar20,fVar19);
      fStack_74 = fVar13 * fVar26 + fVar23 * fVar14 + fVar24 * fVar12 + fVar25 * fVar11;
      uVar1 = *(uint *)(lVar9 + 0x38);
      if (uVar1 < (*(uint *)(lVar9 + 0x3c) & 0x7fffffff)) {
        pfVar4 = (float *)(*(long *)(lVar9 + 0x30) + (ulong)uVar1 * 0x1c);
        *pfVar4 = fVar19;
        pfVar4[1] = fVar20;
        pfVar4[2] = local_78;
        pfVar4[3] = fStack_74;
        pfVar4[4] = local_70;
        pfVar4[5] = fStack_6c;
        pfVar4[6] = local_68;
        *(uint *)(lVar9 + 0x38) = uVar1 + 1;
        goto LAB_003e5be8;
      }
      FUN_003ef1d0(lVar9 + 0x30,&local_80);
      plVar10 = plVar10 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
LAB_003e5c10:
    if (uVar2 != 0) {
      do {
        lVar3 = *plVar7;
        if (*(int *)(lVar3 + 0x28) != 0) {
          (**(code **)(**(long **)(lVar3 + 0x48) + 0x28))
                    (*(long **)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x20),
                     *(undefined8 *)(lVar3 + 0x30));
        }
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}


