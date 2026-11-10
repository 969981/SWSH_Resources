/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7000; name: FUN_012b7000
 */


bool FUN_012b7000(float param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  return fVar1 < param_1;
}


