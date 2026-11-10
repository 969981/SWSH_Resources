/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103d3e0; name: FUN_0103d3e0
 */


uint FUN_0103d3e0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_0103c3b0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58));
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
    if (lVar3 == 0) {
      uVar2 = FUN_01539340(0,iVar1);
      uVar2 = uVar2 ^ 1;
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_01539340(lVar3,iVar1);
      uVar2 = uVar2 ^ 1;
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return uVar2 & 1;
}


