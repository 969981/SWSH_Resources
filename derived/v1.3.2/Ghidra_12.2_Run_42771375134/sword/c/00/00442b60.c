/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442b60; name: FUN_00442b60
 */


undefined8 FUN_00442b60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0044a710(param_1 + 0x88);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  uVar2 = FUN_0044dd00(param_1 + 8);
  return uVar2;
}


