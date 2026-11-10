/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00846d50; name: FUN_00846d50
 */


void FUN_00846d50(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  
  *param_1 = (long)(PTR_DAT_02717250 + 0x10);
  FUN_00846fa0();
  puVar1 = (uint *)param_1[0x17];
  if ((puVar1 != (uint *)0x0) && (param_1[0x15] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        if (*(long **)puVar1 != (long *)0x0) {
          (**(code **)(**(long **)puVar1 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[0x17];
      if (puVar1 == (uint *)0x0) goto LAB_00846dc4;
    }
    operator_delete__(puVar1);
  }
LAB_00846dc4:
  puVar1 = (uint *)param_1[0x14];
  param_1[0x17] = 0;
  if ((puVar1 != (uint *)0x0) && (param_1[0x12] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        if (*(long **)puVar1 != (long *)0x0) {
          (**(code **)(**(long **)puVar1 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[0x14];
      if (puVar1 == (uint *)0x0) goto LAB_00846e14;
    }
    operator_delete__(puVar1);
  }
LAB_00846e14:
  puVar1 = (uint *)param_1[0x11];
  param_1[0x14] = 0;
  if ((puVar1 != (uint *)0x0) && (param_1[0xf] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        if (*(long **)puVar1 != (long *)0x0) {
          (**(code **)(**(long **)puVar1 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[0x11];
      if (puVar1 == (uint *)0x0) goto LAB_00846e64;
    }
    operator_delete__(puVar1);
  }
LAB_00846e64:
  puVar1 = (uint *)param_1[0xe];
  param_1[0x11] = 0;
  if ((puVar1 != (uint *)0x0) && (param_1[0xc] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        if (*(long **)puVar1 != (long *)0x0) {
          (**(code **)(**(long **)puVar1 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[0xe];
      if (puVar1 == (uint *)0x0) goto LAB_00846eb4;
    }
    operator_delete__(puVar1);
  }
LAB_00846eb4:
  plVar2 = (long *)param_1[0xb];
  param_1[0xe] = 0;
  if ((plVar2 == (long *)0x0) || (*plVar2 != 0)) {
    plVar2 = (long *)param_1[9];
    if (plVar2 != (long *)0x0) goto LAB_00846ed0;
LAB_00846ef4:
    puVar1 = (uint *)param_1[7];
  }
  else {
    operator_delete__(plVar2);
    plVar2 = (long *)param_1[9];
    if (plVar2 == (long *)0x0) goto LAB_00846ef4;
LAB_00846ed0:
    if (*plVar2 != 0) goto LAB_00846ef4;
    operator_delete__(plVar2);
    puVar1 = (uint *)param_1[7];
  }
  if ((puVar1 != (uint *)0x0) && (param_1[5] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        pbVar4 = *(byte **)puVar1;
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          operator_delete(pbVar4);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[7];
      if (puVar1 == (uint *)0x0) goto LAB_00846f4c;
    }
    operator_delete__(puVar1);
  }
LAB_00846f4c:
  param_1[7] = 0;
  if ((((param_1[1] & 1U) != 0) &&
      (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar2 != (long *)0x0)) &&
     (plVar2[1] == 0)) {
    if (*plVar2 != 0) {
      FUN_0080f500(plVar2);
    }
    operator_delete(plVar2);
  }
  param_1[1] = 0;
  return;
}


