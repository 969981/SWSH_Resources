/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527b70; name: FUN_00527b70
 */


undefined8 FUN_00527b70(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xc0c) = param_1;
  *(undefined4 *)(param_3 + 0xc10) = param_2;
  return 0;
}


