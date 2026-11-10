/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084af10; name: FUN_0084af10
 */


void FUN_0084af10(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_02717258 + 0x10);
  pbVar4 = (byte *)param_1[3];
  if (pbVar4 != *(byte **)PTR_DAT_02716d10 && pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + 0x10));
    }
    operator_delete(pbVar4);
  }
  puVar2 = PTR_DAT_02716e40;
  param_1[3] = 0;
  if ((*(long **)puVar2 != param_1) && ((long *)param_1[0x16] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  puVar3 = (uint *)param_1[0x1c];
  if ((puVar3 != (uint *)0x0) && (param_1[0x1a] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        pbVar4 = *(byte **)puVar3;
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          operator_delete(pbVar4);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0x1c];
      if (puVar3 == (uint *)0x0) goto LAB_0084afec;
    }
    operator_delete__(puVar3);
  }
LAB_0084afec:
  puVar3 = (uint *)param_1[0x19];
  param_1[0x1c] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x17] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0x19];
      if (puVar3 == (uint *)0x0) goto LAB_0084b03c;
    }
    operator_delete__(puVar3);
  }
LAB_0084b03c:
  puVar3 = (uint *)param_1[0x15];
  param_1[0x19] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x13] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0x15];
      if (puVar3 == (uint *)0x0) goto LAB_0084b08c;
    }
    operator_delete__(puVar3);
  }
LAB_0084b08c:
  puVar3 = (uint *)param_1[0x12];
  param_1[0x15] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x10] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0x12];
      if (puVar3 == (uint *)0x0) goto LAB_0084b0dc;
    }
    operator_delete__(puVar3);
  }
LAB_0084b0dc:
  puVar3 = (uint *)param_1[0xf];
  param_1[0x12] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0xd] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0xf];
      if (puVar3 == (uint *)0x0) goto LAB_0084b12c;
    }
    operator_delete__(puVar3);
  }
LAB_0084b12c:
  puVar3 = (uint *)param_1[0xc];
  param_1[0xf] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[10] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[0xc];
      if (puVar3 == (uint *)0x0) goto LAB_0084b17c;
    }
    operator_delete__(puVar3);
  }
LAB_0084b17c:
  puVar3 = (uint *)param_1[9];
  param_1[0xc] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[7] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[9];
      if (puVar3 == (uint *)0x0) goto LAB_0084b1cc;
    }
    operator_delete__(puVar3);
  }
LAB_0084b1cc:
  puVar3 = (uint *)param_1[6];
  param_1[9] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[4] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[6];
      if (puVar3 == (uint *)0x0) goto LAB_0084b21c;
    }
    operator_delete__(puVar3);
  }
LAB_0084b21c:
  param_1[6] = 0;
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


