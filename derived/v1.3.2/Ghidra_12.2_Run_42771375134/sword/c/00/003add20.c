/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003add20; name: FUN_003add20
 */


void FUN_003add20(long *param_1,undefined8 param_2,undefined2 param_3,long *param_4)

{
  undefined *puVar1;
  
  FUN_003c6850(param_1,param_2,1);
  puVar1 = PTR_DAT_02712748;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = (long)param_4;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 003add68 to 003add87 has its CatchHandler @ 003add98 */
  (**(code **)(*param_4 + 0x18))(param_4,param_1);
  *(undefined2 *)(param_1 + 0xb) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


