/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f7e90; name: FUN_008f7e90
 */


void FUN_008f7e90(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931a20(param_2);
    FUN_00933680(uVar2,0);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931a20(param_2);
    FUN_00933680(uVar2,1);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931a20(param_2);
    FUN_00933680(uVar2,2);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931a20(param_2);
    FUN_00933680(uVar2,3);
  }
  uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00931a20(param_2);
    FUN_00933680(uVar2,4);
  }
  if ((*(byte *)(*(long *)(param_1 + 0x88) + 0xa73) >> 5 & 1) == 0) {
    return;
  }
  uVar2 = FUN_00931a20(param_2);
  uVar2 = FUN_009336d0(uVar2,0);
  FUN_009338a0(uVar2,*(undefined1 *)(*(long *)(param_1 + 0x88) + 0x1ae));
  return;
}


