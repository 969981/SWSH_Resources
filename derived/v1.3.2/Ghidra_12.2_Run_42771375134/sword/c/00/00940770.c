/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940770; name: FUN_00940770
 */


void FUN_00940770(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_008df3f0(uVar3,param_2);
  uVar1 = FUN_008e1290();
  uVar2 = FUN_008e2d10(uVar3);
  FUN_00940650(uVar1,uVar2);
  return;
}


