/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c4830; name: FUN_010c4830
 */


void FUN_010c4830(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_1 + 0x60);
      if (*(long *)(param_1 + 0x60) == lVar2) {
        lVar1 = lVar2;
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
          lVar3 = lVar1 + -0x18;
          if (*(long *)(lVar1 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar1 + -0x18) = 0;
          }
          lVar1 = lVar3;
        } while (lVar2 != lVar3);
        lVar1 = *(long *)(param_1 + 0x58);
      }
      *(long *)(param_1 + 0x60) = lVar2;
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
                (*(long **)(param_1 + 0x70),lVar1,*(long *)(param_1 + 0x68) - lVar1,8);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    FUN_01003170(lVar2);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),lVar2,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


