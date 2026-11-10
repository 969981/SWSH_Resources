/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087cdc0; name: FUN_0087cdc0
 */


uint FUN_0087cdc0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = 2;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2 & 1;
  }
  return uVar1;
}


