/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864aa0; name: FUN_00864aa0
 */


undefined1 FUN_00864aa0(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0087f680(DAT_029f5a08,0x1a);
  iVar3 = FUN_0087f680(DAT_029f5a08,0x1b);
  iVar4 = FUN_0087f680(DAT_029f5a08,0x1c);
  uVar1 = iVar2 != iVar4;
  if (iVar2 != iVar3) {
    uVar1 = 2;
  }
  return uVar1;
}


