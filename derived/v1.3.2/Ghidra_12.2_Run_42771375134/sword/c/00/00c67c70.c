/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c67c70; name: FUN_00c67c70
 */


void FUN_00c67c70(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_0271bfa0;
  plVar3 = (long *)*param_2;
  lVar5 = *param_3;
  lVar6 = *(long *)PTR_DAT_0271bfa0;
  lVar4 = *(long *)(lVar5 + 0x90);
  *(long **)(lVar6 + 0x250) = plVar3;
  *(long *)(lVar6 + 0x260) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 600) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x250) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 600);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x248) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = *(long *)(lVar5 + 0x98);
  *(long **)(lVar6 + 0x270) = plVar3;
  *(long *)(lVar6 + 0x280) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x278) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x270) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x278);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x268) = lVar2;
  return;
}


