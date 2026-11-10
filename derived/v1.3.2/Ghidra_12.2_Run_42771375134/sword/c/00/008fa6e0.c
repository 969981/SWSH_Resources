/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa6e0; name: FUN_008fa6e0
 */


void FUN_008fa6e0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  FUN_008eb990(*(undefined8 *)(param_1 + 0xb8));
  FUN_008f5930(param_1,*(undefined8 *)(param_1 + 0x88));
  FUN_009316d0(*(undefined8 *)(param_1 + 0x5f0),param_1);
  FUN_009316d0(*(undefined8 *)(param_1 + 0x610),param_1);
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if ((uVar1 & 1) != 0) {
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x610),0,1);
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x5f0),0,0);
    FUN_008fe580(*(undefined8 *)(param_1 + 0x198),param_2);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
  if ((uVar1 & 1) != 0) {
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x610),1,1);
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x5f0),1,0);
    FUN_008fe580(*(undefined8 *)(param_1 + 0x1a0),param_2);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
  if ((uVar1 & 1) != 0) {
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x610),2,1);
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x5f0),2,0);
    FUN_008fe580(*(undefined8 *)(param_1 + 0x1a8),param_2);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
  if ((uVar1 & 1) != 0) {
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x610),3,1);
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x5f0),3,0);
    FUN_008fe580(*(undefined8 *)(param_1 + 0x1b0),param_2);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
  if ((uVar1 & 1) != 0) {
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x610),4,1);
    FUN_008f5bc0(param_1,*(undefined8 *)(param_1 + 0x5f0),4,0);
    FUN_008fe580(*(undefined8 *)(param_1 + 0x1b8),param_2);
  }
  FUN_0090e2b0(*(undefined8 *)(param_1 + 0x188));
  return;
}


