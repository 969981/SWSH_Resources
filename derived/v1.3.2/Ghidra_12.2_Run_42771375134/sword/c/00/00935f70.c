/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935f70; name: FUN_00935f70
 */


void FUN_00935f70(long param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_3) {
  case 1:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,param_2,*param_4,0xffff0000);
    return;
  case 2:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,param_2,*param_4,param_4[1],0xffff0000);
    return;
  case 3:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,param_2,*param_4,param_4[1],param_4[2],
                 0xffff0000);
    return;
  case 4:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,param_2,*param_4,param_4[1],param_4[2],
                 param_4[3],0xffff0000);
    return;
  default:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,param_2,0xffff0000);
    return;
  }
}


