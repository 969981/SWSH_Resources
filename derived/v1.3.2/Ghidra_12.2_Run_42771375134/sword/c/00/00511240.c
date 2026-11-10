/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00511240; name: FUN_00511240
 */


undefined4 * FUN_00511240(undefined4 *param_1,float *param_2,float *param_3,ulong param_4)

{
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [64];
  
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if (((((*param_2 != *param_3) || (param_2[1] != param_3[1])) || (param_2[2] != param_3[2])) ||
      ((param_2[3] != param_3[3] || (param_2[4] != param_3[4])))) ||
     ((param_2[5] != param_3[5] || ((param_2[6] != param_3[6] || (param_2[7] != param_3[7])))))) {
    FUN_00511bb0(auStack_70,param_2,param_2 + 2,param_2 + 4,param_2 + 6);
    FUN_00515cb0(param_1,param_1,auStack_70);
    if ((param_4 & 1) != 0) {
      FUN_00511060(auStack_70,param_2 + 6,param_3 + 6,0x15);
      FUN_00515cb0(param_1,param_1,auStack_70);
    }
    FUN_00511bb0(auStack_70,param_3,param_3 + 2,param_3 + 4,param_3 + 6);
    FUN_005156a0(&local_b0,auStack_70);
    local_d8 = local_98;
    local_e0 = local_a0;
    local_e8 = local_a8;
    local_f0 = local_b0;
    local_b8 = local_78;
    local_c0 = local_80;
    local_c8 = local_88;
    local_d0 = local_90;
    FUN_00515cb0(param_1,param_1,&local_f0);
  }
  return param_1;
}


