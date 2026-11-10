/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5590; name: FUN_009c5590
 */


void FUN_009c5590(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)(param_2 + 4);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 1) = 0x500000005;
  *(undefined8 *)(param_1 + 3) = 0x500000005;
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x22) = 0;
  param_1[0xb] = 0;
  *param_1 = uVar1;
  param_1[5] = 5;
  *(undefined2 *)((long)param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


