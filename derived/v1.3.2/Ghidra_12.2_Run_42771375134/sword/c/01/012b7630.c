/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7630; name: FUN_012b7630
 */


undefined8 FUN_012b7630(long param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = FUN_012b65b0();
  if ((4 < iVar2) &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < DAT_01d4bec4)) {
    return 4;
  }
  bVar1 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if ((199 < bVar1) &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < 0.5)) {
    return 4;
  }
  return 0;
}


