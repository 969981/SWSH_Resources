/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f34f30; name: FUN_00f34f30
 */


undefined8 FUN_00f34f30(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 2;
  switch(*(undefined4 *)(param_1 + 0x224)) {
  case 0:
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar2 = 1;
      goto switchD_00f34f60_caseD_1;
    }
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    break;
  case 1:
    goto switchD_00f34f60_caseD_1;
  case 2:
    iVar2 = 3;
    goto switchD_00f34f60_caseD_1;
  case 3:
    if (*(long *)(param_1 + 0x28) == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      lVar1 = *(long *)(param_1 + 0x138);
    }
    else {
      FUN_006e2100(*(long *)(param_1 + 0x28),param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar1 = *(long *)(param_1 + 0x138);
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    break;
  default:
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x224) + 1;
switchD_00f34f60_caseD_1:
  *(int *)(param_1 + 0x224) = iVar2;
  return 0;
}


