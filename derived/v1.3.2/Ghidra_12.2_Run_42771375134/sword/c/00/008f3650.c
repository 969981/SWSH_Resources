/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f3650; name: FUN_008f3650
 */


undefined8 FUN_008f3650(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x460;
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009af860(lVar1,0), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009af860(lVar1,1), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009af860(lVar1,2), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009af860(lVar1,3), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_009af860(lVar1,4), (uVar2 & 1) != 0)) {
    return 1;
  }
  return 0;
}


