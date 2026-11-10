/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00528f70; name: FUN_00528f70
 */


undefined8 FUN_00528f70(undefined4 param_1,undefined4 param_2,float param_3,long param_4)

{
  *(undefined1 *)(param_4 + 0x895) = 1;
  *(undefined8 *)(param_4 + 0x8b8) = 0;
  *(undefined4 *)(param_4 + 0x898) = param_1;
  if (0.0 <= param_3) {
    *(float *)(param_4 + 0x89c) = param_3;
  }
  *(undefined1 *)(param_4 + 0x895) = 1;
  *(undefined4 *)(param_4 + 0x8a4) = param_2;
  *(undefined4 *)(param_4 + 0x8a0) = 0;
  *(undefined8 *)(param_4 + 0x8a8) = 0x3f490fdb3f800000;
  return 0;
}


