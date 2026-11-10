/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00579850; name: FUN_00579850
 */


undefined4
FUN_00579850(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,uint param_10,undefined8 param_11,undefined8 param_12,float *param_13,float *param_14,
            undefined8 param_15,undefined4 param_16,undefined4 param_17,float param_18,
            undefined4 param_19)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  
  if ((param_13 == (float *)0x0) ||
     ((((((*param_13 == 1.0 && (param_13[1] == 0.0)) && (param_13[2] == 0.0)) &&
        (((param_13[3] == 0.0 && (param_13[4] == 0.0)) &&
         ((param_13[5] == 1.0 && ((param_13[6] == 0.0 && (param_13[7] == 0.0)))))))) &&
       ((param_13[8] == 0.0 &&
        (((param_13[9] == 0.0 && (param_13[10] == 1.0)) && (param_13[0xb] == 0.0)))))) &&
      (((param_13[0xc] == 0.0 && (param_13[0xd] == 0.0)) &&
       ((param_13[0xe] == 0.0 && (param_13[0xf] == 1.0)))))))) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if ((param_14 == (float *)0x0) ||
     ((((*param_14 == 1.0 && (param_14[1] == 0.0)) &&
       ((param_14[2] == 0.0 &&
        ((((param_14[3] == 0.0 && (param_14[4] == 0.0)) && (param_14[5] == 1.0)) &&
         ((param_14[6] == 0.0 && (param_14[7] == 0.0)))))))) &&
      (((param_14[8] == 0.0 && ((param_14[9] == 0.0 && (param_14[10] == 1.0)))) &&
       (((param_14[0xb] == 0.0 &&
         (((param_14[0xc] == 0.0 && (param_14[0xd] == 0.0)) && (param_14[0xe] == 0.0)))) &&
        (param_14[0xf] == 1.0)))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    *(float **)(param_9 + 0x29b68) = param_14;
    *(undefined4 *)(param_9 + 0x29ba8) = param_19;
  }
  puVar4 = (undefined8 *)(param_9 + 0x30);
  (**(code **)(*(long *)*puVar4 + 0xe8))
            ((long *)*puVar4,
             *(undefined4 *)((long)puVar4 + lVar3 * 4 + ((ulong)~param_10 & 1) * 8 + 0x1b424));
  DAT_02760a18 = param_17;
  DAT_02760a1c = param_17;
  DAT_02760a20 = param_17;
  DAT_02760a24 = param_17;
  DAT_02760a28 = param_18;
  DAT_02760a2c = param_18;
  DAT_02760a30 = param_18;
  DAT_02760a34 = param_18;
  (**(code **)(*(long *)*puVar4 + 0xb0))
            ((long *)*puVar4,*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,2);
  if ((int)lVar3 != 0) {
    if (param_13 == (float *)0x0) {
      param_13 = &local_e8;
      local_dc = 0;
      local_e4 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_ac = 0x3f800000;
      local_c0 = 0x3f800000;
      local_d4 = 0x3f800000;
      local_e8 = 1.0;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),param_13);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  if ((param_10 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_12);
    uVar2 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
    FUN_00540cf0(*(undefined8 *)(param_9 + 0x20),0);
    (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),0);
  }
  else {
    FUN_00540cf0(*(undefined8 *)(param_9 + 0x20),1);
    FUN_00540d10(*(undefined8 *)(param_9 + 0x20),2,0xe);
    FUN_00540d30(param_18,param_18,param_18,param_18,*(undefined8 *)(param_9 + 0x20));
    (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),5);
    local_dc = CONCAT44(local_dc._4_4_,param_18);
    local_e8 = param_18;
    local_e4 = CONCAT44(param_18,param_18);
    (**(code **)(**(long **)(param_9 + 0x20) + 400))(*(long **)(param_9 + 0x20),&local_e8);
    uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
  }
  if (bVar1) {
    *(undefined8 *)(param_9 + 0x29b68) = 0;
    *(undefined4 *)(param_9 + 0x29ba8) = 0x3f800000;
  }
  return uVar2;
}


