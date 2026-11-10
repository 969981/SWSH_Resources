/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776bd0; name: FUN_00776bd0
 */


void FUN_00776bd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 200))
                    (*(long **)(param_1 + 0x80),*(undefined8 *)(param_2 + 8),param_3,1,&LAB_00776c50
                     ,*(undefined8 *)(param_1 + 0x20),0,0,0);
  FUN_00779300(*(undefined8 *)(param_1 + 0x20),uVar1,param_3,param_4,param_5);
  return;
}


