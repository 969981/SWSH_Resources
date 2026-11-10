/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00228cb0; name: FUN_00228cb0
 */


void FUN_00228cb0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  uVar3 = *(uint *)(*param_1 + 0x1110);
  if ((uVar3 != 0) && (0x10 < uVar3)) {
    lVar15 = *(long *)(*param_1 + 0x1108);
    pfVar20 = (float *)0x0;
    do {
      puVar18 = (undefined4 *)(lVar15 + (long)pfVar20 * 0x44);
      uVar4 = *puVar18;
      uVar5 = puVar18[0xc];
      plVar24 = (long *)(ulong)uVar5;
      uVar1 = puVar18[10];
      uVar2 = puVar18[0xb];
      pfVar22 = (float *)(puVar18 + 1);
      fVar25 = *pfVar22;
      pfVar10 = (float *)(puVar18 + 4);
      fVar26 = *pfVar10 - fVar25;
      pfVar11 = (float *)(puVar18 + 5);
      pfVar12 = (float *)(puVar18 + 2);
      fVar28 = *pfVar12;
      fVar27 = *pfVar11 - fVar28;
      pfVar13 = (float *)(puVar18 + 6);
      pfVar17 = (float *)(puVar18 + 3);
      fVar33 = *pfVar17;
      fVar29 = *pfVar13 - fVar33;
      pfVar21 = (float *)(puVar18 + 7);
      fVar35 = *pfVar21 - fVar25;
      pfVar23 = (float *)(puVar18 + 8);
      fVar37 = *pfVar23 - fVar28;
      fVar28 = fVar28 - *(float *)((long)param_1 + 0x874);
      pfVar19 = (float *)(puVar18 + 9);
      fVar39 = *pfVar19 - fVar33;
      fVar30 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
      fVar32 = fVar26 * fVar35 + fVar27 * fVar37 + fVar29 * fVar39;
      fVar31 = fVar35 * fVar35 + fVar37 * fVar37 + fVar39 * fVar39;
      fVar35 = (fVar25 - *(float *)(param_1 + 0x10e)) * fVar35 + fVar28 * fVar37 +
               (fVar33 - *(float *)(param_1 + 0x10f)) * fVar39;
      fVar27 = (fVar25 - *(float *)(param_1 + 0x10e)) * fVar26 + fVar28 * fVar27 +
               (fVar33 - *(float *)(param_1 + 0x10f)) * fVar29;
      fVar25 = fabsf(fVar30 * fVar31 - fVar32 * fVar32);
      fVar26 = fVar32 * fVar35 - fVar27 * fVar31;
      fVar28 = fVar27 * fVar32 - fVar30 * fVar35;
      if (fVar26 + fVar28 <= fVar25) {
        if (0.0 <= fVar26) {
          if (0.0 <= fVar28) {
            iVar9 = 0;
            if (fVar25 != 0.0) {
              iVar9 = 6;
            }
            goto joined_r0x00228f2c;
          }
          if (0.0 <= fVar27) goto switchD_00228fe0_caseD_0;
LAB_00228f14:
          iVar9 = 3;
          if (fVar30 <= -fVar27) {
            iVar9 = 1;
          }
joined_r0x00228f2c:
          if (iVar9 == 7) goto LAB_002293ac;
LAB_00228fd0:
          puVar16 = &switchD_00228fe0::switchdataD_01d4cfc4;
          switch(iVar9) {
          case 0:
            goto switchD_00228fe0_caseD_0;
          case 1:
            goto switchD_00228fe0_caseD_1;
          case 2:
            goto switchD_00228fe0_caseD_2;
          case 3:
            uVar5 = uVar2;
            if (uVar2 <= uVar1) {
              uVar5 = uVar1;
              uVar1 = uVar2;
            }
            uVar2 = uVar5 | uVar1 << 0x10;
            uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
            uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
            uVar2 = uVar2 ^ uVar2 >> 6;
            uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
            bVar7 = *(byte *)((long)param_1 + (ulong)((uVar2 ^ uVar2 >> 0x10) & 0x7f) + 0x488);
            while (bVar7 != 0xff) {
              uVar8 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar8 + 1) == uVar1) &&
                 (*(uint *)((long)param_1 + uVar8 * 8 + 0xc) == uVar5)) goto LAB_002293ac;
              bVar7 = *(byte *)((long)param_1 + uVar8 + 0x408);
            }
            break;
          case 4:
            uVar1 = uVar5;
            if (uVar5 <= uVar2) {
              uVar1 = uVar2;
              uVar2 = uVar5;
            }
            uVar5 = uVar1 | uVar2 << 0x10;
            uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
            uVar5 = (uVar5 ^ uVar5 >> 10) * 9;
            uVar5 = uVar5 ^ uVar5 >> 6;
            uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
            bVar7 = *(byte *)((long)param_1 + (ulong)((uVar5 ^ uVar5 >> 0x10) & 0x7f) + 0x488);
            while (bVar7 != 0xff) {
              uVar8 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar8 + 1) == uVar2) &&
                 (*(uint *)((long)param_1 + uVar8 * 8 + 0xc) == uVar1)) goto LAB_002293ac;
              bVar7 = *(byte *)((long)param_1 + uVar8 + 0x408);
            }
            break;
          case 5:
            uVar2 = uVar5;
            if (uVar5 <= uVar1) {
              uVar2 = uVar1;
              uVar1 = uVar5;
            }
            uVar5 = uVar2 | uVar1 << 0x10;
            uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
            uVar5 = (uVar5 ^ uVar5 >> 10) * 9;
            uVar5 = uVar5 ^ uVar5 >> 6;
            uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
            bVar7 = *(byte *)((long)param_1 + (ulong)((uVar5 ^ uVar5 >> 0x10) & 0x7f) + 0x488);
            while (bVar7 != 0xff) {
              uVar8 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar8 + 1) == uVar1) &&
                 (*(uint *)((long)param_1 + uVar8 * 8 + 0xc) == uVar2)) goto LAB_002293ac;
              bVar7 = *(byte *)((long)param_1 + uVar8 + 0x408);
            }
            break;
          case 7:
            while( true ) {
              uVar4 = *(undefined4 *)((long)plVar24 + 0x44);
              lVar15 = plVar24[9];
              uVar6 = *(undefined4 *)((long)plVar24 + 0x4c);
              if ((uint)puVar16 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0023075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((long)(int)pfVar21[(long)puVar16] + (long)pfVar21))();
                return;
              }
              uVar3 = *(uint *)(param_1 + 0x146);
              if (uVar3 < 0x40) {
                *(uint *)(param_1 + 0x146) = uVar3 + 1;
                *(undefined4 *)((long)param_1 + (ulong)uVar3 * 0xc + 0xa34) = uVar4;
                *(int *)((long)param_1 + (ulong)uVar3 * 0xc + 0xa38) = (int)lVar15;
                *(undefined4 *)((long)param_1 + (ulong)uVar3 * 0xc + 0xa3c) = uVar6;
              }
              pfVar19 = (float *)((long)pfVar19 + 1);
              if (pfVar19 == pfVar20) break;
              plVar24 = param_1 + (ulong)*(uint *)((long)param_1 + (long)pfVar19 * 8 + 0x834) * 4;
              puVar16 = (uint *)(ulong)*(uint *)((long)plVar24 + 0x3c);
            }
            return;
          }
        }
        else {
          if ((fVar28 < 0.0) && (fVar27 < 0.0)) goto LAB_00228f14;
          if (fVar35 < 0.0) {
            iVar9 = 5;
            if (fVar31 <= -fVar35) {
              iVar9 = 2;
            }
            goto joined_r0x00228f2c;
          }
switchD_00228fe0_caseD_0:
          for (bVar7 = *(byte *)((long)param_1 + (ulong)(uVar1 & 0x7f) + 0x78c); bVar7 != 0xff;
              bVar7 = *(byte *)((long)param_1 + (ulong)bVar7 + 0x70c)) {
            if (*(uint *)((long)param_1 + (ulong)bVar7 * 4 + 0x50c) == uVar1) goto LAB_002293ac;
          }
        }
