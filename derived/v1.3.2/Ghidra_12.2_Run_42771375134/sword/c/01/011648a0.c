/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011648a0; name: FUN_011648a0
 */


void FUN_011648a0(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar2 + 0xf18) == '\0') {
    if (*param_2 != '\0') {
      FUN_0114e6d0(lVar2 + 0xf20,param_2 + 8);
      *(undefined1 *)(lVar2 + 0xf18) = 1;
    }
    return;
  }
  if (*param_2 != '\0') {
    FUN_010c5b70(lVar2 + 0xf20,param_2 + 8);
    return;
  }
  lVar3 = *(long *)(lVar2 + 0xf20);
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar2 + 0xf28);
    if (*(long *)(lVar2 + 0xf28) == lVar3) {
      lVar1 = lVar3;
    }
    else {
      do {
        if (*(long *)(lVar1 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -8) = 0;
        }
        if (*(long *)(lVar1 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        lVar4 = lVar1 + -0x18;
        if (*(long *)(lVar1 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar1 + -0x18) = 0;
        }
        lVar1 = lVar4;
      } while (lVar3 != lVar4);
      lVar1 = *(long *)(lVar2 + 0xf20);
    }
    *(long *)(lVar2 + 0xf28) = lVar3;
    (**(code **)(**(long **)(lVar2 + 0xf38) + 0x18))
              (*(long **)(lVar2 + 0xf38),lVar1,*(long *)(lVar2 + 0xf30) - lVar1,8);
  }
  *(undefined1 *)(lVar2 + 0xf18) = 0;
  return;
}


