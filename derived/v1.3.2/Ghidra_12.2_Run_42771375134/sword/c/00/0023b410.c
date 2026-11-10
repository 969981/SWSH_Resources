/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023b410; name: FUN_0023b410
 */


undefined4
FUN_0023b410(undefined4 *param_1,float *param_2,long param_3,float *param_4,undefined8 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_178;
  float local_174;
  undefined **local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined1 local_120;
  float *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  long lStack_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  
  fVar12 = *param_4;
  fVar26 = param_4[1];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar25 = param_4[2];
  fVar15 = param_4[3];
  fVar9 = param_2[2];
  fVar8 = param_2[3];
  fVar19 = param_2[4];
  fVar20 = param_2[5];
  fVar23 = param_4[4];
  fVar21 = param_4[5];
  fVar5 = ((fVar15 * fVar10 - fVar8 * fVar12) - fVar9 * fVar26) + fVar11 * fVar25;
  fVar22 = param_2[6];
  fVar24 = param_4[6];
  switch(*param_1) {
  case 0:
    fVar16 = (float)param_1[1];
    local_178 = fVar16;
    local_174 = fVar16;
    break;
  case 2:
    local_178 = (float)param_1[1];
    fVar16 = (float)param_1[2] + local_178;
    local_174 = local_178;
    break;
  case 3:
    fVar16 = (float)param_1[1];
    local_178 = (float)param_1[3];
    local_174 = (float)param_1[2];
    break;
  case 0xffffffff:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    *param_8 = 0;
  default:
    fVar16 = 0.0;
    local_178 = 0.0;
    local_174 = 0.0;
  }
  fVar4 = ((fVar15 * fVar11 - fVar8 * fVar26) - fVar10 * fVar25) + fVar9 * fVar12;
  fVar1 = ((fVar15 * fVar9 - fVar8 * fVar25) - fVar11 * fVar12) + fVar10 * fVar26;
  fVar8 = fVar15 * fVar8 + fVar10 * fVar12 + fVar11 * fVar26 + fVar9 * fVar25;
  if (((fVar5 == 0.0) && (fVar4 == 0.0)) && (fVar1 == 0.0)) {
    local_d0 = 1;
    fStack_9c = fVar16;
    fStack_94 = local_178;
    local_98 = local_174;
  }
  else {
    fVar17 = fVar4 + fVar4;
    fVar6 = fVar1 * (fVar1 + fVar1);
                    /* try { // try from 0023b5a0 to 0023b693 has its CatchHandler @ 0023b998 */
    fVar9 = fabsf(((1.0 - fVar4 * fVar17) - fVar6) * fVar16);
    fVar18 = fVar5 + fVar5;
    fVar14 = fVar8 * (fVar1 + fVar1);
    fVar10 = fabsf((fVar18 * fVar4 - fVar14) * local_174);
    fVar11 = fabsf((fVar18 * fVar1 + fVar8 * fVar17) * local_178);
    fVar14 = fabsf((fVar18 * fVar4 + fVar14) * fVar16);
    fVar13 = 1.0 - fVar5 * fVar18;
    fVar6 = fabsf((fVar13 - fVar6) * local_174);
    fVar2 = fabsf((fVar1 * fVar17 - fVar18 * fVar8) * local_178);
    fVar3 = fabsf((fVar18 * fVar1 - fVar8 * fVar17) * fVar16);
    fVar18 = fabsf((fVar18 * fVar8 + fVar1 * fVar17) * local_174);
    fStack_94 = fabsf((fVar13 - fVar4 * fVar17) * local_178);
    fStack_9c = fVar9 + fVar10 + fVar11;
    local_98 = fVar14 + fVar6 + fVar2;
    fStack_94 = fVar3 + fVar18 + fStack_94;
    local_d0 = 0;
  }
  fVar11 = (fVar22 - fVar24) + (fVar22 - fVar24);
  fVar9 = (fVar19 - fVar23) + (fVar19 - fVar23);
  fVar10 = (fVar20 - fVar21) + (fVar20 - fVar21);
  fVar20 = fVar15 * fVar15 + -0.5;
  fVar19 = (fVar9 * -fVar12 - fVar10 * fVar26) - fVar11 * fVar25;
  fVar21 = (fVar20 * fVar9 + fVar15 * (fVar10 * fVar25 - fVar11 * fVar26)) - fVar19 * fVar12;
  fVar22 = (fVar20 * fVar10 + fVar15 * (fVar11 * fVar12 - fVar9 * fVar25)) - fVar19 * fVar26;
  fVar20 = (fVar20 * fVar11 + fVar15 * (fVar9 * fVar26 - fVar10 * fVar12)) - fVar19 * fVar25;
  fStack_a4 = fVar22 - local_98;
  local_a8 = fVar21 - fStack_9c;
  local_a0 = fVar20 - fStack_94;
  fStack_9c = fVar21 + fStack_9c;
  local_98 = fVar22 + local_98;
  fStack_94 = fVar20 + fStack_94;
  local_b8 = *(undefined8 *)(param_3 + 8);
  lStack_b0 = param_3;
                    /* try { // try from 0023b7a0 to 0023b7ab has its CatchHandler @ 0023b994 */
  fabsf(*(float *)(param_3 + 0x14));
  fabsf(*(float *)(param_3 + 0x18));
  uVar7 = NEON_fmov(0x3f800000,4);
  local_c4 = 1.0 / *(float *)(param_3 + 0x10);
  fVar10 = fVar5 + fVar5;
  fVar11 = fVar4 + fVar4;
  fVar12 = fVar1 + fVar1;
  local_c8 = 1.0 / *(float *)(param_3 + 0x14);
  fVar15 = fVar4 * fVar11;
  fVar19 = fVar1 * fVar12;
  local_f0 = (float)uVar7 - fVar5 * fVar10;
  fVar9 = (float)((ulong)uVar7 >> 0x20);
  local_f8 = NEON_ext(CONCAT44(fVar1 * fVar10 + fVar8 * fVar11,fVar1 * fVar10 + fVar8 * fVar11),
                      CONCAT44(fVar1 * fVar11 - fVar8 * fVar10,fVar1 * fVar11 - fVar8 * fVar10),4,1)
  ;
  local_140 = &PTR_LAB_025e4520;
  local_130 = 0;
  local_124 = 0;
  local_120 = 0;
  local_110 = NEON_ext(CONCAT44((fVar9 - fVar15) - fVar19,((float)uVar7 - fVar15) - fVar19),
                       CONCAT44(fVar4 * fVar10 + fVar8 * fVar12,fVar4 * fVar10 + fVar8 * fVar12),4,1
                      );
  local_c0 = 1.0 / *(float *)(param_3 + 0x18);
  uVar7 = NEON_ext(CONCAT44(fVar4 * fVar10 - fVar8 * fVar12,fVar4 * fVar10 - fVar8 * fVar12),
                   CONCAT44((fVar9 - fVar5 * fVar10) - fVar19,local_f0 - fVar19),4,1);
  local_f0 = local_f0 - fVar15;
  local_108 = CONCAT44((int)uVar7,fVar1 * fVar10 - fVar8 * fVar11);
  local_118 = &local_c8;
  uStack_100 = CONCAT44(fVar1 * fVar11 + fVar8 * fVar10,(int)((ulong)uVar7 >> 0x20));
  local_dc = local_174;
  local_d8 = local_178;
                    /* try { // try from 0023b8e8 to 0023b8ff has its CatchHandler @ 0023b990 */
  uStack_138 = param_5;
  local_12c = param_6;
  uStack_128 = param_7;
  local_ec = fVar21;
  fStack_e8 = fVar22;
  local_e4 = fVar20;
  fStack_e0 = fVar16;
  FUN_00251d90(&local_c8,param_4,&local_a8,0,&local_140);
  *param_8 = local_120;
  return local_130;
}


