/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1b50; name: FUN_003b1b50
 */


void FUN_003b1b50(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  iVar1 = *(int *)(lVar3 + 8);
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  *(long **)(param_1 + 0x20) = param_2;
  if ((short)plVar2[1] == 0) {
    if (iVar1 != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  lVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (*(int *)(lVar3 + 8) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined8 *)(lVar3 + 8) = uVar4;
  }
  return;
}


