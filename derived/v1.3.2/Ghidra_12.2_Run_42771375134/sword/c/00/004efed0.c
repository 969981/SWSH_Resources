/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004efed0; name: FUN_004efed0
 */


void FUN_004efed0(long param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  ulong unaff_x21;
  uint unaff_w22;
  float fVar10;
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
  
  uVar6 = *(uint *)((long)param_2 + 0x1d8);
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 100) = 0;
  *(uint *)((long)param_2 + 0x24) = uVar6;
  *(undefined4 *)((long)param_2 + 0x28) = param_3;
  if (0 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
    memset(param_2,0xff,(ulong)uVar6 << 2);
  }
  FUN_004f0140(param_1,param_2);
  iVar1 = *(int *)((long)param_2 + 0x2c);
  iVar7 = *(int *)((long)param_2 + 0x30);
  uVar6 = *(uint *)((long)param_2 + 0x24);
  if ((int)uVar6 <= iVar7 + iVar1) {
    return;
  }
  do {
    iVar2 = uVar6 - *(int *)((long)param_2 + 0x28);
    if (iVar2 <= iVar1 || iVar2 <= iVar7) {
      if ((int)uVar6 < 1) {
        return;
      }
      uVar5 = 0;
      do {
        while (*(int *)((long)param_2 + uVar5 * 4) != -1) {
          uVar5 = uVar5 + 1;
          if ((long)(int)uVar6 <= (long)uVar5) {
            return;
          }
        }
        FUN_004f0300(param_1,uVar5 & 0xffffffff,iVar2 <= iVar1,param_2);
        uVar6 = *(uint *)((long)param_2 + 0x24);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar6);
      return;
    }
    if (0 < (int)uVar6) {
      fVar12 = -1.0;
      uVar5 = 0;
      pfVar8 = (float *)((long)param_2 + 0x84);
      do {
        if (*(int *)((long)param_2 + uVar5 * 4) == -1) {
          fVar19 = pfVar8[-1];
          fVar15 = (float)NEON_fminnm(pfVar8[-4],*(undefined4 *)((long)param_2 + 0x38));
          fVar17 = pfVar8[-2];
          fVar14 = (float)NEON_fminnm(pfVar8[-5],*(undefined4 *)((long)param_2 + 0x34));
          fVar10 = (float)NEON_fminnm(pfVar8[-5],*(undefined4 *)((long)param_2 + 0x4c));
          fVar11 = fVar17;
          if (fVar17 <= *(float *)((long)param_2 + 0x58)) {
            fVar11 = *(float *)((long)param_2 + 0x58);
          }
          fVar13 = (float)NEON_fminnm(pfVar8[-4],*(undefined4 *)((long)param_2 + 0x50));
          fVar17 = (fVar17 - fVar14) * 0.5;
          fVar14 = fVar19;
          if (fVar19 <= *(float *)((long)param_2 + 0x5c)) {
            fVar14 = *(float *)((long)param_2 + 0x5c);
          }
          fVar18 = (float)NEON_fminnm(pfVar8[-3],*(undefined4 *)((long)param_2 + 0x3c));
          fVar16 = (float)NEON_fminnm(pfVar8[-3],*(undefined4 *)((long)param_2 + 0x54));
          fVar20 = *pfVar8;
          fVar19 = (fVar19 - fVar15) * 0.5;
          fVar15 = fVar20;
          if (fVar20 <= *(float *)((long)param_2 + 0x60)) {
            fVar15 = *(float *)((long)param_2 + 0x60);
          }
          fVar11 = (fVar11 - fVar10) * 0.5;
          fVar10 = (fVar14 - fVar13) * 0.5;
          fVar13 = (fVar20 - fVar18) * 0.5;
          fVar14 = (fVar15 - fVar16) * 0.5;
          fVar15 = fVar17 * fVar17 + fVar19 * fVar19 + fVar13 * fVar13;
          fVar11 = fVar11 * fVar11 + fVar10 * fVar10 + fVar14 * fVar14;
          fVar14 = *(float *)(param_1 + 0x10) * fVar15 * SQRT(fVar15) -
                   *(float *)((long)param_2 + 100);
          fVar11 = fVar11 * *(float *)(param_1 + 0x10) * SQRT(fVar11) -
                   *(float *)((long)param_2 + 0x68);
          fVar10 = fVar11 - fVar14;
          bVar4 = fVar10 < 0.0;
          fVar11 = fVar14 - fVar11;
          if (!bVar4) {
            fVar11 = fVar10;
          }
          if (fVar11 <= fVar12) {
            if (fVar11 == fVar12) {
              uVar9 = (uint)uVar5;
              uVar3 = (uint)bVar4;
              if (*(int *)((long)param_2 + (long)(int)unaff_w22 * 4 + 0x2c) <=
                  *(int *)((long)param_2 + (ulong)(fVar10 < 0.0) * 4 + 0x2c)) {
                uVar9 = (uint)unaff_x21;
                uVar3 = unaff_w22;
              }
              unaff_w22 = uVar3;
              unaff_x21 = (ulong)uVar9;
            }
          }
          else {
            unaff_x21 = uVar5 & 0xffffffff;
            fVar12 = fVar11;
            unaff_w22 = (uint)bVar4;
          }
        }
        uVar5 = uVar5 + 1;
        pfVar8 = pfVar8 + 10;
      } while (uVar6 != uVar5);
    }
    FUN_004f0300(param_1,unaff_x21 & 0xffffffff,unaff_w22,param_2);
    iVar1 = *(int *)((long)param_2 + 0x2c);
    iVar7 = *(int *)((long)param_2 + 0x30);
    uVar6 = *(uint *)((long)param_2 + 0x24);
  } while (iVar7 + iVar1 < (int)uVar6);
  return;
}


