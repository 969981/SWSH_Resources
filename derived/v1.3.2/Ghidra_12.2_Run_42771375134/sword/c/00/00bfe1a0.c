/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfe1a0; name: FUN_00bfe1a0
 */


uint FUN_00bfe1a0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_010368c0(param_1,2);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_010368c0(param_1,3);
    return ~uVar1 & 1;
  }
  return 0;
}


