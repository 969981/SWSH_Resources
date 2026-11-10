/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec8a0; name: FUN_008ec8a0
 */


int FUN_008ec8a0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_008dd7c0(iVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    uVar2 = FUN_008e1810(param_1,iVar1);
  } while ((uVar2 & 1) == 0);
  return iVar1;
}


