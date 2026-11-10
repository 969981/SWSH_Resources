/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01038270; name: FUN_01038270
 */


void FUN_01038270(long param_1,uint param_2)

{
  FUN_01679b30(*(undefined8 *)(param_1 + 0x5d0),param_2 & 1);
  if (*(long *)(param_1 + 0x5e0) != 0) {
    *(undefined1 *)(param_1 + 0x600) = 0;
    FUN_00ffcad0(param_1 + 0x100,0);
  }
  *(undefined1 *)(param_1 + 0x6f1) = 0;
  return;
}


