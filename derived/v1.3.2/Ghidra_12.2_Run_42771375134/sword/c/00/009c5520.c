/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5520; name: FUN_009c5520
 */


void FUN_009c5520(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined2 *)((long)param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  return;
}


