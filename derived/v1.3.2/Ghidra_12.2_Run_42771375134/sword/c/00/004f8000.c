/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8000; name: FUN_004f8000
 */


void FUN_004f8000(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0x400200000;
  param_1[2] = 0x400000000001;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[5] = 0x8000;
  *(undefined4 *)(param_1 + 6) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[7] = 0;
  param_1[8] = 0x843be0000;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  return;
}


