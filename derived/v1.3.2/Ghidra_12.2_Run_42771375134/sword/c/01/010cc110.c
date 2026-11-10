/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cc110; name: FUN_010cc110
 */


void FUN_010cc110(char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x10) == lVar4) {
        lVar1 = lVar4;
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
          lVar5 = lVar1 + -0x18;
          if (*(long *)(lVar1 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar1 + -0x18) = 0;
          }
          lVar1 = lVar5;
        } while (lVar4 != lVar5);
        lVar1 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 0x10) = lVar4;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
    }
    *param_1 = '\0';
  }
  else {
    plVar3 = (long *)(param_1 + 8);
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x10) == lVar4) {
        lVar1 = lVar4;
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
          lVar5 = lVar1 + -0x18;
          if (*(long *)(lVar1 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar1 + -0x18) = 0;
          }
          lVar1 = lVar5;
        } while (lVar4 != lVar5);
        lVar1 = *plVar3;
      }
      *(long *)(param_1 + 0x10) = lVar4;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *plVar3 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
  }
  return;
}


