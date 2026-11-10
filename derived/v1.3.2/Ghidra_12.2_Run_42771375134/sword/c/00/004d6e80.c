/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6e80; name: FUN_004d6e80
 */


/* WARNING: Removing unreachable block (ram,0x004d6f04) */

void FUN_004d6e80(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 *param_4,
                 uint param_5)

{
  short *psVar1;
  float *pfVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  void *__dest;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  bVar4 = *(byte *)(param_2 + 0x5d);
  uVar14 = (ulong)bVar4;
  __dest = (void *)((long)&local_90 - ((ulong)((uint)bVar4 * 4 + 0xf) & 0x7f0));
  bVar5 = *(byte *)(param_2 + 0x5c);
  if (bVar5 - 4 < 4) {
    if (bVar4 != 0) {
      memcpy(__dest,*(void **)(param_2 + 0x20),uVar14 << 2);
      goto joined_r0x004d6f24;
    }
LAB_004d6f2c:
    bVar9 = false;
  }
  else {
    if (bVar5 < 4) {
      if (bVar4 == 0) goto LAB_004d6f2c;
      lVar12 = *(long *)(param_2 + 0x20);
      if (bVar4 == 1) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        do {
          psVar1 = (short *)(lVar12 + lVar13 * 2);
          pfVar2 = (float *)((long)__dest + lVar13 * 4);
          lVar13 = lVar13 + 2;
          *pfVar2 = (float)(int)*psVar1 * DAT_01d4c1ec;
          pfVar2[1] = (float)(int)psVar1[1] * DAT_01d4c1ec;
        } while (uVar14 - (uVar14 & 1) != lVar13);
        if ((bVar4 & 1) == 0) goto joined_r0x004d6f24;
      }
      *(float *)((long)__dest + lVar13 * 4) =
           (float)(int)*(short *)(lVar12 + lVar13 * 2) * DAT_01d4c1ec;
    }
joined_r0x004d6f24:
    bVar9 = false;
    if ((2 < bVar4) && (bVar9 = false, *(int *)(param_2 + 0x50) == 0)) {
      bVar9 = (bVar5 & 0xfc) != 4;
    }
  }
  fVar15 = (float)NEON_ucvtf(*param_3);
  if (*(float *)(param_2 + 0x54) != fVar15 / (float)param_5) {
    *(float *)(param_2 + 0x54) = fVar15 / (float)param_5;
    *(undefined1 *)(param_2 + 0x5f) = 1;
  }
  FUN_004d7270(param_1,param_2,1);
  *(char *)(param_2 + 0x5e) = (char)(*(ushort *)(param_3 + 2) >> 6);
  uVar3 = *(ushort *)(param_3 + 2) & 0x3f;
  if (uVar3 == 0x20) {
    uVar11 = *(byte *)(param_2 + 0x5d) - 1;
    if (3 < uVar11) {
      uVar11 = 7;
      iVar10 = *(int *)(param_2 + 0x50);
      *(undefined1 *)(param_2 + 0x5c) = 7;
      goto joined_r0x004d7048;
    }
    uVar11 = 0x6060504 >> (ulong)((uVar11 & 3) << 3);
    *(char *)(param_2 + 0x5c) = (char)uVar11;
    if (*(int *)(param_2 + 0x50) == 0) goto LAB_004d7094;
LAB_004d7100:
    if (!bVar9) goto LAB_004d7160;
    memcpy(&local_90,param_4,0x30);
    iVar10 = FUN_00490530(&local_90,*(undefined2 *)(param_4 + 2),*(undefined4 *)(param_4 + 1));
    if (iVar10 != 1) goto LAB_004d7160;
    local_80 = CONCAT22(*(undefined2 *)((long)param_4 + 0x12),(undefined2)local_80);
    FUN_004da280(param_4,&local_90);
  }
  else {
    if (uVar3 == 0x10) {
      uVar11 = *(byte *)(param_2 + 0x5d) - 1;
      if (uVar11 < 4) {
        uVar11 = 0x2020100 >> (ulong)((uVar11 & 3) << 3);
        iVar10 = *(int *)(param_2 + 0x50);
        *(char *)(param_2 + 0x5c) = (char)uVar11;
      }
      else {
        uVar11 = 0;
        iVar10 = *(int *)(param_2 + 0x50);
        *(undefined1 *)(param_2 + 0x5c) = 3;
      }
    }
    else {
      uVar11 = 0xff;
      iVar10 = *(int *)(param_2 + 0x50);
      *(undefined1 *)(param_2 + 0x5c) = 0xff;
    }
joined_r0x004d7048:
    if (iVar10 != 0) goto LAB_004d7100;
LAB_004d7094:
    if (((uVar11 & 0xfc) == 4) || (*(byte *)(param_2 + 0x5d) < 3)) goto LAB_004d7100;
    if (bVar9) goto LAB_004d7160;
    memcpy(&local_90,param_4,0x30);
    iVar10 = FUN_00490530(&local_90,*(undefined2 *)(param_4 + 2),*(undefined4 *)(param_4 + 1));
    if (iVar10 != 1) goto LAB_004d7160;
    local_80 = CONCAT22(*(undefined2 *)((long)param_4 + 0x12),(undefined2)local_80);
    FUN_004da3f0(param_4,&local_90);
  }
  FUN_004905b0(param_4);
  *(undefined4 *)(param_4 + 2) = local_80;
  param_4[1] = local_88;
  *param_4 = local_90;
LAB_004d7160:
  fVar6 = DAT_01d4c564;
  fVar15 = DAT_01d4c478;
  if (*(byte *)(param_2 + 0x5c) - 4 < 4) {
    if (*(char *)(param_2 + 0x5d) != '\0') {
      uVar14 = 0;
      do {
        lVar12 = uVar14 * 4;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(*(long *)(param_2 + 0x20) + lVar12) = *(undefined4 *)((long)__dest + lVar12)
        ;
      } while (uVar14 < *(byte *)(param_2 + 0x5d));
    }
  }
  else if ((*(byte *)(param_2 + 0x5c) < 4) && (*(char *)(param_2 + 0x5d) != '\0')) {
    uVar14 = 0;
    do {
      fVar16 = *(float *)((long)__dest + uVar14 * 4) * fVar6;
      fVar18 = (float)NEON_fminnm(fVar16,fVar6);
      fVar17 = fVar15;
      if (fVar15 < fVar18) {
        fVar17 = fVar6;
      }
      bVar9 = false;
      bVar7 = true;
      bVar8 = false;
      if (fVar16 < fVar6) {
        bVar9 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar18) && !NAN(fVar15)) {
          bVar9 = fVar18 < fVar15;
          bVar7 = fVar18 == fVar15;
          bVar8 = false;
        }
      }
      if (!bVar7 && bVar9 == bVar8) {
        fVar17 = fVar16;
      }
      *(short *)(*(long *)(param_2 + 0x20) + uVar14 * 2) = (short)(int)fVar17;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(byte *)(param_2 + 0x5d));
  }
  return;
}


