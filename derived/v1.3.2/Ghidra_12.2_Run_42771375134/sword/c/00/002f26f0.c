/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f26f0; name: FUN_002f26f0
 */


undefined4
FUN_002f26f0(float param_1,undefined4 param_2,long param_3,long *param_4,long param_5,long param_6,
            long param_7,long param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **local_230;
  undefined8 local_228;
  undefined4 local_220;
  long local_218;
  undefined1 *puStack_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  long lStack_1f0;
  undefined4 *local_1e8;
  float *local_1e0;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined1 auStack_1b8 [48];
  float local_188;
  float local_184;
  float local_180;
  undefined1 auStack_178 [64];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined1 auStack_d0 [80];
  
  lVar1 = *param_4;
  FUN_001b0f90(auStack_d0,lVar1 + 4,lVar1 + 0x10);
  fStack_dc = *(float *)(param_5 + 0x14) - *(float *)(param_7 + 0x14);
  local_e0 = *(float *)(param_5 + 0x10) - *(float *)(param_7 + 0x10);
  local_d8 = *(float *)(param_5 + 0x18) - *(float *)(param_7 + 0x18);
  fStack_ec = *(float *)(param_6 + 0x14) - *(float *)(param_8 + 0x14);
  local_f0 = *(float *)(param_6 + 0x10) - *(float *)(param_8 + 0x10);
  fVar4 = fStack_dc - fStack_ec;
  local_e8 = *(float *)(param_6 + 0x18) - *(float *)(param_8 + 0x18);
  fVar5 = local_e0 - local_f0;
  fVar3 = local_d8 - local_e8;
  local_110 = fVar5;
  fStack_10c = fVar4;
  local_108 = fVar3;
  local_100 = fVar5;
  fStack_fc = fVar4;
  local_f8 = fVar3;
  fVar2 = sqrtf(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    local_110 = fVar2 * fVar5;
    fStack_10c = fVar2 * fVar4;
    local_108 = fVar2 * fVar3;
  }
  local_138 = 0x3f800000;
  uStack_130 = 0;
  local_118 = 0x3f800000;
  local_128 = 0x3f800000;
  uStack_120 = 0;
                    /* try { // try from 002f2804 to 002f2813 has its CatchHandler @ 002f2934 */
  FUN_0029a800(auStack_178,param_3 + 0x44,param_3 + 0x50,&local_138,&local_110);
                    /* try { // try from 002f2814 to 002f2827 has its CatchHandler @ 002f2930 */
  FUN_002321a0(auStack_1b8,auStack_178,param_6,lVar1 + 4);
  local_188 = local_188 + param_1;
  local_184 = local_184 + param_1;
  local_180 = local_180 + param_1;
  local_1c8 = *(undefined4 *)(param_3 + 0x50);
  local_1c4 = *(undefined4 *)(param_3 + 0x54);
  local_1c0 = *(undefined4 *)(param_3 + 0x58);
  local_228 = 0x7f7fffff00000002;
  local_230 = &PTR_LAB_025e5ca8;
  puStack_210 = auStack_d0;
  fStack_1d4 = *(float *)(param_3 + 0x48) + param_1;
  local_1d8 = *(float *)(param_3 + 0x44) + param_1;
  local_1d0 = *(float *)(param_3 + 0x4c) + param_1;
  local_208 = &local_100;
  local_200 = &local_e0;
  local_1f8 = &local_f0;
  local_1e8 = &local_1c8;
  local_1e0 = &local_1d8;
                    /* try { // try from 002f28ec to 002f28ff has its CatchHandler @ 002f292c */
  local_220 = param_2;
  local_218 = lVar1;
  lStack_1f0 = param_6;
  (*(code *)(&PTR_LAB_025e5c88)[*(ushort *)(*(long *)(lVar1 + 0x30) + 8) - 3])
            (*(long *)(lVar1 + 0x30),auStack_1b8,&local_230,1,1);
  return local_228._4_4_;
}


