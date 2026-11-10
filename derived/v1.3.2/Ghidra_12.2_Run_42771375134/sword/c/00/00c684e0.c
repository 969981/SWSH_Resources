/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c684e0; name: FUN_00c684e0
 */


void FUN_00c684e0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)*param_2;
  lVar3 = *(long *)(*param_3 + 0x78);
  lVar4 = *(long *)PTR_DAT_0271bf80;
  *(long **)(lVar4 + 0x1f0) = plVar1;
  *(long *)(lVar4 + 0x200) = lVar3;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,lVar3,8);
  *(long *)(lVar4 + 0x1f8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x1f0) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x1f8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar3 + -0xb8,0);
  *(long *)(lVar4 + 0x1e8) = lVar2;
  return;
}


