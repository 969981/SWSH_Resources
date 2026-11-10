/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a1550; name: FUN_003a1550
 */


void FUN_003a1550(int *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  float fVar27;
  
  iVar2 = *param_1;
  iVar4 = param_1[1];
  iVar3 = param_1[2];
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  if ((uint)(iVar4 + iVar2 + iVar3 + iVar5 + iVar6) < 0x10) {
    param_1[0x34] = 0x46884688;
    param_1[0x35] = 0x46884688;
    param_1[0x36] = 0x46884688;
    *(undefined2 *)(param_1 + 0x37) = 0x4688;
    *(undefined2 *)((long)param_1 + 0xde) = 0x4688;
    return;
  }
  fVar26 = (float)param_1[0xc];
  fVar27 = (float)param_1[0xd];
  fVar25 = (float)param_1[0xe];
  fVar23 = (float)param_1[0x14];
  fVar24 = (float)param_1[0x15];
  uVar11 = 0x7f7ffff8;
  fVar22 = (float)param_1[0x16];
  fVar20 = (float)param_1[0x1c];
  fVar21 = (float)param_1[0x1d];
  fVar19 = (float)param_1[0x1e];
  fVar17 = (float)param_1[0x24];
  fVar18 = (float)param_1[0x25];
  fVar16 = (float)param_1[0x26];
  fVar13 = (float)param_1[0x2c];
  fVar14 = (float)param_1[0x2d];
  fVar15 = (float)param_1[0x2e];
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * *param_2 + fVar27 * param_2[1] + fVar25 * param_2[2]) & 0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * *param_2 + fVar24 * param_2[1] + fVar22 * param_2[2]) & 0x7ffffff8 | 1;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * *param_2 + fVar21 * param_2[1] + fVar19 * param_2[2]) & 0x7ffffff8 | 2;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * *param_2 + fVar18 * param_2[1] + fVar16 * param_2[2]) & 0x7ffffff8 | 3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * *param_2 + fVar14 * param_2[1] + fVar15 * param_2[2]) & 0x7ffffff8 | 4;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)(param_1 + 0x34) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[3] + fVar27 * param_2[4] + fVar25 * param_2[5]) & 0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[3] + fVar24 * param_2[4] + fVar22 * param_2[5]) & 0x7ffffff8 | 1
    ;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[3] + fVar21 * param_2[4] + fVar19 * param_2[5]) & 0x7ffffff8 | 2
    ;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[3] + fVar18 * param_2[4] + fVar16 * param_2[5]) & 0x7ffffff8 |
             3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[3] + fVar14 * param_2[4] + fVar15 * param_2[5]) & 0x7ffffff8 | 4
    ;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)((long)param_1 + 0xd2) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[6] + fVar27 * param_2[7] + fVar25 * param_2[8]) & 0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[6] + fVar24 * param_2[7] + fVar22 * param_2[8]) & 0x7ffffff8 | 1
    ;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[6] + fVar21 * param_2[7] + fVar19 * param_2[8]) & 0x7ffffff8 | 2
    ;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[6] + fVar18 * param_2[7] + fVar16 * param_2[8]) & 0x7ffffff8 |
             3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[6] + fVar14 * param_2[7] + fVar15 * param_2[8]) & 0x7ffffff8 | 4
    ;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)(param_1 + 0x35) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[9] + fVar27 * param_2[10] + fVar25 * param_2[0xb]) & 0x7ffffff8
    ;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[9] + fVar24 * param_2[10] + fVar22 * param_2[0xb]) & 0x7ffffff8
            | 1;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[9] + fVar21 * param_2[10] + fVar19 * param_2[0xb]) & 0x7ffffff8
            | 2;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[9] + fVar18 * param_2[10] + fVar16 * param_2[0xb]) & 0x7ffffff8
             | 3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[9] + fVar14 * param_2[10] + fVar15 * param_2[0xb]) & 0x7ffffff8
            | 4;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)((long)param_1 + 0xd6) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[0xc] + fVar27 * param_2[0xd] + fVar25 * param_2[0xe]) &
             0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[0xc] + fVar24 * param_2[0xd] + fVar22 * param_2[0xe]) &
            0x7ffffff8 | 1;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[0xc] + fVar21 * param_2[0xd] + fVar19 * param_2[0xe]) &
            0x7ffffff8 | 2;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[0xc] + fVar18 * param_2[0xd] + fVar16 * param_2[0xe]) &
             0x7ffffff8 | 3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[0xc] + fVar14 * param_2[0xd] + fVar15 * param_2[0xe]) &
            0x7ffffff8 | 4;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)(param_1 + 0x36) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[0xf] + fVar27 * param_2[0x10] + fVar25 * param_2[0x11]) &
             0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[0xf] + fVar24 * param_2[0x10] + fVar22 * param_2[0x11]) &
            0x7ffffff8 | 1;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[0xf] + fVar21 * param_2[0x10] + fVar19 * param_2[0x11]) &
            0x7ffffff8 | 2;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[0xf] + fVar18 * param_2[0x10] + fVar16 * param_2[0x11]) &
             0x7ffffff8 | 3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[0xf] + fVar14 * param_2[0x10] + fVar15 * param_2[0x11]) &
            0x7ffffff8 | 4;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)((long)param_1 + 0xda) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    uVar12 = (uint)(fVar26 * param_2[0x12] + fVar27 * param_2[0x13] + fVar25 * param_2[0x14]) &
             0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar7 = 0x7f7ffff9;
  }
  else {
    uVar7 = (uint)(fVar23 * param_2[0x12] + fVar24 * param_2[0x13] + fVar22 * param_2[0x14]) &
            0x7ffffff8 | 1;
  }
  if (iVar3 == 0) {
    uVar8 = 0x7f7ffffa;
  }
  else {
    uVar8 = (uint)(fVar20 * param_2[0x12] + fVar21 * param_2[0x13] + fVar19 * param_2[0x14]) &
            0x7ffffff8 | 2;
  }
  if (iVar5 == 0) {
    uVar10 = 0x7f7ffffb;
  }
  else {
    uVar10 = (uint)(fVar17 * param_2[0x12] + fVar18 * param_2[0x13] + fVar16 * param_2[0x14]) &
             0x7ffffff8 | 3;
  }
  if (iVar6 == 0) {
    uVar9 = 0x7f7ffffc;
  }
  else {
    uVar9 = (uint)(fVar13 * param_2[0x12] + fVar14 * param_2[0x13] + fVar15 * param_2[0x14]) &
            0x7ffffff8 | 4;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar1;
  if (uVar1 <= uVar9) {
    uVar12 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar8) {
    uVar1 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar1;
  }
  uVar1 = uVar7;
  if (uVar7 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar7;
  }
  uVar7 = uVar1;
  if (uVar1 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar10) {
    uVar1 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar9) {
    uVar8 = uVar9;
    uVar9 = uVar1;
  }
  uVar1 = uVar8;
  if (uVar8 <= uVar12) {
    uVar1 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar1;
  if (uVar1 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar9) {
    uVar1 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar12) {
    uVar10 = uVar12;
    uVar12 = uVar1;
  }
  uVar1 = uVar10;
  if (uVar10 <= uVar7) {
    uVar1 = uVar7;
    uVar7 = uVar10;
  }
  uVar10 = uVar1;
  if (uVar1 <= uVar8) {
    uVar10 = uVar8;
    uVar8 = uVar1;
  }
  *(ushort *)(param_1 + 0x37) =
       (ushort)uVar9 & 7 | (ushort)((uVar12 & 7) << 3) | (ushort)((uVar7 & 7) << 6) |
       (ushort)((uVar8 & 7) << 9) | (ushort)((uVar10 & 7) << 0xc);
  if (iVar2 != 0) {
    uVar11 = (uint)(fVar26 * param_2[0x15] + fVar27 * param_2[0x16] + fVar25 * param_2[0x17]) &
             0x7ffffff8;
  }
  if (iVar4 == 0) {
    uVar12 = 0x7f7ffff9;
  }
  else {
    uVar12 = (uint)(fVar23 * param_2[0x15] + fVar24 * param_2[0x16] + fVar22 * param_2[0x17]) &
             0x7ffffff8 | 1;
  }
  if (iVar3 == 0) {
    uVar7 = 0x7f7ffffa;
  }
  else {
    uVar7 = (uint)(fVar20 * param_2[0x15] + fVar21 * param_2[0x16] + fVar19 * param_2[0x17]) &
            0x7ffffff8 | 2;
  }
  if (iVar5 == 0) {
    uVar8 = 0x7f7ffffb;
  }
  else {
    uVar8 = (uint)(fVar17 * param_2[0x15] + fVar18 * param_2[0x16] + fVar16 * param_2[0x17]) &
            0x7ffffff8 | 3;
  }
  if (iVar6 == 0) {
    uVar10 = 0x7f7ffffc;
  }
  else {
    uVar10 = (uint)(fVar13 * param_2[0x15] + fVar14 * param_2[0x16] + fVar15 * param_2[0x17]) &
             0x7ffffff8 | 4;
  }
  uVar9 = uVar11;
  if (uVar11 <= uVar12) {
    uVar9 = uVar12;
    uVar12 = uVar11;
  }
  uVar11 = uVar9;
  if (uVar9 <= uVar7) {
    uVar11 = uVar7;
    uVar7 = uVar9;
  }
  uVar9 = uVar11;
  if (uVar11 <= uVar8) {
    uVar9 = uVar8;
    uVar8 = uVar11;
  }
  uVar11 = uVar9;
  if (uVar9 <= uVar10) {
    uVar11 = uVar10;
    uVar10 = uVar9;
  }
  uVar9 = uVar12;
  if (uVar12 <= uVar7) {
    uVar9 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar9;
  if (uVar9 <= uVar8) {
    uVar12 = uVar8;
    uVar8 = uVar9;
  }
  uVar9 = uVar12;
  if (uVar12 <= uVar10) {
    uVar9 = uVar10;
    uVar10 = uVar12;
  }
  uVar12 = uVar9;
  if (uVar9 <= uVar11) {
    uVar12 = uVar11;
    uVar11 = uVar9;
  }
  uVar9 = uVar7;
  if (uVar7 <= uVar8) {
    uVar9 = uVar8;
    uVar8 = uVar7;
  }
  uVar7 = uVar9;
  if (uVar9 <= uVar10) {
    uVar7 = uVar10;
    uVar10 = uVar9;
  }
  uVar9 = uVar7;
  if (uVar7 <= uVar11) {
    uVar9 = uVar11;
    uVar11 = uVar7;
  }
  uVar7 = uVar9;
  if (uVar9 <= uVar12) {
    uVar7 = uVar12;
    uVar12 = uVar9;
  }
  uVar9 = uVar8;
  if (uVar8 <= uVar10) {
    uVar9 = uVar10;
    uVar10 = uVar8;
  }
  uVar8 = uVar9;
  if (uVar9 <= uVar11) {
    uVar8 = uVar11;
    uVar11 = uVar9;
  }
  uVar9 = uVar8;
  if (uVar8 <= uVar12) {
    uVar9 = uVar12;
    uVar12 = uVar8;
  }
  uVar8 = uVar9;
  if (uVar9 <= uVar7) {
    uVar8 = uVar7;
    uVar7 = uVar9;
  }
  *(ushort *)((long)param_1 + 0xde) =
       (ushort)uVar10 & 7 | (ushort)((uVar11 & 7) << 3) | (ushort)((uVar12 & 7) << 6) |
       (ushort)((uVar7 & 7) << 9) | (ushort)((uVar8 & 7) << 0xc);
  return;
}


