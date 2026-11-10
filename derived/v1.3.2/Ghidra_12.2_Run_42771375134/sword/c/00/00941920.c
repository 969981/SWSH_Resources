/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941920; name: FUN_00941920
 */


void FUN_00941920(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008f8110(*param_1);
  uVar2 = FUN_008f87e0(*param_1);
  uVar3 = FUN_00931920(param_1[1]);
  FUN_008ee2f0(param_2,uVar1,uVar2,uVar3,param_3);
  return;
}


