/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faaf90; name: FUN_00faaf90
 */


void FUN_00faaf90(long param_1)

{
  undefined8 uVar1;
  
  FUN_00faafe0();
  FUN_01679940(*(undefined8 *)(param_1 + 0x68));
  uVar1 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  FUN_016d2270(*(undefined8 *)(param_1 + 0x198),uVar1);
  FUN_016d2170(*(undefined8 *)(param_1 + 0x198));
  FUN_00fab0f0(param_1);
  return;
}


