/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01526350; name: FUN_01526350
 */


ulong FUN_01526350(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 == 2) {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 == 0) {
      uVar2 = FUN_0100c3b0(0,2);
      return uVar2;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = 2;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 == 0) {
      uVar2 = FUN_0100c3b0(0,1);
      return uVar2;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = 1;
  }
  uVar1 = FUN_0100c3b0(lVar4,uVar3);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return (ulong)(uVar1 & 1);
}


