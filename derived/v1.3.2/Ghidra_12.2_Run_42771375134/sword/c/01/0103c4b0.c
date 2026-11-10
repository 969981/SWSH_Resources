/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c4b0; name: FUN_0103c4b0
 */


ulong FUN_0103c4b0(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = FUN_0103c3b0();
  if (iVar1 == -1) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar4 == 0) {
    uVar3 = FUN_015392d0(0,iVar1);
    return uVar3;
  }
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar2 = FUN_015392d0(lVar4,iVar1);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return (ulong)(uVar2 & 1);
}


