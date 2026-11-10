/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d710; name: FUN_0153d710
 */


uint FUN_0153d710(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x1f0);
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = FUN_0150e040(lVar2);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar1 & 1;
}


