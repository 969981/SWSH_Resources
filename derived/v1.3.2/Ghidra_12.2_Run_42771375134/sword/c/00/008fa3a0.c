/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa3a0; name: FUN_008fa3a0
 */


void FUN_008fa3a0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((**(uint **)(param_1 + 0x88) & 0xfffffffe) == 2) {
    return;
  }
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
  uVar2 = FUN_008df3f0(uVar2,uVar1);
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
  uVar3 = FUN_008df3f0(uVar3,uVar1);
  uVar2 = FUN_008e1670(uVar2);
  uVar3 = FUN_008e1670(uVar3);
  FUN_014a9b70(uVar2,0);
  FUN_014a9b70(uVar3,0);
  return;
}


