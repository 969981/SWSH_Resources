/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053aa20; name: FUN_0053aa20
 */


undefined8 *
FUN_0053aa20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
            undefined8 *param_5,uint param_6,float *param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_288 [64];
  undefined1 auStack_248 [64];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [64];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 auStack_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((float *)&local_108 == param_7) {
    fVar1 = *param_7;
  }
  else {
    local_108 = *(undefined8 *)param_7;
    uStack_100 = *(undefined8 *)(param_7 + 2);
    fVar1 = (float)local_108;
    local_f8 = *(undefined8 *)(param_7 + 4);
    local_f0 = *(undefined8 *)(param_7 + 6);
  }
  fVar3 = DAT_0275cd6c;
  if (((((fVar1 == DAT_0275cd6c) && (fVar3 = DAT_0275cd70, param_7[1] == DAT_0275cd70)) &&
       (fVar3 = DAT_0275cd74, param_7[2] == DAT_0275cd74)) &&
      ((fVar3 = DAT_0275cd78, param_7[3] == DAT_0275cd78 &&
       (fVar3 = DAT_0275cd7c, param_7[4] == DAT_0275cd7c)))) &&
     ((fVar3 = DAT_0275cd80, param_7[5] == DAT_0275cd80 &&
      ((fVar3 = DAT_0275cd84, param_7[6] == DAT_0275cd84 &&
       (fVar3 = DAT_0275cd88, param_7[7] == DAT_0275cd88)))))) {
    local_108 = *param_5;
    uStack_100 = param_5[1];
    local_f8 = param_5[2];
    local_f0 = param_5[3];
  }
  local_a0 = 0;
  local_e4 = param_3;
  local_58 = param_2;
  uStack_54 = param_1;
  uVar2 = FUN_0053c740(&uStack_54,&local_108,&local_58,&local_e4,&local_a0,param_6 & 1,1);
  *(undefined8 *)((long)param_4 + 0xc) = 0;
  *(undefined8 *)((long)param_4 + 4) = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  *(undefined8 *)((long)param_4 + 0x34) = 0;
  *(undefined8 *)((long)param_4 + 0x2c) = 0;
  *(undefined4 *)param_4 = uVar2;
  *(float *)((long)param_4 + 0x14) = fVar3;
  *(undefined4 *)(param_4 + 5) = param_3;
  *(undefined4 *)((long)param_4 + 0x3c) = 0x3f800000;
  if ((((*param_7 != DAT_0275cd6c) || (param_7[1] != DAT_0275cd70)) || (param_7[2] != DAT_0275cd74))
     || (((param_7[3] != DAT_0275cd78 || (param_7[4] != DAT_0275cd7c)) ||
         ((param_7[5] != DAT_0275cd80 ||
          ((param_7[6] != DAT_0275cd84 || (param_7[7] != DAT_0275cd88)))))))) {
    FUN_00511bb0(auStack_148,param_5,param_5 + 1,param_5 + 2,param_5 + 3);
    FUN_00511bb0(&local_a0,&local_108,&uStack_100,&local_f8,&local_f0);
    FUN_005156a0(&local_e0,&local_a0);
    local_170 = local_c8;
    local_178 = local_d0;
    local_180 = local_d8;
    local_188 = local_e0;
    local_150 = local_a8;
    local_158 = local_b0;
    local_160 = local_b8;
    local_168 = local_c0;
    FUN_00511bb0(auStack_1c8,&local_108,&uStack_100,&local_f8,&local_f0);
    FUN_00511bb0(&local_a0,param_5,param_5 + 1,param_5 + 2,param_5 + 3);
    FUN_005156a0(&local_e0,&local_a0);
    local_1f0 = local_c8;
    local_1f8 = local_d0;
    local_200 = local_d8;
    local_208 = local_e0;
    local_1d0 = local_a8;
    local_1d8 = local_b0;
    local_1e0 = local_b8;
    local_1e8 = local_c0;
    FUN_00515cb0(auStack_288,auStack_148,&local_188);
    FUN_00515cb0(auStack_248,auStack_288,param_4);
    FUN_00515cb0(&local_e0,auStack_248,auStack_1c8);
    FUN_00515cb0(&local_a0,&local_e0,&local_208);
    param_4[2] = local_90;
    param_4[3] = uStack_88;
    *param_4 = CONCAT44(uStack_9c,local_a0);
    param_4[1] = uStack_98;
    param_4[6] = local_70;
    param_4[7] = uStack_68;
    param_4[4] = local_80;
    param_4[5] = uStack_78;
  }
  return param_4;
}


