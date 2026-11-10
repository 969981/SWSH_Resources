/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005734c0; name: FUN_005734c0
 */


void FUN_005734c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long param_9,uint param_10)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
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
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined1 auStack_e0 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0 [2];
  
  (**(code **)(**(long **)(param_9 + 0x20) + 0x88))(*(long **)(param_9 + 0x20),auStack_e0);
  if ((param_10 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x148))(*(long **)(param_9 + 0x20),0xffffffff,1);
  }
  fVar10 = (float)NEON_ucvtf(local_d8);
  piVar2 = (int *)(param_9 + 0x29bb8);
  fVar9 = (float)NEON_ucvtf(uStack_d4);
  if ((param_10 >> 0x11 & 1) == 0) {
    plVar4 = *(long **)(param_9 + 0x30);
    (**(code **)(*plVar4 + 0x108))(plVar4,&local_1d0,param_10 & 0xffff);
    plVar4 = *(long **)(param_9 + 0x30);
    (**(code **)(*plVar4 + 0x118))(plVar4,0);
  }
  plVar4 = (long *)(param_9 + 0x30);
  local_170 = 2.0 / fVar10;
  fStack_fc = param_6 - fVar9 * 0.5;
  local_120 = param_1 - fVar10 * 0.5;
  fStack_11c = param_2 - fVar9 * 0.5;
  local_118 = param_5 - fVar10 * 0.5;
  fStack_114 = fStack_fc + param_8;
  fStack_104 = fStack_11c + param_4;
  local_f8 = local_120 + param_3;
  fVar9 = 2.0 / fVar9;
  local_108 = local_118 + param_7;
  local_1c0 = local_170 * (local_118 + 0.0);
  fStack_1cc = fVar9 * (fStack_114 + 0.0);
  fStack_1c4 = fVar9 * (fStack_11c + 0.0);
  local_1d0 = local_170 * (local_120 + 0.0);
  fStack_1ac = fVar9 * (fStack_104 + 0.0);
  fStack_184 = fVar9 * (fStack_fc + 0.0);
  local_1a0 = local_170 * (local_108 + 0.0);
  local_180 = local_170 * (local_f8 + 0.0);
  local_150 = 0x2000200010000;
  local_148 = 3;
  local_144 = 0x50004;
  uStack_140 = 0x60006;
  local_13c = 0x40007;
  local_138 = 0xa000a00090008;
  local_130 = 0x8000b;
  uStack_12c = 0xd000c;
  uStack_128 = 0xe000e;
  local_124 = 0xc000f;
  fStack_16c = fVar9 * (fStack_fc + 0.0);
  fStack_164 = fVar9 * (fStack_11c + 0.0);
  local_160 = local_170 * (local_f8 + 0.0);
  local_170 = local_170 * (local_118 + 0.0);
  local_1c8 = local_1d0;
  fStack_1bc = fStack_1c4;
  local_1b8 = local_1c0;
  fStack_1b4 = fStack_1cc;
  local_1b0 = local_1d0;
  local_1a8 = local_1d0;
  fStack_1a4 = fStack_1cc;
  fStack_19c = fStack_1cc;
  local_198 = local_1a0;
  fStack_194 = fStack_1ac;
  local_190 = local_1a0;
  fStack_18c = fStack_1ac;
  local_188 = local_1a0;
  fStack_17c = fStack_184;
  local_178 = local_180;
  fStack_174 = fStack_1ac;
  local_168 = local_170;
  fStack_15c = fStack_164;
  local_158 = local_160;
  fStack_154 = fStack_16c;
  local_110 = local_120;
  fStack_10c = fStack_114;
  local_100 = local_108;
  fStack_f4 = fStack_104;
  local_f0 = local_118;
  fStack_ec = fStack_11c;
  local_e8 = local_f8;
  fStack_e4 = fStack_fc;
  if (*plVar4 != 0) {
    local_c8 = 0;
    uStack_c0 = 0x10;
    local_b8 = 0;
    if (*(long *)(param_9 + 0x299e8) == 0) {
      FUN_005466d0(*plVar4,local_b0);
      (**(code **)(*local_b0[0] + 8))();
      uVar5 = (**(code **)(*(long *)*plVar4 + 0x128))((long *)*plVar4,0);
      uVar3 = (**(code **)(*(long *)*plVar4 + 0x138))((long *)*plVar4,0);
      (**(code **)(*local_b0[0] + 0x230))
                (local_b0[0],&local_c8,1,uVar5,uVar3,(long *)(param_9 + 0x299e8));
    }
  }
  iVar7 = *piVar2;
  uVar1 = iVar7 + 0x80;
  if (*(uint *)(param_9 + 0x29bbc) <= uVar1) {
    iVar7 = 0;
    *piVar2 = 0;
  }
  uVar3 = 6;
  if (uVar1 < *(uint *)(param_9 + 0x29bbc)) {
    uVar3 = 2;
  }
  *piVar2 = iVar7 + 0x80;
  puVar6 = (undefined8 *)FUN_00549260(*(undefined8 *)(param_9 + 0x29bc8),uVar3,iVar7,0x80);
  puVar6[2] = CONCAT44(fStack_1bc,local_1c0);
  puVar6[3] = CONCAT44(fStack_1b4,local_1b8);
  *puVar6 = CONCAT44(fStack_1cc,local_1d0);
  puVar6[1] = CONCAT44(fStack_1c4,local_1c8);
  puVar6[6] = CONCAT44(fStack_19c,local_1a0);
  puVar6[7] = CONCAT44(fStack_194,local_198);
  puVar6[4] = CONCAT44(fStack_1ac,local_1b0);
  puVar6[5] = CONCAT44(fStack_1a4,local_1a8);
  puVar6[10] = CONCAT44(fStack_17c,local_180);
  puVar6[0xb] = CONCAT44(fStack_174,local_178);
  puVar6[8] = CONCAT44(fStack_18c,local_190);
  puVar6[9] = CONCAT44(fStack_184,local_188);
  puVar6[0xe] = CONCAT44(fStack_15c,local_160);
  puVar6[0xf] = CONCAT44(fStack_154,local_158);
  puVar6[0xc] = CONCAT44(fStack_16c,local_170);
  puVar6[0xd] = CONCAT44(fStack_164,local_168);
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bc8));
  iVar8 = *(int *)(param_9 + 0x29bc0);
  uVar1 = iVar8 + 0x30;
  if (*(uint *)(param_9 + 0x29bc4) <= uVar1) {
    iVar8 = 0;
    *(undefined4 *)(param_9 + 0x29bc0) = 0;
  }
  *(int *)(param_9 + 0x29bc0) = iVar8 + 0x30;
  uVar3 = 6;
  if (uVar1 < *(uint *)(param_9 + 0x29bc4)) {
    uVar3 = 2;
  }
  puVar6 = (undefined8 *)FUN_00549260(*(undefined8 *)(param_9 + 0x29bd8),uVar3,iVar8,0x30);
  *puVar6 = local_150;
  puVar6[1] = CONCAT44(local_144,local_148);
  puVar6[4] = CONCAT44(uStack_12c,local_130);
  puVar6[5] = CONCAT44(local_124,uStack_128);
  puVar6[2] = CONCAT44(local_13c,uStack_140);
  puVar6[3] = local_138;
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bd8));
  (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
            (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x299e8),
             *(undefined8 *)(param_9 + 0x29bc8),iVar7,0,0,1);
  (**(code **)(**(long **)(param_9 + 0x20) + 0x48))
            (*(long **)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x29bd8),iVar8);
  FUN_0059a530(*(undefined8 *)(param_9 + 0x30));
  (**(code **)(**(long **)(param_9 + 0x20) + 0x1d0))(*(long **)(param_9 + 0x20),4,0x18,0,0,0xf);
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)*plVar4 + 0x120))();
    (**(code **)(*(long *)*plVar4 + 0x110))();
  }
  return;
}


