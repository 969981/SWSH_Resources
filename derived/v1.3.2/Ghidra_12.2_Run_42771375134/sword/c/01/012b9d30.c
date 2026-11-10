/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b9d30; name: FUN_012b9d30
 */


undefined8 FUN_012b9d30(long param_1)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  
  cVar1 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if ((cVar1 == '\0') &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < DAT_01d4c158)) {
    return 7;
  }
  bVar2 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if ((bVar2 < 0x32) &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < DAT_01d4bb3c)) {
    return 7;
  }
  bVar2 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if ((bVar2 < 0x96) &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < DAT_01d4c4d4)) {
    return 7;
  }
  bVar2 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if ((0xf9 < bVar2) &&
     (fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
     fVar3 < DAT_01d4c650)) {
    return 7;
  }
  return 5;
}


