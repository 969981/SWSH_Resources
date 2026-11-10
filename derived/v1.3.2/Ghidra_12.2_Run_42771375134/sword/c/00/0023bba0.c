/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023bba0; name: FUN_0023bba0
 */


void FUN_0023bba0(float *param_1,byte param_2,long param_3,undefined8 *param_4,ulong param_5)

{
  undefined *puVar1;
  float fVar2;
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
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a4;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 *local_190;
  uint local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_150;
  undefined4 local_14c;
  undefined4 auStack_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 auStack_100 [12];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [12];
  undefined1 auStack_dc [12];
  char local_d0;
  undefined1 local_cf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  puVar1 = PTR_DAT_02711e20;
  local_14c = *(undefined4 *)(param_3 + 0x58);
  uStack_178 = *(undefined8 *)(param_3 + 0x28);
  local_180 = *(undefined8 *)(param_3 + 0x30);
  auStack_148[0] = 0;
  local_1a0 = PTR_DAT_02711e20 + 0x10;
  local_188 = *(byte *)(param_3 + 0x5c) >> 1 & 1;
  local_130 = 0xffffffff;
  local_198 = PTR_DAT_02711e20 + 0x40;
  local_150 = param_2 & 1;
  local_108 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_12c = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0x7f7fffff;
  local_cf = *(int *)(param_4 + 1) == 1;
  local_d0 = '\0';
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_190 = param_4;
  if ((param_5 & 1) != 0) {
                    /* try { // try from 0023bc5c to 0023bc6f has its CatchHandler @ 0023be0c */
    FUN_0023be70(&local_1b0,param_1);
    fVar2 = fabsf(local_1a4);
    if (DAT_01d4c2dc < fVar2) {
                    /* try { // try from 0023bc84 to 0023bce7 has its CatchHandler @ 0023be10 */
      fVar2 = fabsf(*param_1);
      fVar3 = fabsf(param_1[1]);
      fVar4 = fabsf(param_1[2]);
      fVar5 = fabsf(param_1[3]);
      fVar6 = fabsf(param_1[4]);
      fVar7 = fabsf(param_1[5]);
      fVar8 = fabsf(param_1[6]);
      fVar9 = fabsf(param_1[7]);
      fVar10 = fabsf(param_1[8]);
      fVar12 = param_1[0xd];
      fVar13 = param_1[0xe];
      fVar11 = param_1[0xc];
      local_1c0 = fVar2 * fVar11 + fVar5 * fVar12 + fVar8 * fVar13;
      fStack_1bc = fVar3 * fVar11 + fVar6 * fVar12 + fVar9 * fVar13;
      local_1b8 = fVar4 * fVar11 + fVar7 * fVar12 + fVar10 * fVar13;
      local_1b0 = param_1[9] - local_1c0;
      fStack_1ac = param_1[10] - fStack_1bc;
      local_1a8 = param_1[0xb] - local_1b8;
      local_1c0 = param_1[9] + local_1c0;
      fStack_1bc = fStack_1bc + param_1[10];
      local_1b8 = local_1b8 + param_1[0xb];
                    /* try { // try from 0023bd64 to 0023bd77 has its CatchHandler @ 0023be00 */
      FUN_00243e40(param_3 + 0xa0,&local_1b0,&local_1c0,4,auStack_90,(ulong)&local_1a0 | 8);
      goto LAB_0023bd94;
    }
  }
                    /* try { // try from 0023bd84 to 0023bd93 has its CatchHandler @ 0023be08 */
  FUN_00244220(param_3 + 0xa0,param_1,4,auStack_90,(ulong)&local_1a0 | 8);
LAB_0023bd94:
  local_1a0 = puVar1 + 0x10;
  local_198 = puVar1 + 0x40;
  if (local_d0 != '\0') {
                    /* try { // try from 0023bdd0 to 0023bdd7 has its CatchHandler @ 0023be04 */
    (**(code **)*local_190)
              (local_190,&local_140,auStack_100,auStack_f4,auStack_e8,auStack_148,auStack_dc);
  }
  return;
}


