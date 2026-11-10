/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9ff0; name: FUN_008f9ff0
 */


bool FUN_008f9ff0(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  bVar2 = false;
  if (((param_2 & 0xff) != 0x1f) && ((param_3 & 0xff) != 0x1f)) {
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    uVar3 = FUN_009c98b0(param_2);
    cVar4 = FUN_008eef90(uVar1,uVar3);
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    uVar3 = FUN_009c98b0(param_3);
    cVar5 = FUN_008eef90(uVar1,uVar3);
    bVar2 = cVar4 == cVar5;
  }
  return bVar2;
}


