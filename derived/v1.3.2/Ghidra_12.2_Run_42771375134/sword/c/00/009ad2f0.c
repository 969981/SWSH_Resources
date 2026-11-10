/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad2f0; name: FUN_009ad2f0
 */


void FUN_009ad2f0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58 [10];
  
  uVar3 = FUN_009424b0(param_1,4);
  uVar1 = FUN_008e2150();
  uVar2 = FUN_008ebfa0(uVar1);
  uVar2 = FUN_008e2240(uVar3,uVar2);
  uVar4 = FUN_009423e0(param_1);
  FUN_00926280(uVar4,uVar2,uVar2,uVar2,0,uVar3,local_58);
  uVar3 = FUN_009424b0(param_1,4);
  uVar4 = FUN_00942380(param_1);
  FUN_00942390(param_1);
  uVar5 = FUN_00931920();
  uVar2 = FUN_008eca00(uVar4,uVar5,uVar3,local_58[0],0);
  uVar3 = FUN_009424b0(param_1,uVar2);
  FUN_009ad480(param_1,uVar3,local_58);
  return;
}


