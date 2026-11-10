/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0027fac0; name: FUN_0027fac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0027fac0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined *local_360 [4];
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *puStack_330;
  undefined1 local_328;
  undefined8 *local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [224];
  undefined1 auStack_1f8 [104];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_15c;
  float local_158;
  undefined8 local_154;
  undefined1 local_14c;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  uVar3 = *param_6;
  fVar4 = *(float *)(param_1 + 4);
  local_78 = -fVar4;
  fVar5 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0xc);
  local_70 = -fVar7;
  fStack_74 = -fVar5;
  if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar1 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar1 = false;
  }
  local_c8 = 0x3f800000;
  uStack_c0 = 0;
  local_88 = 0x3f80000000000000;
  local_b8 = 0x3f800000;
  uStack_b0 = 0;
  local_80 = 0;
  local_a8 = 0x3f8000003f800000;
  uStack_a0 = 0;
  local_98 = 0x3f80000000000000;
  uStack_90 = 0;
  fStack_6c = fVar4;
  local_68 = fVar5;
  fStack_64 = fVar7;
  if (!bVar1) {
    FUN_001b0f90(&local_c8,(float *)(param_2 + 4),param_2 + 0x10);
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    fVar7 = *(float *)(param_1 + 0xc);
  }
  local_118 = 0x3f800000;
  local_140 = CONCAT44(fVar5,fVar4);
  local_108 = 0x3f800000;
  uStack_138 = (ulong)(uint)fVar7;
  uVar6 = NEON_fminp(CONCAT44(fVar7,fVar7),local_140,4);
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0x3f8000003f800000;
  local_f0 = 0;
  local_e8 = 0x3f80000000000000;
  local_e0 = 0;
  local_d8 = 0x3f80000000000000;
  local_d0 = 0;
  local_170 = 0;
  local_168 = 0;
  uVar6 = NEON_fminp(uVar6,uVar6,4);
  local_128 = (float)uVar6;
  local_120 = NEON_fmin(CONCAT44((float)((ulong)uVar6 >> 0x20) * 0.15,local_128 * 0.15),
                        CONCAT44((float)param_5[2] * DAT_01d4c158,(float)param_5[2] * DAT_01d4c158),
                        4);
  local_15c = DAT_01d4c158 * local_128;
  local_14c = 0;
  local_154 = 0x37f7fffff;
  local_130 = 0;
  local_160 = 0;
  uStack_180 = param_3[2];
  uStack_188 = param_3[1];
  local_190 = *param_3;
  uStack_178 = (ulong)*(uint *)(param_3 + 3);
                    /* try { // try from 0027fc68 to 0027fc7f has its CatchHandler @ 0027fd38 */
  local_158 = local_15c;
  FUN_0028b370(auStack_2d8,(float *)(param_1 + 4));
  FUN_0028b4e0(auStack_2d8,auStack_1f8);
  uStack_308 = _UNK_01d4ae58;
  local_310 = _DAT_01d4ae50;
  local_340 = &local_190;
  local_338 = &local_310;
  uStack_2f8 = _UNK_01d4b588;
  local_300 = _DAT_01d4b580;
  local_328 = 1;
  local_360[0] = PTR_DAT_02711eb0 + 0x10;
  local_320 = &local_170;
  uStack_2e8 = _UNK_01d49dc8;
  local_2f0 = _DAT_01d49dc0;
                    /* try { // try from 0027fcd8 to 0027fd0f has its CatchHandler @ 0027fd34 */
  puStack_330 = local_338;
  uVar2 = FUN_0027eac0(*param_5,auStack_1f8,local_360,&local_120,&local_78,param_2,param_3,param_4,
                       param_7,&local_118,&local_c8,1,bVar1,uVar3,param_8);
  return uVar2 & 1;
}


