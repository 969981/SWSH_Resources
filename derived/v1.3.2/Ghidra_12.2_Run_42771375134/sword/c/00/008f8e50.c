/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8e50; name: FUN_008f8e50
 */


void FUN_008f8e50(long param_1,uint param_2,byte *param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  
  bVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
  cVar3 = '\0';
  *param_3 = bVar1;
  if (((param_2 & 0xff) != 0) && (bVar1 != 5)) {
    cVar3 = '\0';
    do {
      param_2 = param_2 - 1;
      uVar2 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                           *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
      if (uVar2 == *param_3) {
        cVar3 = cVar3 + '\x01';
      }
    } while ((param_2 & 0xff) != 0);
  }
  *param_4 = cVar3;
  return;
}


