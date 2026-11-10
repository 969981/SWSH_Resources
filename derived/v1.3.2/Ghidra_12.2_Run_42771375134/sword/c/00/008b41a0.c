/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b41a0; name: FUN_008b41a0
 */


void FUN_008b41a0(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x98) = iVar1;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (iVar1 == *(int *)(lVar6 + 0x20)) {
    FUN_008c9530(*(undefined8 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0x98) == *(int *)(*(long *)(param_1 + 0x88) + 0x24)) goto LAB_008b420c;
  }
  else if (iVar1 == *(int *)(lVar6 + 0x24)) {
LAB_008b420c:
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(long *)(param_1 + 0x90) == 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      FUN_016a6730();
      lVar6 = *(long *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar6 = FUN_00897d00();
    for (; plVar4 != (long *)lVar6; plVar4 = (long *)*plVar4) {
    }
    plVar4 = *(long **)(puVar7[0xb] + 0x10);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar7[0xb] + 0x1c));
    uVar3 = FUN_008783b0();
    uVar2 = FUN_008783c0(uVar5);
    uVar3 = FUN_014b3460(uVar3,uVar2,0,0);
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    *(undefined4 *)(param_1 + 0x7c) = 4;
    return;
  }
  return;
}


