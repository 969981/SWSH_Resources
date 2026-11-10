/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ae460; name: FUN_008ae460
 */


void FUN_008ae460(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = iVar1;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (iVar1 == *(int *)(lVar6 + 0x20)) {
    FUN_008c9530(*(undefined8 *)(param_1 + 0x80));
    if (*(int *)(param_1 + 0xa0) == *(int *)(*(long *)(param_1 + 0x98) + 0x24)) goto LAB_008ae4cc;
  }
  else if (iVar1 == *(int *)(lVar6 + 0x24)) {
LAB_008ae4cc:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(long *)(param_1 + 0xa8) == 0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      FUN_016a6730();
      lVar6 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0xa8);
    plVar4 = *(long **)(lVar6 + 0x10);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar6 + 0x1c));
    uVar3 = FUN_008783b0();
    uVar2 = FUN_008783c0(uVar5);
    uVar3 = FUN_014b3460(uVar3,uVar2,0,0);
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return;
  }
  return;
}


