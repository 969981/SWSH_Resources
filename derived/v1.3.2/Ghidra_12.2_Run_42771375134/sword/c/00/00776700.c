/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776700; name: FUN_00776700
 */


undefined8 FUN_00776700(long param_1,undefined8 param_2)

{
  int iVar1;
  
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))();
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x58))(*(long **)(param_1 + 0x80),param_2);
  if (iVar1 == 1) {
    FUN_00776770(*(undefined8 *)(param_1 + 0x20),param_2);
    return 1;
  }
  return 0;
}


