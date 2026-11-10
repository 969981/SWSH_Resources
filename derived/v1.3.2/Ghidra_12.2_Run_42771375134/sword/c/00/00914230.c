/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914230; name: FUN_00914230
 */


int FUN_00914230(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 < *(byte *)(param_1 + 0x30)) {
    iVar2 = 0;
    uVar3 = (ulong)param_2;
    do {
      uVar1 = FUN_008e18d0(*(undefined8 *)(param_1 + uVar3 * 8));
      iVar2 = iVar2 + (uVar1 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


