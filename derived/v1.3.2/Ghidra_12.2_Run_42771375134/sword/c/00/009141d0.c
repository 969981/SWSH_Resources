/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009141d0; name: FUN_009141d0
 */


int FUN_009141d0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = FUN_008e18d0(*(undefined8 *)(param_1 + uVar3 * 8));
      iVar2 = iVar2 + (uVar1 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  return iVar2;
}


