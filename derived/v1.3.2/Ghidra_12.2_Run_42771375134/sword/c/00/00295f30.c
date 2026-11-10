/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00295f30; name: FUN_00295f30
 */


undefined8
FUN_00295f30(undefined8 param_1,long param_2,float *param_3,undefined8 param_4,undefined8 param_5,
            float *param_6,float *param_7,long param_8,byte *param_9)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined2 local_a8 [4];
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_48 [4];
  
  if (((*param_6 == param_6[3]) && (param_6[1] == param_6[4])) && (param_6[2] == param_6[5])) {
    fVar2 = (float)*(undefined8 *)param_3;
    fVar6 = fVar2 + fVar2;
    fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar8 = fVar5 + fVar5;
    fVar10 = (float)*(undefined8 *)(param_3 + 2);
    fVar9 = fVar10 + fVar10;
    fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    fVar3 = fVar5 * fVar8;
    fVar4 = fVar10 * fVar9;
    uVar7 = NEON_fmov(0x3f800000,4);
    fVar12 = (float)((ulong)uVar7 >> 0x20);
    local_70 = (float)uVar7 - fVar2 * fVar6;
    local_88._0_4_ = fVar10 * fVar6 - fVar11 * fVar8;
    local_90 = NEON_ext(CONCAT44((fVar12 - fVar3) - fVar4,((float)uVar7 - fVar3) - fVar4),
                        CONCAT44(fVar5 * fVar6 + fVar11 * fVar9,fVar5 * fVar6 + fVar11 * fVar9),4,1)
    ;
    local_80._4_4_ = fVar10 * fVar8 + fVar11 * fVar6;
    uVar7 = NEON_ext(CONCAT44(fVar5 * fVar6 - fVar11 * fVar9,fVar5 * fVar6 - fVar11 * fVar9),
                     CONCAT44((fVar12 - fVar2 * fVar6) - fVar4,local_70 - fVar4),4,1);
    local_78 = NEON_ext(CONCAT44(fVar10 * fVar6 + fVar11 * fVar8,fVar10 * fVar6 + fVar11 * fVar8),
                        CONCAT44(fVar10 * fVar8 - fVar11 * fVar6,fVar10 * fVar8 - fVar11 * fVar6),4,
                        1);
    local_88._4_4_ = (float)uVar7;
    local_70 = local_70 - fVar3;
    local_80._0_4_ = (float)((ulong)uVar7 >> 0x20);
    local_6c = param_3[4];
    local_68 = param_3[5];
    local_64 = param_3[6];
    local_60 = *(undefined4 *)(param_2 + 4);
    local_5c = *(undefined4 *)(param_2 + 8);
    local_58 = *(undefined4 *)(param_2 + 0xc);
    local_48[0] = *(undefined2 *)param_9;
                    /* try { // try from 00296094 to 002960ab has its CatchHandler @ 00296458 */
    uVar1 = FUN_00298d40(param_6[6],&local_90,param_6,param_7,(float *)(param_8 + 0x30),
                         param_8 + 0x24,local_48);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined2 *)(param_8 + 0x14) = 6;
    *(float *)(param_8 + 0x24) = -*(float *)(param_8 + 0x24);
    *(float *)(param_8 + 0x28) = -*(float *)(param_8 + 0x28);
    *(float *)(param_8 + 0x2c) = -*(float *)(param_8 + 0x2c);
    if (((*param_9 & 1) != 0) && (fVar2 = *(float *)(param_8 + 0x30), fVar2 != 0.0)) {
      local_c4 = fVar2 * param_7[1] + param_6[1];
      local_c8 = fVar2 * *param_7 + *param_6;
      local_c0 = fVar2 * param_7[2] + param_6[2];
                    /* try { // try from 00296120 to 0029612f has its CatchHandler @ 00296450 */
      FUN_00234720(&local_c8,&local_6c,&local_60,&local_90,&local_a0);
      *(ushort *)(param_8 + 0x14) = *(ushort *)(param_8 + 0x14) | 1;
      *(float *)(param_8 + 0x18) =
           local_a0 * (float)local_90 + fStack_9c * local_88._4_4_ + local_98 * (float)local_78 +
           local_6c;
      *(float *)(param_8 + 0x1c) =
           local_a0 * local_90._4_4_ + fStack_9c * (float)local_80 + local_98 * local_78._4_4_ +
           local_68;
      *(float *)(param_8 + 0x20) =
           local_a0 * (float)local_88 + fStack_9c * local_80._4_4_ + local_98 * local_70 + local_64;
    }
  }
  else {
    local_a8[0] = *(undefined2 *)param_9;
    uVar1 = FUN_00299660(param_1,param_6,param_3,param_2 + 4,param_7,param_8 + 0x18,
                         (float *)(param_8 + 0x30),param_8 + 0x24,local_a8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined2 *)(param_8 + 0x14) = 6;
    if (((*param_9 & 1) != 0) && (fVar2 = *(float *)(param_8 + 0x30), fVar2 != 0.0)) {
      local_b0 = param_6[6];
      local_c8 = fVar2 * *param_7 + *param_6;
      local_c4 = fVar2 * param_7[1] + param_6[1];
      local_c0 = fVar2 * param_7[2] + param_6[2];
      fStack_b4 = fVar2 * param_7[2] + param_6[5];
      local_bc = fVar2 * *param_7 + param_6[3];
      local_b8 = fVar2 * param_7[1] + param_6[4];
      fVar2 = (float)*(undefined8 *)param_3;
      fVar6 = fVar2 + fVar2;
      fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
      fVar8 = fVar5 + fVar5;
      fVar10 = (float)*(undefined8 *)(param_3 + 2);
      fVar9 = fVar10 + fVar10;
      fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
      fVar3 = fVar5 * fVar8;
      fVar4 = fVar10 * fVar9;
      uVar7 = NEON_fmov(0x3f800000,4);
      fVar12 = (float)((ulong)uVar7 >> 0x20);
      local_70 = (float)uVar7 - fVar2 * fVar6;
      local_90 = NEON_ext(CONCAT44((fVar12 - fVar3) - fVar4,((float)uVar7 - fVar3) - fVar4),
                          CONCAT44(fVar5 * fVar6 + fVar11 * fVar9,fVar5 * fVar6 + fVar11 * fVar9),4,
                          1);
      uVar7 = NEON_ext(CONCAT44(fVar5 * fVar6 - fVar11 * fVar9,fVar5 * fVar6 - fVar11 * fVar9),
                       CONCAT44((fVar12 - fVar2 * fVar6) - fVar4,local_70 - fVar4),4,1);
      local_78 = NEON_ext(CONCAT44(fVar10 * fVar6 + fVar11 * fVar8,fVar10 * fVar6 + fVar11 * fVar8),
                          CONCAT44(fVar10 * fVar8 - fVar11 * fVar6,fVar10 * fVar8 - fVar11 * fVar6),
                          4,1);
      local_70 = local_70 - fVar3;
      local_88 = CONCAT44((int)uVar7,fVar10 * fVar6 - fVar11 * fVar8);
      local_80 = CONCAT44(fVar10 * fVar8 + fVar11 * fVar6,(int)((ulong)uVar7 >> 0x20));
      local_6c = param_3[4];
      local_68 = param_3[5];
      local_64 = param_3[6];
      local_60 = *(undefined4 *)(param_2 + 4);
      local_5c = *(undefined4 *)(param_2 + 8);
      local_58 = *(undefined4 *)(param_2 + 0xc);
                    /* try { // try from 00296350 to 00296363 has its CatchHandler @ 00296454 */
      FUN_00233a00(&local_c8,&local_bc,&local_6c,&local_60,&local_90,0,&local_a0);
      fVar2 = param_3[2];
      fVar5 = param_3[3];
      fVar3 = *param_3;
      fVar10 = param_3[1];
      local_a0 = local_a0 + local_a0;
      fStack_9c = fStack_9c + fStack_9c;
      local_98 = local_98 + local_98;
      fVar4 = fVar5 * fVar5 + -0.5;
      fVar11 = local_a0 * fVar3 + fStack_9c * fVar10 + local_98 * fVar2;
      fVar8 = param_3[6];
      fVar6 = param_3[4];
      fVar12 = param_3[5];
      *(ushort *)(param_8 + 0x14) = *(ushort *)(param_8 + 0x14) | 1;
      *(float *)(param_8 + 0x18) =
           fVar6 + fVar3 * fVar11 +
                   local_a0 * fVar4 + fVar5 * (local_98 * fVar10 - fStack_9c * fVar2);
      *(float *)(param_8 + 0x1c) =
           fVar10 * fVar11 + fStack_9c * fVar4 + fVar5 * (local_a0 * fVar2 - local_98 * fVar3) +
           fVar12;
      *(float *)(param_8 + 0x20) =
           local_98 * fVar4 + fVar5 * (fStack_9c * fVar3 - local_a0 * fVar10) + fVar2 * fVar11 +
           fVar8;
    }
  }
  return 1;
}


