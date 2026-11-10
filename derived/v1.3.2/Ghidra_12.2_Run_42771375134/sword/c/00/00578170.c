/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578170; name: FUN_00578170
 */


undefined8
FUN_00578170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,long param_10,int param_11,long param_12,int param_13,undefined4 param_14,
            undefined8 param_15,undefined8 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,float param_20,float param_21,float param_22,float param_23,
            float param_24)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  bVar3 = param_11 == 0;
  if (bVar3) {
    param_11 = 1;
  }
  uVar1 = 0;
  if (!bVar3) {
    uVar1 = param_19;
  }
  bVar3 = param_12 != 0;
  lVar5 = 1;
  bVar2 = false;
  if ((param_12 != 0) && (0.0 < param_21)) {
    bVar3 = 0.0 < param_22 || 0.0 < param_24;
    lVar5 = 1;
    if (0.0 < param_22 || 0.0 < param_24) {
      lVar5 = 2;
    }
    bVar2 = bVar3;
  }
  if (!bVar3) {
    lVar5 = 0;
  }
  if (*(int *)(param_9 + (long)param_11 * 0x108 + lVar5 * 0x58 + (long)param_13 * 4 + 0x7638) == 0)
  {
    uVar4 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    if (param_10 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
    }
    DAT_02760c18 = param_17;
    DAT_02760c1c = param_17;
    DAT_02760c20 = param_17;
    DAT_02760c24 = 0x3f800000;
    DAT_02760c28._0_4_ = param_18;
    DAT_02760c28._4_4_ = param_18;
    DAT_02760c30._0_4_ = param_18;
    DAT_02760c30._4_4_ = 0x3f800000;
    DAT_02760c38 = uVar1;
    DAT_02760c3c = uVar1;
    DAT_02760c40 = uVar1;
    DAT_02760c44._0_4_ = uVar1;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,3);
    if (param_11 == 3) {
      local_98 = 1.0 / (param_20 * param_20);
      local_94 = param_20 * param_20 * 0.5;
      local_a0 = local_98 * 4.0 + -2.0;
      local_9c = 1.0;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x128),&local_a0);
    }
    if (bVar2) {
      if (0.0 <= param_24) {
        local_a0 = -0.5 / param_24;
        if (param_24 <= param_23) {
          param_24 = 1.0;
        }
        else {
          param_24 = param_23 / param_24;
        }
        local_9c = 0.5 - local_a0 * param_23;
        local_94 = param_24 * param_24;
      }
      else {
        local_9c = 1.0;
        local_a0 = 0.0;
        local_94 = 1.0;
      }
      local_98 = param_21;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x114),&local_a0);
      (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                (param_22 * 0.5,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x118));
    }
    if (bVar3) {
      uVar4 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_14);
    }
    else {
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_14);
    }
  }
  return uVar4;
}


