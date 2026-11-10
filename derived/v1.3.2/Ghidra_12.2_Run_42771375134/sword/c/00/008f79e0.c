/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f79e0; name: FUN_008f79e0
 */


undefined4 FUN_008f79e0(long param_1,uint param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_2 = param_2 & 0xff;
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if (uVar1 == param_2) {
    if (param_3 == '\0') {
      return 0;
    }
    param_3 = param_3 + -1;
  }
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
  if (uVar1 == param_2) {
    if (param_3 == '\0') {
      return 1;
    }
    param_3 = param_3 + -1;
  }
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
  if (uVar1 == param_2) {
    if (param_3 == '\0') {
      return 2;
    }
    param_3 = param_3 + -1;
  }
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
  if (uVar1 == param_2) {
    if (param_3 == '\0') {
      return 3;
    }
    param_3 = param_3 + -1;
  }
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
  uVar2 = 4;
  if (param_3 != '\0' || uVar1 != param_2) {
    uVar2 = 5;
  }
  return uVar2;
}


