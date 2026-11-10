/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058b330; name: FUN_0058b330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0058b330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,long param_9
            ,long param_10,long param_11,long param_12,float *param_13,int param_14,int param_15,
            long param_16,undefined8 param_17,undefined8 param_18,undefined4 param_19,
            undefined4 param_20,undefined8 *param_21,undefined4 param_22)

{
  int *piVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_15 == 0x15) || (param_16 != 0)) {
    uVar2 = FUN_0058ae30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,0,param_10,
                         0xffffffff,param_11,param_15,param_14,param_12,0,0,0,param_13,param_16,
                         param_17,param_18,param_19,param_20,param_21,param_22);
  }
  else {
    piVar1 = (int *)(param_9 + 0x38 + (long)param_14 * 0x580 + (long)param_15 * 4 + 0x2d10);
    if (param_11 == 0) {
      piVar1 = (int *)(param_9 + 0x38 + (long)param_14 * 4 + 0x4310);
    }
    if (*piVar1 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      _DAT_02760c18 = 0;
      _DAT_02760c20 = 0;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,1);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,0);
      fVar3 = 0.0;
      fVar4 = 1.0;
      fVar5 = 1.0;
      fVar6 = 0.0;
      if (param_12 != 0) {
        fVar5 = *(float *)(param_12 + 8);
        fVar6 = *(float *)(param_12 + 0xc);
      }
      if (param_13 != (float *)0x0) {
        fVar4 = *param_13;
        fVar3 = param_13[1];
      }
      DAT_02760a18 = fVar5 * fVar4;
      _DAT_02760a28 = *param_21;
      _DAT_02760a30 = param_21[1];
      fVar3 = fVar6 * fVar4 + fVar3;
      DAT_02760a1c = DAT_02760a18;
      DAT_02760a20 = DAT_02760a18;
      DAT_02760a24 = DAT_02760a18;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,2);
      DAT_02760a18 = fVar3;
      DAT_02760a1c = fVar3;
      DAT_02760a20 = fVar3;
      DAT_02760a24 = fVar3;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760a18,1);
      if (param_10 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_10);
      }
      if (param_11 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),param_11);
      }
      uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_22);
      return uVar2;
    }
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}


