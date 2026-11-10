/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa8b0; name: FUN_008fa8b0
 */


void FUN_008fa8b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if ((uVar1 & 1) != 0) {
    FUN_008fe5f0(*(undefined8 *)(param_1 + 0x198));
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
  if ((uVar1 & 1) != 0) {
    FUN_008fe5f0(*(undefined8 *)(param_1 + 0x1a0));
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
  if ((uVar1 & 1) != 0) {
    FUN_008fe5f0(*(undefined8 *)(param_1 + 0x1a8));
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
  if ((uVar1 & 1) != 0) {
    FUN_008fe5f0(*(undefined8 *)(param_1 + 0x1b0));
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_008fe5f0(*(undefined8 *)(param_1 + 0x1b8));
  return;
}


