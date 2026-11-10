/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00589d00; name: FUN_00589d00
 */


undefined4
FUN_00589d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            float param_5,float param_6,float param_7,undefined4 param_8,long param_9,long *param_10
            ,undefined4 *param_11,int param_12,int param_13,undefined4 param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_9 + (ulong)(param_12 == 1) * 0x58 + (long)param_13 * 4 + 0x7b6c) == 0) {
    uVar2 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    DAT_02760a20 = (param_6 * param_7) / param_5;
    DAT_02760a18 = *param_11;
    DAT_02760a1c = param_11[1];
    DAT_02760a24 = param_7;
    DAT_02760a28 = param_8;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,2);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
    uVar1 = (**(code **)(*param_10 + 0x98))(param_10);
    (**(code **)(*param_10 + 0x88))(param_10,0);
    uVar2 = FUN_00571a10(param_1,param_2,param_3,param_4,param_9,param_14);
    (**(code **)(*param_10 + 0x88))(param_10,uVar1);
  }
  return uVar2;
}


