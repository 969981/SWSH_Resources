/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527b30; name: FUN_00527b30
 */


undefined8
FUN_00527b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,long param_6)

{
  *(undefined4 *)(param_6 + 0xc14) = 2;
  *(undefined4 *)(param_6 + 0xbe8) = param_1;
  *(undefined4 *)(param_6 + 0xc1c) = param_2;
  *(undefined4 *)(param_6 + 0xc20) = param_3;
  *(undefined4 *)(param_6 + 0xc24) = param_4;
  *(undefined4 *)(param_6 + 0xc28) = param_5;
  return 0;
}


