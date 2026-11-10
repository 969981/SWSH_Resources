/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee2960; name: FUN_00ee2960
 */


undefined8 FUN_00ee2960(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_00ef06a0(param_2,param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x68) = 1;
    return 0;
  }
  return 1;
}


