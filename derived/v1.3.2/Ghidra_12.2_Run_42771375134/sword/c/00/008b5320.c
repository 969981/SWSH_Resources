/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5320; name: FUN_008b5320
 */


void FUN_008b5320(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar1 + 1;
  if (iVar1 != 0x3b) {
    if (iVar1 == 0x1c) {
      FUN_008c9530(*(undefined8 *)(param_1 + 0x80));
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_008b53a8;
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00897d00();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar7 + -10;
        goto LAB_008b53a8;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_008b53a8:
  FUN_008a6a20(&local_28,puVar7,4);
  if (local_28 != 0) {
    FUN_016a6730();
  }
  plVar4 = *(long **)(puVar7[0x15] + 0x10);
  uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar7[0x15] + 0x1c));
  uVar3 = FUN_008783b0();
  uVar2 = FUN_008783c0(uVar6);
  uVar3 = FUN_014b3460(uVar3,uVar2,0,0);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = 5;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