switchD_00228fe0_caseD_6:
        fVar30 = *pfVar11;
        fVar27 = *pfVar10;
        fVar26 = *pfVar22;
        fVar29 = *pfVar12;
        fVar32 = *pfVar13;
        fVar31 = *pfVar17;
        fVar35 = *pfVar21;
        fVar34 = *pfVar23;
        fVar36 = *pfVar19;
        fVar33 = (fVar30 - fVar29) * (fVar36 - fVar31) - (fVar32 - fVar31) * (fVar34 - fVar29);
        fVar37 = (fVar32 - fVar31) * (fVar35 - fVar26) - (fVar27 - fVar26) * (fVar36 - fVar31);
        fVar40 = 0.0;
        fVar39 = (fVar27 - fVar26) * (fVar34 - fVar29) - (fVar30 - fVar29) * (fVar35 - fVar26);
        fVar25 = fVar39 * fVar39 + fVar33 * fVar33 + fVar37 * fVar37;
        fVar38 = 0.0;
        fVar28 = 0.0;
        if (0.0 < fVar25) {
          fVar28 = sqrtf(fVar25);
          fVar28 = 1.0 / fVar28;
          fVar26 = *pfVar22;
          fVar29 = *pfVar12;
          fVar31 = *pfVar17;
          fVar38 = fVar33 * fVar28;
          fVar40 = fVar37 * fVar28;
          fVar28 = fVar39 * fVar28;
          fVar27 = *pfVar10;
          fVar30 = *pfVar11;
          fVar32 = *pfVar13;
          fVar35 = *pfVar21;
          fVar34 = *pfVar23;
          fVar36 = *pfVar19;
        }
        fStack_a4 = -(fVar38 * fVar26 + fVar40 * fVar29 + fVar28 * fVar31);
        lVar14 = lVar15 + (long)pfVar20 * 0x44;
        local_c0 = *(undefined4 *)(lVar14 + 0x34);
        local_bc = *(undefined4 *)(lVar14 + 0x38);
        local_b8 = *(undefined4 *)(lVar14 + 0x3c);
        local_b0 = fVar38;
        fStack_ac = fVar40;
        local_a8 = fVar28;
        uVar8 = FUN_0022b5f0((fVar26 + fVar27 + fVar35) * DAT_01d4bd24,
                             (fVar29 + fVar30 + fVar34) * DAT_01d4bd24,
                             (fVar31 + fVar32 + fVar36) * DAT_01d4bd24,
                             *(undefined4 *)(lVar14 + 0x40),param_1,&local_b0,pfVar22,&local_c0,
                             uVar4);
        if ((uVar8 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x11a) = 1;
        }
      }
      else {
        if (0.0 <= fVar26) {
          if (0.0 <= fVar28) {
            fVar25 = ((fVar31 + fVar35) - fVar32) - fVar27;
            if (0.0 < fVar25) goto LAB_00228f6c;
            goto switchD_00228fe0_caseD_2;
          }
          fVar25 = fVar30 + fVar27;
          if (fVar32 + fVar35 < fVar25) {
            iVar9 = 4;
            if (fVar31 + (fVar30 - (fVar32 + fVar32)) <= fVar25 - (fVar32 + fVar35)) {
              iVar9 = 2;
            }
            goto joined_r0x00228f2c;
          }
          if (0.0 < fVar25) {
            iVar9 = 3;
            if (0.0 <= fVar27) {
              iVar9 = 0;
            }
            goto joined_r0x00228f2c;
          }
switchD_00228fe0_caseD_1:
          for (bVar7 = *(byte *)((long)param_1 + (ulong)(uVar2 & 0x7f) + 0x78c); bVar7 != 0xff;
              bVar7 = *(byte *)((long)param_1 + (ulong)bVar7 + 0x70c)) {
            if (*(uint *)((long)param_1 + (ulong)bVar7 * 4 + 0x50c) == uVar2) goto LAB_002293ac;
          }
          goto switchD_00228fe0_caseD_6;
        }
        fVar25 = fVar31 + fVar35;
        if (fVar25 <= fVar27 + fVar32) {
          if (0.0 < fVar25) {
            iVar9 = 5;
            if (0.0 <= fVar35) {
              iVar9 = 0;
            }
            goto joined_r0x00228f2c;
          }
switchD_00228fe0_caseD_2:
          for (bVar7 = *(byte *)((long)param_1 + (ulong)(uVar5 & 0x7f) + 0x78c); bVar7 != 0xff;
              bVar7 = *(byte *)((long)param_1 + (ulong)bVar7 + 0x70c)) {
            if (*(uint *)((long)param_1 + (ulong)bVar7 * 4 + 0x50c) == uVar5) goto LAB_002293ac;
          }
          goto switchD_00228fe0_caseD_6;
        }
        fVar25 = fVar25 - (fVar27 + fVar32);
LAB_00228f6c:
        iVar9 = 4;
        if (fVar31 + (fVar30 - (fVar32 + fVar32)) <= fVar25) {
          iVar9 = 1;
        }
        if (iVar9 != 7) goto LAB_00228fd0;
      }
LAB_002293ac:
      pfVar20 = (float *)((long)pfVar20 + 1);
    } while (pfVar20 < (float *)((ulong)uVar3 / 0x11));
  }
  return;
}


