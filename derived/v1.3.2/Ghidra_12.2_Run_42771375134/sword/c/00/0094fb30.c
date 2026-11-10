/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094fb30; name: FUN_0094fb30
 */


uint FUN_0094fb30(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (((param_2 != 0) && (uVar2 = FUN_008e0b50(param_2), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_008e0b50(param_3), (uVar2 & 1) != 0)) {
    FUN_008e0b60(param_3);
    FUN_008e5ed0();
    uVar2 = FUN_0093db50();
    if ((uVar2 & 1) != 0) {
      FUN_008e0b60(param_3);
      FUN_008e5ed0();
      uVar1 = FUN_0093db80();
      return ~uVar1 & 1;
    }
  }
  return 0;
}


