/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d010; name: FUN_0087d010
 */


void FUN_0087d010(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00877590(uVar1,uVar2,2);
  FUN_008724f0(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00872640(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00872790(*(undefined8 *)(param_1 + 0x98),1);
  FUN_0086fff0(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


