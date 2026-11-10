/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ce820; name: FUN_004ce820
 */


uint FUN_004ce820(long *param_1,long *param_2,float *param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long local_a8;
  
  puVar5 = PTR_DAT_027133f0;
  fVar4 = DAT_01d4c27c;
  fVar3 = DAT_01d4bb38;
  uVar6 = (uint)*(ushort *)(param_3 + 2);
  uVar2 = *(ushort *)PTR_DAT_027133f0;
  uVar7 = (uint)*(ushort *)((long)param_1 + 0x12);
  if (*(ushort *)(param_3 + 2) < uVar2) {
    if (uVar7 != 0) {
      fVar18 = *param_3;
      fVar9 = param_3[1];
      uVar8 = 0;
      while( true ) {
        uVar1 = *(uint *)PTR_DAT_027133e8;
        if (uVar7 - uVar8 <= *(uint *)PTR_DAT_027133e8) {
          uVar1 = uVar7 - uVar8;
        }
        if ((uVar6 & 0xffff) < (uint)uVar2) {
          uVar6 = uVar6 + 1;
          fVar10 = (float)FUN_004cf6e0(((fVar9 - fVar18) * (float)(uVar6 & 0xffff)) /
                                       (float)(uint)uVar2 + fVar18,*(undefined2 *)PTR_DAT_02712ac0);
          fVar11 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
          fVar10 = tanf((fVar10 / fVar11) * fVar3);
          fVar10 = 1.0 / fVar10;
          fVar15 = fVar10 * fVar10;
          fVar12 = fVar10 * fVar4 + 1.0 + fVar15;
          fVar11 = 1.0 / fVar12;
          fVar17 = fVar11 + fVar11;
          fVar13 = (1.0 - fVar10 * fVar4) + fVar15;
          fVar16 = fVar11 * fVar13;
          fVar14 = -(fVar11 * fVar13);
          fVar13 = fVar17 - fVar17 * fVar15;
          fVar12 = 2.0 / fVar12;
          param_4[1] = CONCAT44(fVar11,fVar11);
          *param_4 = CONCAT44(fVar11,fVar11);
          fVar17 = -(-(fVar10 * fVar10) * fVar17) - fVar17;
          fVar10 = fVar11 * fVar14;
          fVar15 = fVar12 * fVar14;
          fVar19 = fVar11 * fVar17;
          fVar22 = fVar13 * fVar13;
          fVar24 = fVar19 + fVar12;
          *(float *)((long)param_4 + 0x8c) = fVar17;
          *(float *)(param_4 + 0x12) = fVar14;
          *(float *)((long)param_4 + 0x84) = fVar12;
          *(float *)(param_4 + 0x11) = fVar11;
          *(float *)((long)param_4 + 0x54) = fVar19;
          *(float *)(param_4 + 0xb) = fVar19 * fVar17 + fVar10;
          fVar21 = fVar16 * fVar13;
          *(float *)((long)param_4 + 0x1c) = fVar24;
          *(float *)((long)param_4 + 100) = fVar22 - fVar16;
          *(float *)(param_4 + 0xd) = (fVar16 * -2.0 + fVar22) * fVar17;
          fVar20 = fVar11 - fVar13 * fVar12;
          fVar23 = fVar15 - fVar13 * fVar20;
          *(float *)((long)param_4 + 0x44) = fVar20;
          *(float *)(param_4 + 9) = fVar23;
          fVar20 = (fVar10 + fVar11) - fVar13 * fVar24;
          *(float *)((long)param_4 + 0x6c) = fVar16 * fVar16 + fVar22 * (fVar22 + fVar16 * -3.0);
          *(float *)(param_4 + 0xe) = fVar14;
          *(float *)(param_4 + 5) = fVar24;
          *(float *)((long)param_4 + 0x2c) = fVar20;
          *(float *)((long)param_4 + 0x34) = fVar24;
          *(float *)(param_4 + 7) = fVar20;
          *(float *)((long)param_4 + 0x7c) = (fVar16 * -2.0 * fVar16 - fVar21 * fVar17) * fVar13;
          *(float *)(param_4 + 0x10) = fVar11;
          *(float *)((long)param_4 + 0x4c) = fVar10 - fVar13 * (fVar23 + fVar15);
          *(float *)(param_4 + 10) = fVar11;
          param_4[2] = 0;
          *(undefined4 *)(param_4 + 3) = 0;
          param_4[4] = 0;
          *(undefined4 *)(param_4 + 6) = 0;
          *(float *)((long)param_4 + 0x5c) = (fVar19 * fVar17 + fVar10 + fVar10) * fVar17;
          *(float *)(param_4 + 0xc) = fVar17;
          *(float *)((long)param_4 + 0x3c) = (fVar15 + fVar11 * fVar21) - fVar13 * fVar20;
          *(float *)(param_4 + 8) = fVar12;
          *(float *)((long)param_4 + 0x74) = fVar21;
          *(float *)(param_4 + 0xf) = fVar21 * fVar17 + fVar16 * fVar16;
        }
        local_a8 = *param_2 + (ulong)uVar8 * 4;
        FUN_004cf490(param_4,*param_1 + (ulong)param_5 * 4 * (ulong)*(ushort *)(param_1 + 2) +
                             (ulong)uVar8 * 4,uVar1,param_5,&local_a8);
        uVar8 = uVar1 + uVar8;
        if (uVar7 <= uVar8) break;
        uVar2 = *(ushort *)puVar5;
      }
    }
  }
  else {
    local_a8 = *param_2;
    FUN_004cf490(param_4,*param_1 + (ulong)param_5 * (ulong)*(ushort *)(param_1 + 2) * 4,
                 *(ushort *)((long)param_1 + 0x12),param_5,&local_a8);
  }
  return uVar6;
}


