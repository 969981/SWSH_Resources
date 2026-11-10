/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01047020; name: FUN_01047020
 */


undefined8 FUN_01047020(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x9b0));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x9b8));
  return uVar2;
}


