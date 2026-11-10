/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593550; name: FUN_00593550
 */


ulong FUN_00593550(float param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                  float *param_6,undefined8 param_7,ulong param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_1e0;
  float local_1dc;
  float fStack_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1bc;
  float fStack_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float fStack_1a8;
  float local_1a4;
  float fStack_1a0;
  float local_19c;
  float fStack_198;
  float local_194;
  float local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined1 auStack_128 [152];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  if ((param_8 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  uVar2 = param_9;
  if (param_9 == 0) {
    uVar2 = *(uint *)(param_3 + 0x54);
  }
  if (param_10 == 0) {
    fVar6 = *(float *)(param_3 + 0x88);
    fVar8 = *(float *)(param_3 + 0x8c);
    fVar7 = *(float *)(param_3 + 0x90);
    fVar5 = *(float *)(param_3 + 0x94);
    uVar1 = *(uint *)(param_3 + 0x58);
  }
  else {
    fVar6 = *(float *)(param_3 + 0x88);
    fVar8 = *(float *)(param_3 + 0x8c);
    fVar7 = *(float *)(param_3 + 0x90);
    fVar5 = *(float *)(param_3 + 0x94);
    uVar1 = param_10;
  }
  if (param_9 == 0) {
    param_9 = *(uint *)(param_4 + 0x54);
  }
  if (param_10 == 0) {
    param_10 = *(uint *)(param_4 + 0x58);
  }
  FUN_005124b0(0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_128,&local_14c);
  local_160 = *param_6;
  fStack_15c = param_6[1];
  local_158 = param_6[2];
  fStack_154 = param_6[3];
  local_14c = local_14c * param_1;
  local_1e0 = local_160 * local_14c;
  local_1dc = local_14c * fStack_15c;
  fStack_1d8 = local_14c * local_158;
  local_1d4 = local_14c * fStack_154;
  local_148 = local_148 * param_1;
  local_1d0 = local_160 * local_148;
  local_1cc = local_148 * fStack_15c;
  local_1c8 = local_148 * local_158;
  fStack_1c4 = local_148 * fStack_154;
  local_144 = local_144 * param_1;
  local_1c0 = local_160 * local_144;
  local_1bc = local_144 * fStack_15c;
  fStack_1b8 = local_144 * local_158;
  local_1b4 = local_144 * fStack_154;
  local_140 = local_140 * param_1;
  local_1b0 = local_160 * local_140;
  local_1ac = local_140 * fStack_15c;
  local_13c = local_13c * param_1;
  fStack_1a8 = local_140 * local_158;
  local_1a4 = local_140 * fStack_154;
  fStack_1a0 = local_160 * local_13c;
  local_19c = local_13c * fStack_15c;
  fStack_198 = local_13c * local_158;
  local_194 = local_13c * fStack_154;
  local_138 = local_138 * param_1;
  local_190 = local_160 * local_138;
  fStack_18c = local_138 * fStack_15c;
  local_188 = local_138 * local_158;
  fStack_184 = local_138 * fStack_154;
  local_134 = local_134 * param_1;
  local_180 = local_160 * local_134;
  fStack_17c = local_134 * fStack_15c;
  local_178 = local_134 * local_158;
  fStack_174 = local_134 * fStack_154;
  local_130 = local_130 * param_1;
  local_170 = local_160 * local_130;
  fStack_16c = local_130 * fStack_15c;
  local_168 = local_130 * local_158;
  fStack_164 = local_130 * fStack_154;
  local_12c = local_12c * param_1;
  local_160 = local_160 * local_12c;
  fStack_15c = local_12c * fStack_15c;
  local_158 = local_12c * local_158;
  fStack_154 = local_12c * fStack_154;
  uVar3 = FUN_0059d300(param_4,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    FUN_0059d000(0,0);
    do {
      lVar4 = param_3;
      param_3 = *(long *)(lVar4 + 0x120);
    } while (param_3 != 0);
    uVar2 = FUN_00575a10(0,0,(float)param_9,(float)param_10,0,0,fVar6 * (float)uVar2 + fVar7,
                         fVar8 * (float)uVar1 + fVar5,param_2,9,auStack_128,&local_1e0,
                         *(undefined8 *)(lVar4 + 0xa8),param_5,0);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}


