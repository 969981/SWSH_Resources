/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01182040; name: FUN_01182040
 */


void FUN_01182040(long param_1)

{
  *(undefined4 *)(param_1 + 0xbd0) = 0xb4;
  FUN_012ae3d0(param_1 + 0xbc0,180000);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xbd0);
  *(undefined4 *)(param_1 + 0xbd4) = 0;
  *(undefined1 *)(param_1 + 0xbd8) = 1;
  return;
}


