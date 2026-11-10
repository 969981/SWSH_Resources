/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f670; name: FUN_0029f670
 */


void FUN_0029f670(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)((long)param_2 + 0x44) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}


