/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e49d0; name: FUN_012e49d0
 */


uint FUN_012e49d0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x4f8) == 0) || (uVar2 = FUN_0130e360(), (uVar2 & 1) == 0)) ||
     (uVar1 = *(int *)(param_1 + 0x500) - 1, 3 < uVar1)) {
    return 0;
  }
  return 0xdU >> (ulong)(uVar1 & 0xf) & 1;
}


