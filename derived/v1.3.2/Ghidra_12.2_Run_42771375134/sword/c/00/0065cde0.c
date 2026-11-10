/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065cde0; name: FUN_0065cde0
 */


undefined8
FUN_0065cde0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = param_5;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  FUN_0065ce20(param_1,3,0,0);
  return 1;
}


