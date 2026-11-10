/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a78d0; name: FUN_001a78d0
 */


void FUN_001a78d0(long param_1,ulong param_2,uint param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_b8;
  uint local_b0;
  long local_a8;
  
  lVar19 = param_1 + (param_2 & 0xffffffff) * 0x38;
  puVar5 = *(undefined8 **)(lVar19 + 0x80);
  if (*(undefined8 **)(lVar19 + 0x78) != puVar5) {
    lVar11 = param_1 + (param_2 & 0xffffffff) * 0x38;
    plVar17 = (long *)(lVar19 + 0x68);
    puVar1 = (uint *)(lVar11 + 0x70);
    puVar8 = *(undefined8 **)(lVar19 + 0x78);
    do {
      local_b8 = *puVar8;
      local_b0 = *(uint *)(puVar8 + 1);
      local_a8 = (long)puVar8 + 0xc;
      puVar2 = (undefined8 *)(local_a8 + (ulong)local_b0 * 0x20);
      if (param_3 <= local_b0) {
        *puVar1 = 0;
        if (local_b0 != 0) {
          uVar10 = 0;
          plVar20 = (long *)((long)puVar8 + 0x14);
          lVar18 = (ulong)local_b0 - 1;
          uVar4 = *(uint *)(lVar11 + 0x74);
          if ((uVar4 & 0x7fffffff) != 0) goto LAB_001a79c4;
          uVar7 = 0;
          do {
            iVar3 = uVar4 << 1;
            if (uVar7 == 0) {
              iVar3 = 1;
            }
            FUN_001aac20(plVar17,iVar3);
            uVar10 = *puVar1;
LAB_001a79c4:
            do {
              lVar6 = *plVar17;
              *puVar1 = uVar10 + 1;
              uVar9 = (ulong)uVar10;
              pfVar12 = (float *)(lVar6 + (ulong)uVar10 * 0x38);
              if (*(char *)((long)plVar20 + 0x11) == '\0') {
                pfVar13 = (float *)*plVar20;
                fVar21 = pfVar13[2];
                fVar24 = pfVar13[3];
                fVar23 = *pfVar13;
                fVar22 = pfVar13[1];
                pfVar14 = (float *)plVar20[-1];
                fVar25 = *pfVar14;
                fVar36 = pfVar14[1];
                fVar42 = pfVar14[2];
                fVar40 = pfVar14[3];
                fVar31 = pfVar13[5] * -2.0;
                fVar27 = pfVar13[6] * -2.0;
                fVar29 = pfVar13[4] * -2.0;
                fVar39 = pfVar14[5] * -2.0;
                fVar34 = pfVar14[4] * -2.0;
                fVar32 = pfVar14[6] * -2.0;
                lVar16 = lVar6 + uVar9 * 0x38;
                fVar26 = fVar40 * fVar40 + -0.5;
                fVar43 = fVar34 * fVar25 + fVar39 * fVar36 + fVar32 * fVar42;
                fVar37 = ((fVar24 * fVar40 - fVar23 * fVar25) - fVar22 * fVar36) - fVar21 * fVar42;
                fVar33 = (fVar23 * fVar36 + (fVar40 * -fVar21 - fVar24 * fVar42)) - fVar22 * fVar25;
                fVar38 = fVar24 * fVar24 + -0.5;
                fVar44 = fVar29 * fVar23 + fVar31 * fVar22 + fVar27 * fVar21;
                fVar30 = ((fVar40 * -fVar23 - fVar24 * fVar25) + fVar22 * fVar42) - fVar21 * fVar36;
                fVar28 = (fVar21 * fVar25 + (fVar40 * -fVar22 - fVar24 * fVar36)) - fVar23 * fVar42;
                fVar41 = fVar25 * fVar43 +
                         (fVar34 * fVar26 - fVar40 * (fVar32 * fVar36 - fVar39 * fVar42));
                fVar35 = fVar36 * fVar43 +
                         (fVar39 * fVar26 - fVar40 * (fVar34 * fVar42 - fVar32 * fVar25));
                fVar32 = (fVar32 * fVar26 - fVar40 * (fVar39 * fVar25 - fVar34 * fVar36)) +
                         fVar42 * fVar43;
                fVar35 = fVar35 + fVar35;
                fVar32 = fVar32 + fVar32;
                fVar41 = fVar41 + fVar41;
                fVar25 = (fVar41 * -fVar23 - fVar35 * fVar22) - fVar32 * fVar21;
                *pfVar12 = fVar30;
                *(float *)(lVar16 + 4) = fVar28;
                *(float *)(lVar16 + 8) = fVar33;
                fVar26 = fVar23 * fVar44 +
                         (fVar29 * fVar38 - fVar24 * (fVar27 * fVar22 - fVar31 * fVar21)) +
                         ((fVar38 * fVar41 + fVar24 * (fVar35 * fVar21 - fVar32 * fVar22)) -
                         fVar25 * fVar23);
                fVar36 = fVar22 * fVar44 +
                         (fVar31 * fVar38 - fVar24 * (fVar29 * fVar21 - fVar27 * fVar23)) +
                         ((fVar38 * fVar35 + fVar24 * (fVar32 * fVar23 - fVar41 * fVar21)) -
                         fVar25 * fVar22);
                fVar21 = (fVar27 * fVar38 - fVar24 * (fVar31 * fVar23 - fVar29 * fVar22)) +
                         fVar21 * fVar44 +
                         ((fVar38 * fVar32 + fVar24 * (fVar41 * fVar22 - fVar35 * fVar23)) -
                         fVar25 * fVar21);
                *(float *)(lVar16 + 0xc) = fVar37;
                *(float *)(lVar16 + 0x10) = fVar26;
                *(float *)(lVar16 + 0x14) = fVar36;
                *(float *)(lVar16 + 0x18) = fVar21;
              }
              else {
                pfVar13 = (float *)*plVar20;
                pfVar14 = (float *)plVar20[1];
                pfVar15 = (float *)plVar20[-1];
                fVar37 = pfVar15[8];
                fVar36 = pfVar15[9];
                fVar41 = pfVar14[4] * -2.0;
                fVar39 = pfVar15[10];
                fVar30 = pfVar15[0xb];
                fVar42 = pfVar14[5] * -2.0;
                fVar21 = pfVar13[2];
                fVar26 = pfVar13[3];
                fVar24 = *pfVar13;
                fVar25 = pfVar13[1];
                fVar43 = pfVar14[6] * -2.0;
                fVar34 = (pfVar15[0xc] - pfVar13[4]) + (pfVar15[0xc] - pfVar13[4]);
                fVar33 = (pfVar15[0xd] - pfVar13[5]) + (pfVar15[0xd] - pfVar13[5]);
                fVar40 = (pfVar15[0xe] - pfVar13[6]) + (pfVar15[0xe] - pfVar13[6]);
                fVar23 = *pfVar14;
                fVar22 = pfVar14[1];
                fVar32 = pfVar14[2];
                fVar31 = pfVar14[3];
                fVar27 = ((fVar26 * fVar37 - fVar30 * fVar24) - fVar39 * fVar25) + fVar36 * fVar21;
                fVar38 = ((fVar26 * fVar39 - fVar30 * fVar21) - fVar36 * fVar24) + fVar37 * fVar25;
                fVar29 = fVar26 * fVar26 + -0.5;
                fVar28 = ((fVar26 * fVar36 - fVar30 * fVar25) - fVar37 * fVar21) + fVar39 * fVar24;
                fVar35 = fVar26 * fVar30 + fVar37 * fVar24 + fVar36 * fVar25 + fVar39 * fVar21;
                fVar36 = fVar31 * fVar31 + -0.5;
                fVar44 = fVar41 * fVar23 + fVar42 * fVar22 + fVar43 * fVar32;
                fVar37 = (fVar34 * -fVar24 - fVar33 * fVar25) - fVar40 * fVar21;
                fVar30 = fVar23 * fVar44 +
                         (fVar41 * fVar36 - fVar31 * (fVar43 * fVar22 - fVar42 * fVar32));
                fVar39 = fVar22 * fVar44 +
                         (fVar42 * fVar36 - fVar31 * (fVar41 * fVar32 - fVar43 * fVar23));
                fVar41 = (fVar43 * fVar36 - fVar31 * (fVar42 * fVar23 - fVar41 * fVar22)) +
                         fVar32 * fVar44;
                fVar41 = fVar41 + fVar41;
                fVar30 = fVar30 + fVar30;
                fVar39 = fVar39 + fVar39;
                fVar42 = fVar35 * fVar35 + -0.5;
                fVar36 = fVar38 * fVar41 + fVar27 * fVar30 + fVar28 * fVar39;
                lVar16 = lVar6 + uVar9 * 0x38;
                *pfVar12 = ((fVar27 * fVar31 - fVar35 * fVar23) - fVar28 * fVar32) + fVar38 * fVar22
                ;
                *(float *)(lVar16 + 4) =
                     ((fVar28 * fVar31 - fVar35 * fVar22) - fVar38 * fVar23) + fVar27 * fVar32;
                *(float *)(lVar16 + 8) =
                     ((fVar38 * fVar31 - fVar35 * fVar32) - fVar27 * fVar22) + fVar28 * fVar23;
                *(float *)(lVar16 + 0xc) =
                     fVar35 * fVar31 + fVar27 * fVar23 + fVar28 * fVar22 + fVar38 * fVar32;
                *(float *)(lVar16 + 0x10) =
                     ((fVar29 * fVar34 + fVar26 * (fVar33 * fVar21 - fVar40 * fVar25)) -
                     fVar37 * fVar24) +
                     fVar27 * fVar36 +
                     fVar42 * fVar30 + fVar35 * (fVar28 * fVar41 - fVar38 * fVar39);
                *(float *)(lVar16 + 0x14) =
                     ((fVar29 * fVar33 + fVar26 * (fVar40 * fVar24 - fVar34 * fVar21)) -
                     fVar37 * fVar25) +
                     fVar28 * fVar36 +
                     fVar42 * fVar39 + fVar35 * (fVar38 * fVar30 - fVar27 * fVar41);
                *(float *)(lVar16 + 0x18) =
                     ((fVar29 * fVar40 + fVar26 * (fVar34 * fVar25 - fVar33 * fVar24)) -
                     fVar37 * fVar21) +
                     fVar42 * fVar41 + fVar35 * (fVar27 * fVar39 - fVar28 * fVar30) +
                     fVar38 * fVar36;
                fVar29 = *pfVar13;
                fVar31 = pfVar13[1];
                fVar36 = pfVar15[8];
                fVar41 = pfVar15[9];
                fVar32 = pfVar13[2];
                fVar33 = pfVar13[3];
                fVar30 = pfVar15[10];
                fVar28 = pfVar15[0xb];
                fVar25 = *pfVar15;
                fVar23 = pfVar15[1];
                fVar26 = pfVar15[5] * -2.0;
                fVar21 = pfVar15[4] * -2.0;
                fVar22 = pfVar15[2];
                fVar24 = pfVar15[3];
                fVar39 = (pfVar15[0xd] - pfVar13[5]) + (pfVar15[0xd] - pfVar13[5]);
                fVar27 = pfVar15[6] * -2.0;
                fVar34 = (pfVar15[0xc] - pfVar13[4]) + (pfVar15[0xc] - pfVar13[4]);
                fVar35 = (pfVar15[0xe] - pfVar13[6]) + (pfVar15[0xe] - pfVar13[6]);
                fVar38 = ((fVar33 * fVar36 - fVar28 * fVar29) - fVar30 * fVar31) + fVar41 * fVar32;
                fVar42 = ((fVar33 * fVar41 - fVar28 * fVar31) - fVar36 * fVar32) + fVar30 * fVar29;
                fVar40 = ((fVar33 * fVar30 - fVar28 * fVar32) - fVar41 * fVar29) + fVar36 * fVar31;
                fVar37 = fVar21 * fVar25 + fVar26 * fVar23 + fVar27 * fVar22;
                fVar44 = fVar33 * fVar33 + -0.5;
                fVar43 = fVar33 * fVar28 + fVar36 * fVar29 + fVar41 * fVar31 + fVar30 * fVar32;
                fVar41 = (fVar34 * -fVar29 - fVar39 * fVar31) - fVar35 * fVar32;
                fVar36 = fVar24 * fVar24 + -0.5;
                fVar30 = fVar25 * fVar37 +
                         (fVar21 * fVar36 - fVar24 * (fVar27 * fVar23 - fVar26 * fVar22));
                fVar28 = fVar23 * fVar37 +
                         (fVar26 * fVar36 - fVar24 * (fVar21 * fVar22 - fVar27 * fVar25));
                fVar21 = (fVar27 * fVar36 - fVar24 * (fVar26 * fVar25 - fVar21 * fVar23)) +
                         fVar22 * fVar37;
                fVar30 = fVar30 + fVar30;
                fVar28 = fVar28 + fVar28;
                fVar21 = fVar21 + fVar21;
                fVar27 = fVar43 * fVar43 + -0.5;
                fVar37 = fVar40 * fVar21 + fVar38 * fVar30 + fVar42 * fVar28;
                fVar26 = ((fVar44 * fVar34 + fVar33 * (fVar39 * fVar32 - fVar35 * fVar31)) -
                         fVar41 * fVar29) +
                         fVar38 * fVar37 +
                         fVar27 * fVar30 + fVar43 * (fVar42 * fVar21 - fVar40 * fVar28);
                fVar36 = ((fVar44 * fVar39 + fVar33 * (fVar35 * fVar29 - fVar34 * fVar32)) -
                         fVar41 * fVar31) +
                         fVar42 * fVar37 +
                         fVar27 * fVar28 + fVar43 * (fVar40 * fVar30 - fVar38 * fVar21);
                fVar21 = ((fVar44 * fVar35 + fVar33 * (fVar34 * fVar31 - fVar39 * fVar29)) -
                         fVar41 * fVar32) +
                         fVar27 * fVar21 + fVar43 * (fVar38 * fVar28 - fVar42 * fVar30) +
                         fVar40 * fVar37;
                fVar30 = ((fVar38 * fVar24 - fVar43 * fVar25) - fVar42 * fVar22) + fVar40 * fVar23;
                fVar28 = ((fVar42 * fVar24 - fVar43 * fVar23) - fVar40 * fVar25) + fVar38 * fVar22;
                fVar33 = ((fVar40 * fVar24 - fVar43 * fVar22) - fVar38 * fVar23) + fVar42 * fVar25;
                fVar37 = fVar43 * fVar24 + fVar38 * fVar25 + fVar42 * fVar23 + fVar40 * fVar22;
              }
              lVar6 = lVar6 + uVar9 * 0x38;
              *(float *)(lVar6 + 0x1c) = fVar30;
              *(float *)(lVar6 + 0x20) = fVar28;
              *(float *)(lVar6 + 0x24) = fVar33;
              *(float *)(lVar6 + 0x28) = fVar37;
              *(float *)(lVar6 + 0x2c) = fVar26;
              *(float *)(lVar6 + 0x30) = fVar36;
              *(float *)(lVar6 + 0x34) = fVar21;
              if (lVar18 == 0) goto LAB_001a81f4;
              uVar10 = *puVar1;
              plVar20 = plVar20 + 4;
              lVar18 = lVar18 + -1;
              uVar4 = *(uint *)(lVar11 + 0x74);
              uVar7 = uVar4 & 0x7fffffff;
            } while (uVar10 < uVar7);
          } while( true );
        }
LAB_001a81f4:
        lVar18 = *(long *)(param_1 + 0x60);
        FUN_001a8280(param_1,*(undefined8 *)(*(long *)(lVar18 + 0x10) + 0x38),
                     *(undefined8 *)(lVar18 + 0x28),*(undefined8 *)(lVar18 + 0x78),
                     *(undefined8 *)(lVar18 + 0x80),lVar18 + 0x50,*(undefined8 *)(lVar18 + 0x70),
                     lVar11 + 0x88,*(undefined8 *)(lVar18 + 0x40),
                     *(undefined8 *)(*(long *)(lVar18 + 0x10) + 0x40),*plVar17,&local_b8);
        puVar5 = *(undefined8 **)(lVar19 + 0x80);
      }
      puVar8 = puVar2;
    } while (puVar2 != puVar5);
  }
  return;
}


