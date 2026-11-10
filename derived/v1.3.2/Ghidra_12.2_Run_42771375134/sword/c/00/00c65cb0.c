/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c65cb0; name: FUN_00c65cb0
 */


void FUN_00c65cb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = (long *)*param_2;
  plVar4 = (long *)*param_3;
  lVar3 = *(long *)PTR_DAT_0271be40;
  *(long **)(lVar3 + 0x10) = plVar1;
  *(long *)(lVar3 + 0x20) = *plVar4;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,*plVar4,8);
  *(long *)(lVar3 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar3 + 0x18);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,*plVar4 + -0xb8,0);
  *(long *)(lVar3 + 8) = lVar2;
  return;
}


