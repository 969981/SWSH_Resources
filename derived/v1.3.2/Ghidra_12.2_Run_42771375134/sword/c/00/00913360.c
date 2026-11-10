/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913360; name: FUN_00913360
 */


int FUN_00913360(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    cVar1 = FUN_008f94e0(uVar3 & 0xffffffff);
    if (cVar1 == param_2) {
      iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x112 + uVar3);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x1e);
  return iVar2;
}


