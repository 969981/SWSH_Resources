/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096bf20; name: FUN_0096bf20
 */


void FUN_0096bf20(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_00942380(param_1);
  FUN_00942390(param_1);
  uVar4 = FUN_00931920();
  uVar1 = FUN_008eca00(uVar3,uVar4,uVar2,*(undefined4 *)(param_3 + 4),0);
  *param_2 = uVar1;
  return;
}


