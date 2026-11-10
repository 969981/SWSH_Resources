/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6800; name: FUN_00df6800
 */


undefined8 FUN_00df6800(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0xb8) == 0) || (uVar1 = FUN_00f47ae0(), (uVar1 & 1) != 0)) {
    uVar2 = FUN_0103e0f0(*(undefined8 *)(param_1 + 0x138));
    return uVar2;
  }
  return 0;
}


