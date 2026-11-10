/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd8e0; name: FUN_00ecd8e0
 */


void FUN_00ecd8e0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      *(undefined1 *)((long)plVar2 + 100) = 1;
      plVar2 = *(long **)(param_1 + 0x60);
    }
    switch((int)plVar2[0xd]) {
    case 0:
      *(undefined4 *)(plVar2 + 0xd) = 1;
      plVar2 = *(long **)(param_1 + 0x60);
    case 1:
      iVar1 = (**(code **)(*plVar2 + 0x38))();
      if (iVar1 == 1) {
        lVar5 = *(long *)(param_1 + 0x60);
        uVar4 = 2;
LAB_00ecd974:
        *(undefined4 *)(lVar5 + 0x68) = uVar4;
      }
      goto switchD_00ecd928_default;
    case 2:
      iVar1 = (**(code **)(*plVar2 + 0x40))();
      if (iVar1 != 1) goto switchD_00ecd928_default;
      lVar5 = *(long *)(param_1 + 0x60);
      uVar4 = 3;
      goto LAB_00ecd974;
    case 3:
      iVar1 = (**(code **)(*plVar2 + 0x48))();
      if (iVar1 != 1) goto switchD_00ecd928_default;
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_00ecd9bc;
      (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x60) = 0;
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 == 0) {
        return;
      }
      break;
    default:
      goto switchD_00ecd928_default;
    }
    goto LAB_00ecd9c4;
  }
LAB_00ecd9bc:
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 != 0) {
LAB_00ecd9c4:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar5;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  return;
switchD_00ecd928_default:
  if (*(long *)(param_1 + 0x60) != 0) {
    return;
  }
  goto LAB_00ecd9bc;
}


