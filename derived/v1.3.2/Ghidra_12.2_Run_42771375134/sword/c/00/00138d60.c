/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00138d60; name: FUN_00138d60
 */


void FUN_00138d60(long param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_02710c28;
  lVar16 = *(long *)(param_1 + 0x14d0);
  if (lVar16 != 0) {
    lVar19 = *(long *)(param_1 + 0x10);
    lVar20 = *(long *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x14d8);
    if (iVar1 == 0) {
      uVar17 = 1;
    }
    else {
      iVar8 = iVar1 * -0x20;
      uVar14 = iVar1 - 1;
      uVar17 = 1;
      do {
        iVar8 = iVar8 + 0x20;
        uVar2 = *(uint *)(lVar16 + (ulong)uVar14 * 4);
        if (uVar2 != 0) {
          uVar2 = uVar2 | uVar2 >> 1;
          uVar2 = uVar2 | uVar2 >> 2;
          uVar2 = uVar2 | uVar2 >> 4;
          uVar2 = uVar2 | uVar2 >> 8;
          uVar17 = (ulong)(((uint)(*(int *)(PTR_DAT_02710cb8 +
                                           (ulong)((uVar2 | uVar2 >> 0x10) * 0x7c4acdd >> 0x1b) * 4)
                                  - iVar8) >> 5) + 1);
          break;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0xffffffff);
    }
    uVar18 = 0;
    do {
      uVar14 = *(uint *)(lVar16 + uVar18 * 4);
      if (uVar14 != 0) {
        do {
          while( true ) {
            uVar9 = (ulong)(*(uint *)(puVar6 + (ulong)((uVar14 & -uVar14) * 0x77cb531 >> 0x1b) * 4)
                           | (int)uVar18 << 5);
            uVar3 = *(ushort *)(lVar20 + uVar9 * 0xc + 4);
            if (uVar3 == 0) break;
            lVar10 = lVar20 + uVar9 * 0xc;
            if (uVar3 == 1) {
              puVar12 = (ushort *)(lVar10 + 8);
            }
            else {
              puVar12 = (ushort *)
                        (*(long *)(param_1 + (ulong)uVar3 * 0x10 + 0x98) +
                        (ulong)*(uint *)(lVar10 + 8) * 4);
            }
            lVar10 = *(long *)(lVar19 + (ulong)puVar12[1] * 0x38 + 0x20);
            puVar11 = (uint *)(*(long *)(lVar10 + 0x80) + (ulong)*puVar12 * 8);
            uVar2 = puVar11[1];
            if ((uVar2 & 1) == 0) {
              lVar10 = *(long *)(lVar10 + 0xa0);
            }
            else {
              lVar10 = *(long *)(lVar10 + 0x98);
            }
            puVar13 = (undefined8 *)(lVar10 + (ulong)*puVar11 * 0x18);
            local_68 = puVar13[2];
            local_78 = *puVar13;
            local_70._4_4_ = (uint)((ulong)puVar13[1] >> 0x20);
            bVar7 = *param_2 <= local_70._4_4_;
            local_70 = puVar13[1];
            if (bVar7) goto LAB_00138f60;
LAB_00139050:
            uVar14 = uVar14 - 1 & uVar14;
            if (uVar14 == 0) goto LAB_0013905c;
          }
          puVar11 = (uint *)(lVar20 + uVar9 * 0xc);
          uVar9 = (ulong)*puVar11;
          pfVar15 = (float *)(*(long *)(param_1 + 0x14c0) + uVar9 * 0x18);
          fVar26 = *(float *)(*(long *)(param_1 + 0x14c8) + uVar9 * 4);
          fVar21 = *pfVar15 - fVar26;
          fVar23 = pfVar15[1] - fVar26;
          fVar24 = pfVar15[2] - fVar26;
          fVar22 = pfVar15[3] + fVar26;
          uVar2 = (uint)fVar21 | 0x80000000;
          fVar25 = pfVar15[5] + fVar26;
          if ((int)fVar21 < 0) {
            uVar2 = ~(uint)fVar21;
          }
          fVar26 = pfVar15[4] + fVar26;
          uVar4 = (uint)fVar23 | 0x80000000;
          if ((int)fVar23 < 0) {
            uVar4 = ~(uint)fVar23;
          }
          local_78 = CONCAT44(uVar4 >> 1,uVar2 >> 1);
          uVar2 = (uint)fVar24 | 0x80000000;
          if ((int)fVar24 < 0) {
            uVar2 = ~(uint)fVar24;
          }
          uVar4 = (uint)fVar22 | 0x80000000;
          if ((int)fVar22 < 0) {
            uVar4 = ~(uint)fVar22;
          }
          local_70 = CONCAT44(uVar4 >> 1,uVar2 >> 1);
          uVar2 = (uint)fVar26 | 0x80000000;
          if ((int)fVar26 < 0) {
            uVar2 = ~(uint)fVar26;
          }
          uVar5 = (uint)fVar25 | 0x80000000;
          if ((int)fVar25 < 0) {
            uVar5 = ~(uint)fVar25;
          }
          local_68 = CONCAT44(uVar5 >> 1,uVar2 >> 1);
          uVar2 = puVar11[2];
          if (uVar4 >> 1 < *param_2) goto LAB_00139050;
LAB_00138f60:
          if ((((param_2[3] < (uint)local_78) || ((uint)local_68 < param_2[1])) ||
              (param_2[4] < local_78._4_4_)) ||
             ((local_68._4_4_ < param_2[2] || (param_2[5] < (uint)local_70)))) goto LAB_00139050;
          FUN_00139090(param_1,uVar2,&local_78,param_3,param_4);
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
LAB_0013905c:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar17);
  }
  return;
}


