/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008be130; name: FUN_008be130
 */


void FUN_008be130(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x98) = iVar1;
  if (iVar1 == 0x1d) {
    FUN_008c9530(*(undefined8 *)(param_1 + 0x80));
    iVar1 = *(int *)(param_1 + 0x98);
  }
  if (iVar1 != 0x3c) {
    return;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(long *)(param_1 + 0xa0) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    FUN_016a6730();
    lVar4 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0xa8);
  plVar5 = *(long **)(lVar4 + 0x10);
  uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(lVar4 + 0x1c));
  uVar3 = FUN_008783b0();
  uVar2 = FUN_008783c0(uVar6);
  uVar3 = FUN_014b3460(uVar3,uVar2,0,0);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  return;
}


