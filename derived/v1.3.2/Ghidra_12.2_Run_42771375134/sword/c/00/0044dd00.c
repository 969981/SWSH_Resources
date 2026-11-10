/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044dd00; name: FUN_0044dd00
 */


undefined8 FUN_0044dd00(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x3d) == '\0') {
    *(undefined4 *)(param_1 + 7) = 0x4483126f;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)((long)param_1 + 0x3c) = 0x132;
    return 1;
  }
  return 2;
}


