/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938000; name: FUN_00938000
 */


void FUN_00938000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = FUN_008e0a00(param_2);
  uVar4 = FUN_008e0a00(param_3);
  FUN_0093c160(uVar5,uVar3,uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008e0a00(param_3);
  FUN_00916b10(uVar5,0x3e,uVar1,uVar2);
  return;
}


