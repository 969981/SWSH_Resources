/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c5a40; name: FUN_010c5a40
 */


char * FUN_010c5a40(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_0114e6d0(param_1 + 8,param_2 + 8);
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x10) == lVar2) {
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
        lVar1 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 0x10) = lVar2;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
    }
    *param_1 = '\0';
  }
  else {
    FUN_010c5b70(param_1 + 8,param_2 + 8);
  }
  return param_1;
}


