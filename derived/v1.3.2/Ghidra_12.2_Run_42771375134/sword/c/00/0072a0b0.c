/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072a0b0; name: FUN_0072a0b0
 */


undefined8 FUN_0072a0b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_019a3dd0(*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x68));
  return uVar1;
}


