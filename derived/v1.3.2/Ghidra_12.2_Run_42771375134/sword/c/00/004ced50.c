/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ced50; name: FUN_004ced50
 */


bool FUN_004ced50(long param_1)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return true;
  }
  if (*(char *)(param_1 + 0x17b) == '\0') {
LAB_004cef34:
    cVar2 = *(char *)(param_1 + 0x17d);
    cVar3 = *(char *)(param_1 + 0x18b);
  }
  else {
    *(undefined1 *)(param_1 + 0x17b) = 0;
    if (*(char *)(param_1 + 0x17c) != '\0') {
      fVar7 = *(float *)(param_1 + 0x174);
      *(undefined1 *)(param_1 + 0x17c) = 0;
      puVar5 = PTR_DAT_027133f0;
      fVar8 = DAT_01d4bec4;
      *(float *)(param_1 + 0x170) = fVar7;
      *(undefined2 *)(param_1 + 0x178) = *(undefined2 *)puVar5;
      if (fVar8 < fVar7) {
        *(undefined1 *)(param_1 + 0x17a) = 0;
      }
      if (fVar7 <= fVar8 != (bool)*(char *)(param_1 + 0x17d)) {
        *(undefined1 *)(param_1 + 0x17e) = 0;
      }
      *(bool *)(param_1 + 0x17d) = fVar7 <= fVar8;
      if (fVar8 < fVar7) {
        fVar7 = (float)FUN_004cf6e0(*(undefined2 *)PTR_DAT_02712ac0);
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
        fVar7 = tanf((fVar7 / fVar8) * DAT_01d4bb38);
        fVar7 = 1.0 / fVar7;
        fVar10 = fVar7 * DAT_01d4c27c;
        fVar11 = fVar7 * fVar7;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        fVar12 = fVar10 + 1.0 + fVar11;
        fVar9 = 1.0 / fVar12;
        fVar12 = 2.0 / fVar12;
        fVar8 = fVar9 + fVar9;
        fVar10 = (1.0 - fVar10) + fVar11;
        fVar14 = -(fVar9 * fVar10);
        fVar10 = fVar9 * fVar10;
        fVar11 = fVar8 - fVar8 * fVar11;
        fVar8 = -(-(fVar7 * fVar7) * fVar8) - fVar8;
        fVar15 = fVar9 * fVar14;
        fVar16 = fVar9 * fVar8;
        fVar17 = fVar10 * fVar11;
        fVar18 = fVar11 * fVar11;
        fVar20 = fVar16 + fVar12;
        *(ulong *)(param_1 + 0x18) = CONCAT44(fVar9,fVar9);
        *(ulong *)(param_1 + 0x10) = CONCAT44(fVar9,fVar9);
        fVar13 = fVar9 - fVar11 * fVar12;
        *(float *)(param_1 + 100) = fVar16;
        *(float *)(param_1 + 0x68) = fVar16 * fVar8 + fVar15;
        *(float *)(param_1 + 0x74) = fVar18 - fVar10;
        *(float *)(param_1 + 0x78) = (fVar10 * -2.0 + fVar18) * fVar8;
        fVar7 = fVar12 * fVar14;
        fVar19 = fVar7 - fVar11 * fVar13;
        *(float *)(param_1 + 0x54) = fVar13;
        *(float *)(param_1 + 0x58) = fVar19;
        fVar13 = (fVar15 + fVar9) - fVar11 * fVar20;
        *(float *)(param_1 + 0x38) = fVar20;
        *(float *)(param_1 + 0x3c) = fVar13;
        *(float *)(param_1 + 0x44) = fVar20;
        *(float *)(param_1 + 0x48) = fVar13;
        *(float *)(param_1 + 0x9c) = fVar8;
        *(float *)(param_1 + 0xa0) = fVar14;
        *(float *)(param_1 + 0x2c) = fVar20;
        *(float *)(param_1 + 0x94) = fVar12;
        *(float *)(param_1 + 0x98) = fVar9;
        *(float *)(param_1 + 0x6c) = (fVar16 * fVar8 + fVar15 + fVar15) * fVar8;
        *(float *)(param_1 + 0x70) = fVar8;
        *(float *)(param_1 + 0x7c) = fVar10 * fVar10 + fVar18 * (fVar18 + fVar10 * -3.0);
        *(float *)(param_1 + 0x80) = fVar14;
        *(float *)(param_1 + 0x8c) = (fVar10 * -2.0 * fVar10 - fVar17 * fVar8) * fVar11;
        *(float *)(param_1 + 0x90) = fVar9;
        *(float *)(param_1 + 0x4c) = (fVar7 + fVar9 * fVar17) - fVar11 * fVar13;
        *(float *)(param_1 + 0x50) = fVar12;
        *(float *)(param_1 + 0x5c) = fVar15 - fVar11 * (fVar19 + fVar7);
        *(float *)(param_1 + 0x60) = fVar9;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(float *)(param_1 + 0x84) = fVar17;
        *(float *)(param_1 + 0x88) = fVar17 * fVar8 + fVar10 * fVar10;
      }
      goto LAB_004cef34;
    }
    if ((DAT_01d4bec4 < *(float *)(param_1 + 0x170)) || (DAT_01d4bec4 < *(float *)(param_1 + 0x174))
       ) {
      bVar4 = false;
      *(undefined1 *)(param_1 + 0x17a) = 0;
      bVar6 = false;
      if (*(char *)(param_1 + 0x17d) != '\0') goto LAB_004cf178;
    }
    else {
      bVar4 = true;
      bVar6 = true;
      if (*(char *)(param_1 + 0x17d) != '\x01') {
LAB_004cf178:
        bVar4 = bVar6;
        *(undefined1 *)(param_1 + 0x17e) = 0;
      }
    }
    *(bool *)(param_1 + 0x17d) = bVar4;
    uVar1 = *(undefined2 *)PTR_DAT_027133f0;
    if (!bVar4) {
      uVar1 = 0;
    }
    *(undefined2 *)(param_1 + 0x178) = uVar1;
    cVar2 = *(char *)(param_1 + 0x17d);
    cVar3 = *(char *)(param_1 + 0x18b);
  }
  if (cVar3 == '\0') goto LAB_004cf204;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    fVar7 = *(float *)(param_1 + 0x184);
    *(undefined1 *)(param_1 + 0x18c) = 0;
    puVar5 = PTR_DAT_027133f0;
    fVar8 = DAT_01d4bec4;
    *(float *)(param_1 + 0x180) = fVar7;
    *(undefined2 *)(param_1 + 0x188) = *(undefined2 *)puVar5;
    if (fVar8 < fVar7) {
      *(undefined1 *)(param_1 + 0x18a) = 0;
    }
    if (fVar7 <= fVar8 != (bool)*(char *)(param_1 + 0x18d)) {
      *(undefined1 *)(param_1 + 0x18e) = 0;
    }
    *(bool *)(param_1 + 0x18d) = fVar7 <= fVar8;
    if (fVar8 < fVar7) {
      fVar7 = (float)FUN_004cf7a0(*(undefined2 *)PTR_DAT_02712ac0);
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
      fVar8 = tanf((fVar7 / fVar8) * DAT_01d4bb38);
      fVar7 = DAT_01d4c27c;
      fVar11 = fVar8 * fVar8 + 1.0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      fVar12 = 1.0 / (fVar11 + fVar8 * fVar7);
      fVar9 = fVar12 * -2.0;
      fVar11 = fVar11 - fVar8 * fVar7;
      fVar7 = fVar12 + fVar12 + fVar9 * fVar8 * fVar8;
      fVar13 = -(fVar12 * fVar11);
      fVar11 = fVar12 * fVar11;
      *(ulong *)(param_1 + 200) = CONCAT44(fVar12,fVar12);
      *(ulong *)(param_1 + 0xc0) = CONCAT44(fVar12,fVar12);
      fVar16 = fVar7 * fVar7;
      fVar14 = fVar12 * fVar13;
      fVar8 = fVar12 + fVar9 * fVar7;
      *(float *)(param_1 + 0x150) = fVar13;
      fVar18 = fVar7 * fVar12 * fVar7;
      *(float *)(param_1 + 0x114) = fVar7 * fVar12;
      *(float *)(param_1 + 0x124) = fVar16 - fVar11;
      *(float *)(param_1 + 0x118) = fVar18 + fVar14;
      *(float *)(param_1 + 0x128) = (fVar16 + fVar11 * -2.0) * fVar7;
      *(float *)(param_1 + 0x134) = -(fVar11 * fVar7);
      fVar17 = fVar7 * -(fVar11 * fVar7);
      *(float *)(param_1 + 0x130) = fVar13;
      fVar13 = fVar9 * fVar13;
      *(float *)(param_1 + 0x140) = fVar12;
      *(float *)(param_1 + 0x148) = fVar12;
      *(float *)(param_1 + 0x110) = fVar12;
      fVar10 = (fVar7 + -2.0) * fVar12;
      *(float *)(param_1 + 0x104) = fVar8;
      fVar15 = fVar13 + fVar7 * fVar8;
      *(float *)(param_1 + 0x108) = fVar15;
      *(float *)(param_1 + 0x144) = fVar9;
      *(float *)(param_1 + 0x14c) = fVar7;
      *(float *)(param_1 + 0x120) = fVar7;
      *(float *)(param_1 + 0xdc) = fVar10;
      fVar8 = fVar14 + fVar12 + fVar7 * fVar10;
      *(float *)(param_1 + 0x10c) = fVar14 + fVar7 * (fVar15 + fVar13);
      *(float *)(param_1 + 0x11c) = (fVar18 + fVar14 + fVar14) * fVar7;
      *(float *)(param_1 + 0xfc) = (fVar13 - fVar11 * fVar12 * fVar7) + fVar7 * fVar8;
      *(float *)(param_1 + 0x100) = fVar9;
      *(float *)(param_1 + 0xe8) = fVar10;
      *(float *)(param_1 + 0xec) = fVar8;
      *(float *)(param_1 + 0xf4) = fVar10;
      *(float *)(param_1 + 0xf8) = fVar8;
      *(float *)(param_1 + 300) = fVar11 * fVar11 + fVar16 * (fVar16 + fVar11 * -3.0);
      *(float *)(param_1 + 0x138) = fVar17 + fVar11 * fVar11;
      *(float *)(param_1 + 0x13c) = (fVar17 - fVar11 * fVar11 * -2.0) * fVar7;
    }
    goto LAB_004cf204;
  }
  if ((DAT_01d4bec4 < *(float *)(param_1 + 0x180)) || (DAT_01d4bec4 < *(float *)(param_1 + 0x184)))
  {
    bVar4 = false;
    *(undefined1 *)(param_1 + 0x18a) = 0;
    bVar6 = false;
    if (*(char *)(param_1 + 0x18d) != '\0') goto LAB_004cf1e4;
  }
  else {
    bVar4 = true;
    bVar6 = true;
    if (*(char *)(param_1 + 0x18d) != '\x01') {
LAB_004cf1e4:
      bVar4 = bVar6;
      *(undefined1 *)(param_1 + 0x18e) = 0;
    }
  }
  *(bool *)(param_1 + 0x18d) = bVar4;
  uVar1 = *(undefined2 *)PTR_DAT_027133f0;
  if (!bVar4) {
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x188) = uVar1;
LAB_004cf204:
  return cVar2 != '\0' && *(char *)(param_1 + 0x18d) != '\0';
}


