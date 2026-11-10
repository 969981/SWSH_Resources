/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524c20; name: FUN_01524c20
 */


void FUN_01524c20(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x100);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x105);
  *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)(param_1 + 0x107);
  FUN_0077d7e0((long)param_2 + 6,param_1 + 0x110,0xd);
  return;
}


