/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00511060; name: FUN_00511060
 */


undefined8 * FUN_00511060(undefined8 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_190 [64];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 auStack_d0 [64];
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  bVar1 = false;
  if ((fVar4 == fVar2) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar3))) {
    bVar1 = fVar5 == fVar3;
  }
  if (bVar1) {
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined8 *)((long)param_1 + 0x34) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 5) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)param_1 = 0x3f800000;
  }
  else {
    fVar6 = fVar4 * (1.0 / fVar5);
    fVar4 = (1.0 / fVar5) * ((1.0 - fVar4) - fVar5);
    fVar5 = fVar2 * (1.0 / fVar3);
    fVar2 = (1.0 / fVar3) * ((1.0 - fVar2) - fVar3);
    FUN_005115a0(&local_90,param_4);
    FUN_005113f0(auStack_d0,param_4);
    local_110[3] = 0.0;
    local_110[4] = 0.0;
    local_110[1] = 0.0;
    local_110[2] = 0.0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_110[0] = (local_60 + fVar5 * local_90 + local_80 + fVar2 * local_70) /
                   (local_60 + fVar6 * local_90 + local_80 + fVar4 * local_70);
    local_e4 = 0;
    local_110[5] = (fStack_5c + fVar5 * fStack_8c + fStack_7c + fVar2 * fStack_6c) /
                   (fStack_5c + fVar6 * fStack_8c + fStack_7c + fVar4 * fStack_6c);
    local_dc = 0;
    local_e8 = (local_58 + fVar5 * local_88 + local_78 + fVar2 * local_68) /
               (local_58 + fVar6 * local_88 + local_78 + fVar4 * local_68);
    local_d4 = 0x3f800000;
    FUN_00515cb0(auStack_190,&local_90,local_110);
    FUN_00515cb0(&local_150,auStack_190,auStack_d0);
    param_1[2] = local_140;
    param_1[3] = uStack_138;
    *param_1 = local_150;
    param_1[1] = uStack_148;
    param_1[6] = local_120;
    param_1[7] = uStack_118;
    param_1[4] = local_130;
    param_1[5] = uStack_128;
  }
  return param_1;
}


