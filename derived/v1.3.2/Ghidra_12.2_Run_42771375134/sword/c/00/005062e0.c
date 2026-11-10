/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005062e0; name: FUN_005062e0
 */


undefined8 FUN_005062e0(long param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x40) = param_2;
  *(undefined2 *)(param_1 + 0x42) = param_3;
  return 0;
}


