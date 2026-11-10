/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fd5c0; name: FUN_012fd5c0
 */


void FUN_012fd5c0(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  
  *param_1 = (long)(PTR_DAT_02727ca8 + 0x10);
  puVar2 = (uint *)param_1[0x17];
  if ((puVar2 != (uint *)0x0) && (param_1[0x15] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0x17];
      if (puVar2 == (uint *)0x0) goto LAB_012fd630;
    }
    operator_delete__(puVar2);
  }
LAB_012fd630:
  puVar2 = (uint *)param_1[0x14];
  param_1[0x17] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[0x12] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0x14];
      if (puVar2 == (uint *)0x0) goto LAB_012fd680;
    }
    operator_delete__(puVar2);
  }
LAB_012fd680:
  puVar2 = (uint *)param_1[0x11];
  param_1[0x14] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[0xf] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0x11];
      if (puVar2 == (uint *)0x0) goto LAB_012fd6d0;
    }
    operator_delete__(puVar2);
  }
LAB_012fd6d0:
  puVar2 = (uint *)param_1[0xe];
  param_1[0x11] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[0xc] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0xe];
      if (puVar2 == (uint *)0x0) goto LAB_012fd720;
    }
    operator_delete__(puVar2);
  }
LAB_012fd720:
  puVar2 = (uint *)param_1[0xb];
  param_1[0xe] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[9] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[0xb];
      if (puVar2 == (uint *)0x0) goto LAB_012fd770;
    }
    operator_delete__(puVar2);
  }
LAB_012fd770:
  puVar2 = (uint *)param_1[8];
  param_1[0xb] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[6] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[8];
      if (puVar2 == (uint *)0x0) goto LAB_012fd7c0;
    }
    operator_delete__(puVar2);
  }
LAB_012fd7c0:
  puVar2 = (uint *)param_1[5];
  param_1[8] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[3] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[5];
      if (puVar2 == (uint *)0x0) goto LAB_012fd810;
    }
    operator_delete__(puVar2);
  }
LAB_012fd810:
  param_1[5] = 0;
  if ((((param_1[1] & 1U) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_0080f500(plVar1);
    }
    operator_delete(plVar1);
  }
  param_1[1] = 0;
  return;
}


