/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f47ae0; name: FUN_00f47ae0
 */


undefined8 FUN_00f47ae0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01029540(*(undefined8 *)(param_1 + 0x60));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_01029540(*(undefined8 *)(param_1 + 0x68)), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x70));
  return uVar2;
}


