/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927910; name: FUN_00927910
 */


undefined8 FUN_00927910(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x98);
  iVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    FUN_00931930(*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_00932760();
    return uVar2;
  }
  return 0;
}


