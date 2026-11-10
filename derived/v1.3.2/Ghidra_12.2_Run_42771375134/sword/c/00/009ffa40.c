/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ffa40; name: FUN_009ffa40
 */


undefined8 FUN_009ffa40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    return 1;
  }
  uVar2 = 0;
  while ((uVar1 = FUN_009fc280(uVar2 & 0xffffffff,0), (uVar1 & 1) == 0 ||
         (*(int *)(*(long *)(param_1 + 0x180) + uVar2 * 4 + 0x60) != 0))) {
    uVar2 = uVar2 + 1;
    if (0x382 < uVar2) {
      return 0;
    }
  }
  return 1;
}


