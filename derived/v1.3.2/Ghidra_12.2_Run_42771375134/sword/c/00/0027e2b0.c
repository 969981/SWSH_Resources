/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027e2b0; name: FUN_0027e2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0027e2b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 float *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined *local_300 [4];
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *puStack_2d0;
  undefined1 local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [224];
  undefined1 auStack_198 [104];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  uVar3 = *param_6;
  fStack_54 = *param_5;
  pfVar2 = (float *)(param_1 + 4);
  fStack_5c = fStack_54 + *pfVar2;
  local_e0 = *(undefined8 *)pfVar2;
  fVar4 = *(float *)(param_1 + 0xc);
  local_70 = 0;
  local_58 = fStack_54 + *(float *)(param_1 + 8);
  fStack_54 = fStack_54 + fVar4;
  local_68 = -fStack_5c;
  local_64 = -local_58;
  local_60 = -fStack_54;
  uStack_d8 = (ulong)(uint)fVar4;
  local_b8 = 0x3f800000;
  uStack_b0 = 0;
  local_a8 = 0x3f800000;
  uStack_a0 = 0;
  local_98 = 0x3f8000003f800000;
  uStack_90 = 0;
  local_88 = 0x3f80000000000000;
  uStack_80 = 0;
  local_78 = 0x3f80000000000000;
  uStack_128 = param_3[1];
  local_130 = *param_3;
  local_120 = param_3[2];
  local_110 = 0;
  uStack_108 = 0;
  local_f4 = 0x37f7fffff;
  uVar5 = NEON_fminp(CONCAT44(fVar4,fVar4),local_e0,4);
  uVar5 = NEON_fminp(uVar5,uVar5,4);
  local_ec = 0;
  local_c8 = (float)uVar5;
  local_fc = DAT_01d4c158 * local_c8;
  local_d0 = 0;
  uStack_118 = (ulong)*(uint *)(param_3 + 3);
  local_100 = 0;
  local_c0 = NEON_fmin(CONCAT44((float)((ulong)uVar5 >> 0x20) * 0.15,local_c8 * 0.15),
                       CONCAT44(param_5[2] * DAT_01d4c158,param_5[2] * DAT_01d4c158),4);
                    /* try { // try from 0027e3e8 to 0027e3ff has its CatchHandler @ 0027e4b0 */
  fStack_f8 = local_fc;
  FUN_0028b370(auStack_278,pfVar2);
  FUN_0028b4e0(auStack_278,auStack_198);
  uStack_2a8 = _UNK_01d4ae58;
  local_2b0 = _DAT_01d4ae50;
  local_2e0 = &local_130;
  local_2d8 = &local_2b0;
  uStack_298 = _UNK_01d4b588;
  local_2a0 = _DAT_01d4b580;
  local_2c8 = 1;
  local_300[0] = PTR_DAT_02711eb0 + 0x10;
  local_2c0 = &local_110;
  uStack_288 = _UNK_01d49dc8;
  local_290 = _DAT_01d49dc0;
                    /* try { // try from 0027e458 to 0027e48b has its CatchHandler @ 0027e4ac */
  puStack_2d0 = local_2d8;
  uVar1 = FUN_0027d300(*param_5,auStack_198,local_300,&local_c0,&local_68,param_2,param_3,param_4,
                       param_7,&local_b8,1,uVar3,param_8);
  return uVar1 & 1;
}


