/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cb820; name: FUN_005cb820
 */


undefined8 FUN_005cb820(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    *(long *)(param_1 + 0x68) = param_2;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x70) + 0x10) = param_2;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x70);
  }
  *(long *)(param_1 + 0x70) = param_2;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  return 1;
}


