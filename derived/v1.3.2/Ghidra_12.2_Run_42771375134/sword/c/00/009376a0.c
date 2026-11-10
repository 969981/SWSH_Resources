/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009376a0; name: FUN_009376a0
 */


void FUN_009376a0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_008e0a00(param_2);
  FUN_0093bca0(uVar3,uVar2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00916b10(uVar3,0x22,uVar1,param_3);
  return;
}


