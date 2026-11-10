/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ead590; name: FUN_00ead590
 */


void FUN_00ead590(long param_1)

{
  uint uVar1;
  float fVar2;
  
  if (param_1 != 0) {
    FUN_006a0e40(param_1 + 0x80);
    uVar1 = FUN_0069a910();
    if (uVar1 != 0) {
      fVar2 = (float)uVar1 * DAT_01d4c6b8;
      FUN_006a0e30(param_1 + 0x80);
      FUN_0069a850((float)uVar1 / fVar2);
      return;
    }
  }
  return;
}


