/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9f40; name: FUN_008f9f40
 */


void FUN_008f9f40(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
  uVar1 = FUN_008deea0(uVar1,param_2);
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
  uVar2 = FUN_008deea0(uVar2,param_2);
  FUN_008e22a0(uVar2,uVar1);
  return;
}


