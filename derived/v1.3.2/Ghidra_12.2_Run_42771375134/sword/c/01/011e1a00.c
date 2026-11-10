/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e1a00; name: FUN_011e1a00
 */


void FUN_011e1a00(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_02725b78 + 0x10);
  lVar2 = FUN_0153e780(auStack_38);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  param_1[1] = lVar2;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  plVar1 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar2 = param_1[1];
  }
  FUN_01533240(lVar2,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar1);
  return;
}


