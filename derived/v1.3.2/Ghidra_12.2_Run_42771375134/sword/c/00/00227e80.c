/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00227e80; name: FUN_00227e80
 */


bool FUN_00227e80(undefined8 param_1,undefined8 param_2,long param_3,float *param_4,float *param_5,
                 undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 byte param_10,byte param_11)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
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
  float fVar21;
  float fVar22;
  undefined *local_1ba8;
  undefined4 local_1ba0;
  undefined1 auStack_1b98 [2256];
  char local_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  byte local_12b0;
  long local_12a8;
  undefined1 *local_12a0;
  undefined1 auStack_1298 [4352];
  undefined1 local_198;
  undefined1 *local_190;
  ulong local_188;
  undefined1 auStack_180 [64];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar9 = fVar6 + fVar6;
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar11 = fVar5 + fVar5;
  local_c0 = fVar7 * (fVar7 + fVar7);
  fStack_c4 = (fVar7 + fVar7) * fVar8;
  local_b0 = 1.0 - fVar5 * fVar11;
  fVar10 = fVar8 * fVar8 + -0.5;
  fStack_cc = fVar11 * fVar6 + fStack_c4;
  local_c8 = fVar11 * fVar7 - fVar9 * fVar8;
  fStack_c4 = fVar11 * fVar6 - fStack_c4;
  fStack_bc = fVar9 * fVar7 + fVar11 * fVar8;
  local_b8 = fVar11 * fVar7 + fVar9 * fVar8;
  fStack_b4 = fVar9 * fVar7 - fVar11 * fVar8;
  local_d0 = (1.0 - fVar6 * fVar9) - local_c0;
  local_c0 = local_b0 - local_c0;
  local_b0 = local_b0 - fVar6 * fVar9;
  local_ac = param_4[4];
  fStack_a8 = param_4[5];
  local_a4 = param_4[6];
  fVar13 = *param_5;
  fVar14 = param_5[1];
  fVar18 = fVar14 + fVar14;
  fVar15 = param_5[2];
  fVar16 = param_5[3];
  fVar11 = fVar13 + fVar13;
  fVar9 = fVar16 * fVar16 + -0.5;
  local_f0 = fVar15 * (fVar15 + fVar15);
  fStack_f4 = (fVar15 + fVar15) * fVar16;
  local_e0 = 1.0 - fVar13 * fVar11;
  fStack_fc = fVar11 * fVar14 + fStack_f4;
  local_f8 = fVar11 * fVar15 - fVar18 * fVar16;
  fStack_f4 = fVar11 * fVar14 - fStack_f4;
  fStack_ec = fVar18 * fVar15 + fVar11 * fVar16;
  local_e8 = fVar11 * fVar15 + fVar18 * fVar16;
  fStack_e4 = fVar18 * fVar15 - fVar11 * fVar16;
  local_100 = (1.0 - fVar14 * fVar18) - local_f0;
  local_f0 = local_e0 - local_f0;
  local_e0 = local_e0 - fVar14 * fVar18;
  local_134 = fVar8 * fVar16 + fVar13 * fVar5 + fVar14 * fVar6 + fVar15 * fVar7;
  local_dc = param_5[4];
  fStack_d8 = param_5[5];
  local_118 = ((fVar7 * fVar16 - fVar8 * fVar15) - fVar13 * fVar6) + fVar14 * fVar5;
  local_120 = ((fVar5 * fVar16 - fVar8 * fVar13) - fVar14 * fVar7) + fVar15 * fVar6;
  local_11c = ((fVar6 * fVar16 - fVar8 * fVar14) - fVar15 * fVar5) + fVar13 * fVar7;
  local_d4 = param_5[6];
  fVar18 = (local_ac - local_dc) + (local_ac - local_dc);
  fVar11 = (fStack_a8 - fStack_d8) + (fStack_a8 - fStack_d8);
  fVar17 = (local_dc - local_ac) + (local_dc - local_ac);
  fVar19 = (fStack_d8 - fStack_a8) + (fStack_d8 - fStack_a8);
  fVar22 = (local_a4 - local_d4) + (local_a4 - local_d4);
  fVar21 = (local_d4 - local_a4) + (local_d4 - local_a4);
  fVar20 = (fVar18 * -fVar13 - fVar11 * fVar14) - fVar22 * fVar15;
  fVar12 = (fVar17 * -fVar5 - fVar19 * fVar6) - fVar21 * fVar7;
  local_128 = (fVar10 * fVar21 + fVar8 * (fVar17 * fVar6 - fVar19 * fVar5)) - fVar12 * fVar7;
  local_110 = (fVar9 * fVar18 + fVar16 * (fVar11 * fVar15 - fVar22 * fVar14)) - fVar20 * fVar13;
  local_108 = (fVar9 * fVar22 + fVar16 * (fVar18 * fVar14 - fVar11 * fVar13)) - fVar20 * fVar15;
  local_12c = (fVar10 * fVar19 + fVar8 * (fVar21 * fVar5 - fVar17 * fVar7)) - fVar12 * fVar6;
  local_10c = (fVar9 * fVar11 + fVar16 * (fVar22 * fVar13 - fVar18 * fVar15)) - fVar20 * fVar14;
  local_130 = (fVar10 * fVar17 + fVar8 * (fVar19 * fVar7 - fVar21 * fVar6)) - fVar12 * fVar5;
  local_140 = ((fVar8 * fVar13 - fVar5 * fVar16) - fVar15 * fVar6) + fVar14 * fVar7;
  local_13c = ((fVar8 * fVar14 - fVar6 * fVar16) - fVar13 * fVar7) + fVar15 * fVar5;
  local_138 = ((fVar8 * fVar15 - fVar7 * fVar16) - fVar14 * fVar5) + fVar13 * fVar6;
                    /* try { // try from 00228224 to 0022823f has its CatchHandler @ 002283bc */
  local_114 = local_134;
  FUN_00231f40(*param_6,auStack_180,param_2,&local_d0,&local_100,param_9,param_11 & 1);
  lVar4 = *(long *)(param_3 + 0x30);
  local_190 = auStack_1298;
  local_188 = 0x44000000000;
  local_198 = 1;
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  local_1ba0 = 2;
  local_1ba8 = PTR_DAT_02711e18 + 0x10;
                    /* try { // try from 00228294 to 002282cf has its CatchHandler @ 002283ac */
  FUN_002293f0(*param_6,param_6[2],param_6[1],auStack_1b98,auStack_1298,&local_120,&local_140,
               param_1,&local_d0,&local_100,param_8,param_10 & 1,param_4,param_5,param_7);
  local_12b0 = param_11 & 1;
  local_12a0 = auStack_180;
  local_12c0 = param_9;
                    /* try { // try from 00228304 to 00228327 has its CatchHandler @ 002283c0 */
  local_12b8 = uVar3;
  local_12a8 = lVar4;
  (*(code *)(&PTR_LAB_025e4450)[*(ushort *)(lVar4 + 8) - 3])(lVar4,auStack_180,&local_1ba8,0,1);
  FUN_00228cb0(auStack_1b98);
  puVar1 = local_190;
  if ((((-1 < (long)local_188) && ((local_188 & 0x7fffffff00000000) != 0)) &&
      (auStack_1298 != local_190)) && (local_190 != (undefined1 *)0x0)) {
                    /* try { // try from 00228350 to 00228363 has its CatchHandler @ 002283a8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  }
  return local_12c8 != '\0';
}


