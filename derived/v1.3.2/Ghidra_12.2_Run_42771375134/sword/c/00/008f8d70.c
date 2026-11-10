/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8d70; name: FUN_008f8d70
 */


bool FUN_008f8d70(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((param_2 & 0xff) < 5) {
    bVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
    uVar4 = 0;
    if (((param_2 & 0xff) != 0) && (bVar1 != 5)) {
      uVar4 = 0;
      do {
        param_2 = param_2 - 1;
        uVar2 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                             *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
        if (uVar2 == bVar1) {
          uVar4 = uVar4 + 1;
        }
      } while ((param_2 & 0xff) != 0);
      uVar4 = uVar4 & 0xff;
    }
    if (bVar1 != 5) {
      uVar3 = FUN_008eef90(*(undefined4 *)(param_1 + 0x150));
      uVar2 = FUN_008ef010(*(undefined4 *)(param_1 + 0x150),
                           *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),uVar3);
      return uVar4 < uVar2;
    }
  }
  return false;
}


