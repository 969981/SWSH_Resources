/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005affe0; name: FUN_005affe0
 */


undefined8 FUN_005affe0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1c8) = 1;
  *(undefined4 *)(param_3 + 0x1d4) = param_1;
  *(undefined4 *)(param_3 + 0x1d8) = param_2;
  return 0;
}


