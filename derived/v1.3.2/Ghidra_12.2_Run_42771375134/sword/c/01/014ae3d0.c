/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae3d0; name: FUN_014ae3d0
 */


int FUN_014ae3d0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_01538f80();
  iVar1 = 100;
  if ((uVar2 & 0xff) < 8) {
    iVar1 = uVar2 * 5 + 0x14;
  }
  return iVar1;
}


