/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5c0f0; name: FUN_00a5c0f0
 */


uint FUN_00a5c0f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_010367c0();
  uVar1 = uVar1 ^ 1;
  if (*(long *)(param_1 + 0x5d0) == 0) {
    return uVar1 & 1;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return uVar1 & 1;
  }
  uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),param_1 + 0x5d0);
  return uVar2 & 1 & uVar1;
}


