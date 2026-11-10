/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb3ce0; name: FUN_00fb3ce0
 */


bool FUN_00fb3ce0(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00fb2010(param_1,param_2,0);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(**(long **)(param_1 + 0x3f8) + 0x28))(*(long **)(param_1 + 0x3f8),param_3);
  }
  return bVar1;
}


