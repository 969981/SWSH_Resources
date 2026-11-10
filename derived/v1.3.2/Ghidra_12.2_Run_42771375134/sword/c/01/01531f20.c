/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01531f20; name: FUN_01531f20
 */


void FUN_01531f20(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x318) = *param_2;
  *(undefined1 *)(param_1 + 0x31c) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x31d) = *(undefined1 *)((long)param_2 + 5);
  *(undefined1 *)(param_1 + 0x31e) = *(undefined1 *)((long)param_2 + 6);
  FUN_0077d7e0(param_1 + 800,param_2 + 2,0xd);
  return;
}


