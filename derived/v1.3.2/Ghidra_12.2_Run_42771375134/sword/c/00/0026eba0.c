/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026eba0; name: FUN_0026eba0
 */


void FUN_0026eba0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  
  uVar5 = *(uint *)(param_1 + 0x12e0);
  if (uVar5 != 0) {
    FUN_00271480(*(undefined8 *)(param_1 + 0x12d8),uVar5,&local_70,&local_60,0x20);
    lVar20 = *(long *)(*(long *)(param_1 + 0xe98) + 0x1108);
    uVar19 = 0;
    do {
      uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x12d8) + uVar19 * 0x10 + 8);
      lVar15 = lVar20 + uVar13 * 0x3c;
      uVar3 = *(uint *)(lVar15 + 0x24);
      uVar4 = *(uint *)(lVar15 + 0x28);
      iVar16 = *(int *)(param_1 + 0xe94);
      uVar2 = uVar4;
      uVar12 = uVar3;
      if (uVar4 <= uVar3) {
        uVar2 = uVar3;
        uVar12 = uVar4;
      }
      if (iVar16 != 0x80) {
        uVar11 = uVar2 | uVar12 << 0x10;
        uVar11 = uVar11 + (uVar11 << 0xf ^ 0xffffffff);
        uVar11 = (uVar11 ^ uVar11 >> 10) * 9;
        uVar11 = uVar11 ^ uVar11 >> 6;
        uVar11 = uVar11 + (uVar11 << 0xb ^ 0xffffffff);
        lVar1 = param_1 + (ulong)((uVar11 ^ uVar11 >> 0x10) & 0x7f);
        bVar7 = *(byte *)(lVar1 + 0xe14);
        uVar11 = *(uint *)(lVar15 + 0x2c);
        cVar8 = *(char *)(lVar15 + 0x38);
        if (bVar7 == 0xff) {
          puVar18 = (undefined1 *)(lVar1 + 0xe14);
        }
        else {
          do {
            uVar17 = (ulong)bVar7;
            if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar12) &&
               (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar2)) {
              bVar7 = 1;
              goto LAB_0026ece0;
            }
            bVar7 = *(byte *)(param_1 + uVar17 + 0xd94);
          } while (bVar7 != 0xff);
          puVar18 = (undefined1 *)(param_1 + uVar17 + 0xd94);
        }
        *puVar18 = (char)iVar16;
        *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
        uVar6 = *(uint *)(param_1 + 0xe94);
        *(uint *)(param_1 + 0xe94) = uVar6 + 1;
        *(ulong *)(param_1 + 0x994 + (ulong)uVar6 * 8) = CONCAT44(uVar2,uVar12);
        iVar16 = *(int *)(param_1 + 0xe94);
        bVar7 = 0;
LAB_0026ece0:
        uVar2 = uVar11;
        if (uVar11 <= uVar4) {
          uVar2 = uVar4;
          uVar4 = uVar11;
        }
        if (iVar16 != 0x80) {
          uVar12 = uVar2 | uVar4 << 0x10;
          uVar12 = uVar12 + (uVar12 << 0xf ^ 0xffffffff);
          uVar12 = (uVar12 ^ uVar12 >> 10) * 9;
          uVar12 = uVar12 ^ uVar12 >> 6;
          uVar12 = uVar12 + (uVar12 << 0xb ^ 0xffffffff);
          lVar15 = param_1 + (ulong)((uVar12 ^ uVar12 >> 0x10) & 0x7f);
          bVar9 = *(byte *)(lVar15 + 0xe14);
          if (bVar9 == 0xff) {
            puVar18 = (undefined1 *)(lVar15 + 0xe14);
          }
          else {
            do {
              uVar17 = (ulong)bVar9;
              if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar4) &&
                 (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar2)) {
                bVar9 = 1;
                goto LAB_0026eda8;
              }
              bVar9 = *(byte *)(param_1 + uVar17 + 0xd94);
            } while (bVar9 != 0xff);
            puVar18 = (undefined1 *)(param_1 + uVar17 + 0xd94);
          }
          *puVar18 = (char)iVar16;
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar12 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar12 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar12 * 8) = CONCAT44(uVar2,uVar4);
          iVar16 = *(int *)(param_1 + 0xe94);
          bVar9 = 0;
LAB_0026eda8:
          uVar2 = uVar3;
          if (uVar3 <= uVar11) {
            uVar2 = uVar11;
            uVar11 = uVar3;
          }
          if (iVar16 != 0x80) {
            uVar3 = uVar2 | uVar11 << 0x10;
            uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
            uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
            uVar3 = uVar3 ^ uVar3 >> 6;
            uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
            lVar15 = param_1 + (ulong)((uVar3 ^ uVar3 >> 0x10) & 0x7f);
            bVar10 = *(byte *)(lVar15 + 0xe14);
            if (bVar10 == 0xff) {
              puVar18 = (undefined1 *)(lVar15 + 0xe14);
            }
            else {
              do {
                uVar17 = (ulong)bVar10;
                if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar11) &&
                   (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar2)) goto LAB_0026ef10;
                bVar10 = *(byte *)(param_1 + uVar17 + 0xd94);
              } while (bVar10 != 0xff);
              puVar18 = (undefined1 *)(param_1 + uVar17 + 0xd94);
            }
            *puVar18 = (char)iVar16;
            *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
            uVar3 = *(uint *)(param_1 + 0xe94);
            *(uint *)(param_1 + 0xe94) = uVar3 + 1;
            *(ulong *)(param_1 + 0x994 + (ulong)uVar3 * 8) = CONCAT44(uVar2,uVar11);
            if ((cVar8 != '\0') && (!(bool)(bVar7 | bVar9))) {
              puVar14 = (undefined8 *)(lVar20 + uVar13 * 0x3c);
              local_60 = *puVar14;
              uStack_58 = (ulong)*(uint *)(puVar14 + 1);
              local_70 = *(undefined8 *)((long)puVar14 + 0xc);
              uStack_68 = (ulong)*(uint *)((long)puVar14 + 0x14);
              fVar21 = *(float *)(puVar14 + 3);
              uVar13 = CONCAT44(fVar21,fVar21);
              uVar23 = NEON_frsqrte(uVar13,4);
              fVar22 = (float)uVar23;
              fVar24 = (float)((ulong)uVar23 >> 0x20);
              uVar23 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),uVar13,4);
              fVar22 = fVar22 * (float)uVar23;
              fVar24 = fVar24 * (float)((ulong)uVar23 >> 0x20);
              uVar23 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),uVar13,4);
              fVar22 = fVar22 * (float)uVar23;
              fVar24 = fVar24 * (float)((ulong)uVar23 >> 0x20);
              uVar23 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),uVar13,4);
              fVar22 = fVar22 * (float)uVar23;
              fVar24 = fVar24 * (float)((ulong)uVar23 >> 0x20);
              uVar23 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),uVar13,4);
              uVar17 = CONCAT44(fVar24 * (float)((ulong)uVar23 >> 0x20) * fVar21,
                                fVar22 * (float)uVar23 * fVar21);
              FUN_0026e6b0(uVar17 ^ (uVar17 ^ uVar13) &
                                    CONCAT44(-(uint)(fVar21 == 0.0),-(uint)(fVar21 == 0.0)),param_1,
                           &local_60,&local_70,*(undefined4 *)(puVar14 + 6));
            }
          }
        }
      }
LAB_0026ef10:
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar5);
  }
  return;
}


