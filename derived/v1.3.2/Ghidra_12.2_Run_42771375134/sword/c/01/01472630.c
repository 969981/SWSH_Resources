/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01472630; name: FUN_01472630
 */


void FUN_01472630(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x10));
  FUN_00878810(uVar2,0);
  return;
}


