/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005555c0; name: FUN_005555c0
 */


undefined8 FUN_005555c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x1b0) = param_1;
  *(undefined4 *)(param_4 + 0x1c8) = param_2;
  *(undefined4 *)(param_4 + 0x1b4) = param_3;
  return 0;
}


