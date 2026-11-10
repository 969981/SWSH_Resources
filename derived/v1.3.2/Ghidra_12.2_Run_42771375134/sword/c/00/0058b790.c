/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058b790; name: FUN_0058b790
 */


undefined8
FUN_0058b790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,float *param_10,undefined8 param_11,int param_12,undefined4 param_13)

{
  undefined8 uVar1;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  if (*(int *)(param_9 + (long)param_12 * 4 + 0x1b380) == 0) {
    uVar1 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    local_78 = *param_10;
    fStack_74 = param_10[1];
    local_80 = 1.0 / local_78;
    fStack_7c = -fStack_74 / local_78;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd8),&local_80);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_11);
    uVar1 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_13);
  }
  return uVar1;
}


