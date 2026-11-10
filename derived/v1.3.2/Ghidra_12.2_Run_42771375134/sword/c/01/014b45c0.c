/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b45c0; name: FUN_014b45c0
 */


undefined8 FUN_014b45c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x408);
  uVar1 = FUN_008783b0(param_2);
  uVar2 = FUN_008783c0(param_2);
  FUN_00885df0(uVar3,uVar1,uVar2);
  FUN_014b3f40(param_1,param_2);
  return 1;
}


