/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb4b0; name: FUN_008fb4b0
 */


bool FUN_008fb4b0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x5f0));
  uVar3 = FUN_008deea0(uVar3,param_2);
  uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x610));
  uVar4 = FUN_008deea0(uVar4,param_2);
  cVar1 = FUN_008e31a0(uVar3,param_3,param_4);
  cVar2 = FUN_008e31a0(uVar4,param_3,param_4);
  return cVar2 != '\0' || cVar1 != '\0';
}


