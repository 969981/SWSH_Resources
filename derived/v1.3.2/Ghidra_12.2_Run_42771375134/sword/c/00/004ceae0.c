/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ceae0; name: FUN_004ceae0
 */


uint FUN_004ceae0(long *param_1,float *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  undefined1 auStack_a8 [8];
  undefined1 auStack_98 [8];
  
  puVar7 = PTR_DAT_027133f0;
  puVar6 = PTR_DAT_027133e8;
  puVar5 = PTR_DAT_02712b38;
  fVar4 = DAT_01d4c27c;
  fVar3 = DAT_01d4bb38;
  uVar8 = (uint)*(ushort *)(param_2 + 2);
  uVar2 = *(ushort *)PTR_DAT_027133f0;
  uVar9 = (uint)*(ushort *)((long)param_1 + 0x12);
  if (*(ushort *)(param_2 + 2) < uVar2) {
    if (uVar9 != 0) {
      fVar19 = *param_2;
      fVar11 = param_2[1];
      uVar10 = 0;
      while( true ) {
        uVar1 = *(uint *)puVar6;
        if (uVar9 - uVar10 <= *(uint *)puVar6) {
          uVar1 = uVar9 - uVar10;
        }
        if ((uVar8 & 0xffff) < (uint)uVar2) {
          uVar8 = uVar8 + 1;
          fVar12 = (float)FUN_004cf7a0(((fVar11 - fVar19) * (float)(uVar8 & 0xffff)) / (float)uVar2
                                       + fVar19,*(undefined2 *)PTR_DAT_02712ac0);
          fVar13 = (float)NEON_ucvtf(*(undefined4 *)puVar5);
          fVar12 = tanf((fVar12 / fVar13) * fVar3);
          param_3[2] = 0;
          *(undefined4 *)(param_3 + 3) = 0;
          param_3[4] = 0;
          fVar13 = fVar12 * fVar12 + 1.0;
          fVar15 = fVar13 - fVar12 * fVar4;
          fVar13 = 1.0 / (fVar13 + fVar12 * fVar4);
          fVar14 = fVar13 * -2.0;
          fVar16 = fVar13 + fVar13 + fVar14 * fVar12 * fVar12;
          fVar17 = fVar13 * fVar15;
          fVar12 = -(fVar13 * fVar15);
          fVar18 = fVar14 * fVar12;
          fVar22 = fVar16 * fVar16;
          param_3[1] = CONCAT44(fVar13,fVar13);
          *param_3 = CONCAT44(fVar13,fVar13);
          fVar15 = fVar13 * fVar12;
          fVar24 = fVar16 * fVar13 * fVar16;
          *(float *)((long)param_3 + 100) = fVar22 - fVar17;
          *(float *)(param_3 + 0xd) = (fVar22 + fVar17 * -2.0) * fVar16;
          *(float *)((long)param_3 + 0x54) = fVar16 * fVar13;
          *(float *)(param_3 + 0xb) = fVar24 + fVar15;
          fVar20 = fVar13 + fVar14 * fVar16;
          fVar21 = (fVar16 + -2.0) * fVar13;
          *(float *)((long)param_3 + 0x8c) = fVar16;
          *(float *)(param_3 + 0x12) = fVar12;
          *(float *)((long)param_3 + 0x84) = fVar14;
          *(float *)(param_3 + 0x11) = fVar13;
          *(float *)((long)param_3 + 0x1c) = fVar21;
          fVar25 = fVar16 * -(fVar17 * fVar16);
          fVar23 = fVar18 + fVar16 * fVar20;
          *(float *)((long)param_3 + 0x44) = fVar20;
          *(float *)(param_3 + 9) = fVar23;
          fVar20 = fVar15 + fVar13 + fVar16 * fVar21;
          *(float *)(param_3 + 5) = fVar21;
          *(float *)((long)param_3 + 0x2c) = fVar20;
          *(float *)((long)param_3 + 0x34) = fVar21;
          *(float *)(param_3 + 7) = fVar20;
          *(float *)((long)param_3 + 0x7c) = (fVar25 - fVar17 * fVar17 * -2.0) * fVar16;
          *(float *)(param_3 + 0x10) = fVar13;
          *(float *)((long)param_3 + 0x3c) = (fVar18 - fVar17 * fVar13 * fVar16) + fVar16 * fVar20;
          *(float *)(param_3 + 8) = fVar14;
          *(float *)((long)param_3 + 0x5c) = (fVar24 + fVar15 + fVar15) * fVar16;
          *(float *)(param_3 + 0xc) = fVar16;
          *(float *)((long)param_3 + 0x4c) = fVar15 + fVar16 * (fVar23 + fVar18);
          *(float *)(param_3 + 10) = fVar13;
          *(undefined4 *)(param_3 + 6) = 0;
          *(float *)((long)param_3 + 0x6c) = fVar17 * fVar17 + fVar22 * (fVar22 + fVar17 * -3.0);
          *(float *)(param_3 + 0xe) = fVar12;
          *(float *)((long)param_3 + 0x74) = -(fVar17 * fVar16);
          *(float *)(param_3 + 0xf) = fVar25 + fVar17 * fVar17;
        }
        FUN_004cf260(param_3,*param_1 + (ulong)uVar10 * 4,uVar1,param_4,auStack_98);
        uVar10 = uVar1 + uVar10;
        if (uVar9 <= uVar10) break;
        uVar2 = *(ushort *)puVar7;
      }
    }
  }
  else {
    FUN_004cf260(param_3,*param_1,*(ushort *)((long)param_1 + 0x12),param_4,auStack_a8);
  }
  return uVar8;
}


