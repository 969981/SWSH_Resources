/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004775b0; name: FUN_004775b0
 */


void FUN_004775b0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = 0xff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + 0x1c);
  bVar1 = *(byte *)(param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((long)param_2 + 9);
  if (bVar1 - 0x80 < 0x21 && (1L << ((ulong)(bVar1 - 0x80) & 0x3f) & 0x100010001U) != 0) {
    uVar2 = *(undefined1 *)((long)param_2 + 10);
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 3);
  param_1[5] = param_2[5];
  return;
}


