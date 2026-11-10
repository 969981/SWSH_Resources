/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9a60; name: FUN_008f9a60
 */


void FUN_008f9a60(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0xaee) == '\x06') {
    uVar2 = FUN_008da740(param_2);
    uVar3 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),uVar2);
    cVar5 = '\0';
    if (((uVar2 & 0xff) != 0) && ((uVar3 & 0xff) != 5)) {
      cVar5 = '\0';
      do {
        uVar2 = uVar2 - 1;
        uVar4 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                             *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),uVar2);
        if (uVar4 == (uVar3 & 0xff)) {
          cVar5 = cVar5 + '\x01';
        }
      } while ((uVar2 & 0xff) != 0);
    }
    *(char *)(*(long *)(param_1 + 0x88) + 0xaee) = cVar5;
    uVar1 = FUN_008da760(param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 0xaef) = uVar1;
  }
  return;
}


