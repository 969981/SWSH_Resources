/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df840; name: FUN_001df840
 */


undefined8 FUN_001df840(long param_1)

{
  undefined8 uVar1;
  
  if (1 < (*(uint *)(param_1 + 0x28) >> 0x1e) - 1) {
    return 0;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_001cc920();
  }
  return uVar1;
}


