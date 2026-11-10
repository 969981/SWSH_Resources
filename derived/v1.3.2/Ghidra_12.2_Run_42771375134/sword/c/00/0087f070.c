/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f070; name: FUN_0087f070
 */


undefined8 FUN_0087f070(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00867b80(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    FUN_00867b90(*(undefined8 *)(param_1 + 0x98));
    return 1;
  }
  return 0;
}


