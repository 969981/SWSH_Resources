/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935d00; name: FUN_00935d00
 */


void FUN_00935d00(long param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  switch(param_4) {
  case 1:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbc,param_2,param_3,*param_5,0xffff0000);
    return;
  case 2:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbc,param_2,param_3,*param_5,param_5[1],0xffff0000
                );
    return;
  case 3:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbc,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,0xffff0000);
    return;
  case 4:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbc,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,param_5[3],0xffff0000);
    return;
  default:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbc,param_2,param_3,0xffff0000);
    return;
  }
}


