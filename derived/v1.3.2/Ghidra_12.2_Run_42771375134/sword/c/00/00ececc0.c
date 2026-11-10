/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ececc0; name: FUN_00ececc0
 */


ulong FUN_00ececc0(undefined4 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar3 == 0) {
    uVar2 = FUN_01539120(0,param_1);
    return uVar2;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar1 = FUN_01539120(lVar3,param_1);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return (ulong)(uVar1 & 1);
}


