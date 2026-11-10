/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e2940; name: FUN_010e2940
 */


undefined8 FUN_010e2940(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 2;
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 0:
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar2 != 0) {
      FUN_010e2e50(lVar2);
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                (*(long **)(param_1 + 0x78),lVar2,*(undefined8 *)(param_1 + 0x80),
                 *(undefined8 *)(param_1 + 0x88));
    }
    goto LAB_010e2a20;
  case 1:
    break;
  case 2:
    iVar1 = 3;
    break;
  case 3:
    iVar1 = 4;
    break;
  case 4:
    *(undefined1 *)(*(long *)(param_1 + 0x68) + 0xb8) = 1;
    lVar2 = *(long *)PTR_DAT_02724648;
    (**(code **)**(undefined8 **)(lVar2 + 8))();
    *(undefined8 *)(lVar2 + 8) = 0;
    (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
              (*(long **)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
               8);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
LAB_010e2a20:
    iVar1 = *(int *)(param_1 + 0x98) + 1;
    break;
  default:
    return 0;
  }
  *(int *)(param_1 + 0x98) = iVar1;
  return 1;
}


