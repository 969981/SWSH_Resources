/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d56a0; name: FUN_008d56a0
 */


undefined8 FUN_008d56a0(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 4) {
    return *(undefined8 *)(param_1 + 0x98);
  }
  uVar1 = FUN_008d56f0(param_1);
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
  uVar2 = FUN_008df7f0(uVar2,uVar1);
  return uVar2;
}


