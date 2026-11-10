/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f96e0; name: FUN_008f96e0
 */


int FUN_008f96e0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
  iVar3 = 0;
  if (((param_2 & 0xff) != 0) && ((uVar1 & 0xff) != 5)) {
    iVar3 = 0;
    do {
      param_2 = param_2 - 1;
      uVar2 = FUN_008ee550(*(undefined4 *)(param_1 + 0x150),
                           *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
      if (uVar2 == (uVar1 & 0xff)) {
        iVar3 = iVar3 + 1;
      }
    } while ((param_2 & 0xff) != 0);
  }
  return iVar3;
}


