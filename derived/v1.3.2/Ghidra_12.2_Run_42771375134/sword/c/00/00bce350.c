/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce350; name: FUN_00bce350
 */


ulong FUN_00bce350(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar2 = FUN_00bccb30();
  if ((lVar2 == 0) || (uVar1 = FUN_008787f0(), (uVar1 & 0xffff) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar2 == 0) {
    uVar3 = FUN_015209b0(0,uVar1,1);
    return uVar3;
  }
  plVar4 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar1 = FUN_015209b0(lVar2,uVar1,1);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return (ulong)(uVar1 & 1);
}


