/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a66750; name: FUN_00a66750
 */


ulong FUN_00a66750(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar3 == 0) {
    uVar2 = FUN_0101cb00(0,param_2);
    return uVar2;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar1 = FUN_0101cb00(lVar3,param_2);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return (ulong)(uVar1 & 1);
}


