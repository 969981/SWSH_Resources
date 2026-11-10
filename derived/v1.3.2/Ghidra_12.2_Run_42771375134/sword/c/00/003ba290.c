/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba290; name: FUN_003ba290
 */


void FUN_003ba290(undefined8 *param_1,undefined1 param_2,undefined1 param_3,int param_4,
                 undefined1 param_5,undefined1 param_6)

{
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = param_5;
  *(undefined1 *)((long)param_1 + 0xf) = param_6;
  *(uint *)(param_1 + 1) = param_4 << 0x18 | 0xffffff;
  return;
}


