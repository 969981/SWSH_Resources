/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00228670; name: FUN_00228670
 */


bool FUN_00228670(undefined8 param_1,undefined8 param_2,long param_3,float *param_4,float *param_5,
                 undefined4 *param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  undefined1 *puVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
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
  undefined1 auStack_1b48 [24];
  undefined **local_1b30;
  undefined1 auStack_1b28 [2256];
  char local_1258;
  float *local_1250;
  undefined1 auStack_1248 [4352];
  undefined1 local_148;
  undefined1 *local_140;
  ulong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_80;
  long lStack_78;
  
  local_80 = *(undefined8 *)(param_3 + 8);
  lStack_78 = param_3;
  fabsf(*(float *)(param_3 + 0x14));
  fabsf(*(float *)(param_3 + 0x18));
  local_8c = 1.0 / *(float *)(param_3 + 0x10);
  local_90 = 1.0 / *(float *)(param_3 + 0x14);
  local_88 = 1.0 / *(float *)(param_3 + 0x18);
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar8 = fVar4 + fVar4;
  fVar7 = fVar3 + fVar3;
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  local_b0 = fVar5 * (fVar5 + fVar5);
  fStack_b4 = (fVar5 + fVar5) * fVar6;
  local_a0 = 1.0 - fVar3 * fVar7;
  fStack_bc = fVar7 * fVar4 + fStack_b4;
  local_b8 = fVar7 * fVar5 - fVar8 * fVar6;
  fStack_b4 = fVar7 * fVar4 - fStack_b4;
  fStack_ac = fVar8 * fVar5 + fVar7 * fVar6;
  local_a8 = fVar7 * fVar5 + fVar8 * fVar6;
  fStack_a4 = fVar8 * fVar5 - fVar7 * fVar6;
  local_c0 = (1.0 - fVar4 * fVar8) - local_b0;
  local_b0 = local_a0 - local_b0;
  local_a0 = local_a0 - fVar4 * fVar8;
  local_9c = param_4[4];
  fStack_98 = param_4[5];
  local_94 = param_4[6];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar13 = fVar8 + fVar8;
  fVar9 = param_5[2];
  fVar10 = param_5[3];
  fVar11 = fVar7 + fVar7;
  local_e0 = fVar9 * (fVar9 + fVar9);
  fStack_e4 = (fVar9 + fVar9) * fVar10;
  local_d0 = 1.0 - fVar7 * fVar11;
  fStack_ec = fVar11 * fVar8 + fStack_e4;
  local_e8 = fVar11 * fVar9 - fVar13 * fVar10;
  fStack_e4 = fVar11 * fVar8 - fStack_e4;
  local_d8 = fVar11 * fVar9 + fVar13 * fVar10;
  fStack_d4 = fVar13 * fVar9 - fVar11 * fVar10;
  fStack_dc = fVar13 * fVar9 + fVar11 * fVar10;
  local_f0 = (1.0 - fVar8 * fVar13) - local_e0;
  local_e0 = local_d0 - local_e0;
  local_d0 = local_d0 - fVar8 * fVar13;
  fVar14 = fVar6 * fVar6 + -0.5;
  fVar13 = fVar10 * fVar10 + -0.5;
  local_130 = ((fVar6 * fVar7 - fVar3 * fVar10) - fVar9 * fVar4) + fVar8 * fVar5;
  local_110 = ((fVar3 * fVar10 - fVar6 * fVar7) - fVar8 * fVar5) + fVar9 * fVar4;
  local_cc = param_5[4];
  fStack_10c = ((fVar4 * fVar10 - fVar6 * fVar8) - fVar9 * fVar3) + fVar7 * fVar5;
  local_108 = ((fVar5 * fVar10 - fVar6 * fVar9) - fVar7 * fVar4) + fVar8 * fVar3;
  local_12c = ((fVar6 * fVar8 - fVar4 * fVar10) - fVar7 * fVar5) + fVar9 * fVar3;
  local_c8 = param_5[5];
  local_c4 = param_5[6];
  local_124 = fVar6 * fVar10 + fVar7 * fVar3 + fVar8 * fVar4 + fVar9 * fVar5;
  local_128 = ((fVar6 * fVar9 - fVar5 * fVar10) - fVar8 * fVar3) + fVar7 * fVar4;
  fVar20 = (local_9c - local_cc) + (local_9c - local_cc);
  fVar18 = (fStack_98 - local_c8) + (fStack_98 - local_c8);
  fVar15 = (local_cc - local_9c) + (local_cc - local_9c);
  fVar16 = (local_c8 - fStack_98) + (local_c8 - fStack_98);
  fVar17 = (local_94 - local_c4) + (local_94 - local_c4);
  fVar11 = (local_c4 - local_94) + (local_c4 - local_94);
  local_140 = auStack_1248;
  local_138 = 0x44000000000;
  local_148 = 1;
  fVar19 = (fVar20 * -fVar7 - fVar18 * fVar8) - fVar17 * fVar9;
  fVar12 = (fVar15 * -fVar3 - fVar16 * fVar4) - fVar11 * fVar5;
  local_f8 = (fVar13 * fVar17 + fVar10 * (fVar20 * fVar8 - fVar18 * fVar7)) - fVar19 * fVar9;
  local_118 = (fVar14 * fVar11 + fVar6 * (fVar15 * fVar4 - fVar16 * fVar3)) - fVar12 * fVar5;
  local_100 = (fVar13 * fVar20 + fVar10 * (fVar18 * fVar9 - fVar17 * fVar8)) - fVar19 * fVar7;
  fStack_fc = (fVar13 * fVar18 + fVar10 * (fVar17 * fVar7 - fVar20 * fVar9)) - fVar19 * fVar8;
  local_120 = (fVar14 * fVar15 + fVar6 * (fVar16 * fVar5 - fVar11 * fVar4)) - fVar12 * fVar3;
  local_11c = (fVar14 * fVar16 + fVar6 * (fVar11 * fVar3 - fVar15 * fVar5)) - fVar12 * fVar4;
  local_1b30 = &PTR_LAB_025e4470;
                    /* try { // try from 00228a5c to 00228a93 has its CatchHandler @ 00228b54 */
  fStack_104 = local_124;
  FUN_002293f0(*param_6,param_6[2],param_6[1],auStack_1b28,auStack_1248,&local_110,&local_130,
               param_1,&local_c0,&local_f0,param_8,param_9 & 1,param_4,param_5,param_7);
  local_1250 = &local_90;
                    /* try { // try from 00228a9c to 00228ac3 has its CatchHandler @ 00228b64 */
  FUN_001b0d40(auStack_1b48,&local_110,param_2);
  FUN_00251d90(&local_90,param_5,auStack_1b48,0,&local_1b30);
                    /* try { // try from 00228ac4 to 00228acb has its CatchHandler @ 00228b44 */
  FUN_00228cb0(auStack_1b28);
  puVar1 = local_140;
  if ((((-1 < (long)local_138) && ((local_138 & 0x7fffffff00000000) != 0)) &&
      (auStack_1248 != local_140)) && (local_140 != (undefined1 *)0x0)) {
                    /* try { // try from 00228af4 to 00228b07 has its CatchHandler @ 00228b40 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  }
  return local_1258 != '\0';
}


