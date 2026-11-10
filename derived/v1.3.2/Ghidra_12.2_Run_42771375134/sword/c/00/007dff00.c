/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dff00; name: FUN_007dff00
 */


void FUN_007dff00(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  
  plVar6 = (long *)param_1[0x15];
  plVar1 = (long *)param_1[0x16];
  if (plVar6 != plVar1) {
    do {
      plVar5 = plVar6 + 1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
      }
      plVar6 = plVar5;
    } while (plVar1 != plVar5);
    plVar6 = (long *)param_1[0x15];
  }
  lVar4 = param_1[0x1b];
  param_1[0x16] = plVar6;
  if (param_1[0x1c] != lVar4) {
    uVar7 = 0;
    do {
      operator_delete(*(void **)(lVar4 + uVar7 * 8));
      lVar4 = param_1[0x1b];
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(param_1[0x1c] - lVar4 >> 3));
  }
  puVar11 = (undefined8 *)param_1[0x12];
  puVar2 = (undefined8 *)param_1[0x13];
  if (puVar11 != puVar2) {
    do {
      puVar10 = puVar11 + 1;
      pbVar8 = (byte *)*puVar11;
      if (pbVar8 != (byte *)0x0) {
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + 0x10));
        }
        operator_delete(pbVar8);
      }
      puVar11 = puVar10;
    } while (puVar2 != puVar10);
    puVar11 = (undefined8 *)param_1[0x12];
  }
  param_1[0x13] = puVar11;
  puVar11 = (undefined8 *)param_1[0x18];
  puVar2 = (undefined8 *)param_1[0x19];
  if (puVar11 != puVar2) {
    do {
      puVar10 = puVar11 + 1;
      pvVar9 = (void *)*puVar11;
      if (pvVar9 != (void *)0x0) {
        FUN_007e0590(pvVar9);
        operator_delete(pvVar9);
      }
      puVar11 = puVar10;
    } while (puVar2 != puVar10);
    puVar11 = (undefined8 *)param_1[0x18];
  }
  pvVar9 = (void *)param_1[0x34];
  param_1[0x19] = puVar11;
  if (pvVar9 != (void *)0x0) {
    param_1[0x35] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x31];
  if (pvVar9 != (void *)0x0) {
    param_1[0x32] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x2e];
  if (pvVar9 != (void *)0x0) {
    param_1[0x2f] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x2b];
  if (pvVar9 != (void *)0x0) {
    param_1[0x2c] = pvVar9;
    operator_delete(pvVar9);
  }
  FUN_007f74e0(param_1 + 0x28,param_1[0x29]);
  puVar11 = (void *)param_1[0x25];
  while (puVar11 != (void *)0x0) {
    pvVar9 = (void *)*puVar11;
    operator_delete(puVar11);
    puVar11 = pvVar9;
  }
  pvVar9 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  puVar11 = (void *)param_1[0x20];
  while (puVar11 != (void *)0x0) {
    pvVar9 = (void *)*puVar11;
    operator_delete(puVar11);
    puVar11 = pvVar9;
  }
  pvVar9 = (void *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x1b];
  if (pvVar9 != (void *)0x0) {
    param_1[0x1c] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x18];
  if (pvVar9 != (void *)0x0) {
    param_1[0x19] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x15];
  if (pvVar9 != (void *)0x0) {
    param_1[0x16] = pvVar9;
    operator_delete(pvVar9);
  }
  pvVar9 = (void *)param_1[0x12];
  if (pvVar9 != (void *)0x0) {
    param_1[0x13] = pvVar9;
    operator_delete(pvVar9);
  }
  puVar11 = (void *)param_1[0xf];
  while (puVar11 != (void *)0x0) {
    pvVar9 = (void *)*puVar11;
    operator_delete(puVar11);
    puVar11 = pvVar9;
  }
  pvVar9 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  puVar11 = (void *)param_1[10];
  while (puVar11 != (void *)0x0) {
    pvVar9 = (void *)*puVar11;
    if ((*(byte *)(puVar11 + 2) & 1) != 0) {
      operator_delete((void *)puVar11[4]);
    }
    operator_delete(puVar11);
    puVar11 = pvVar9;
  }
  pvVar9 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  puVar11 = (void *)param_1[5];
  while (puVar11 != (void *)0x0) {
    pvVar9 = (void *)*puVar11;
    if ((*(byte *)(puVar11 + 2) & 1) != 0) {
      operator_delete((void *)puVar11[4]);
    }
    operator_delete(puVar11);
    puVar11 = pvVar9;
  }
  pvVar9 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  pbVar8 = (byte *)*param_1;
  if (pbVar8 == (byte *)0x0) {
    return;
  }
  if ((byte *)param_1[1] == pbVar8) {
    pbVar3 = pbVar8;
  }
  else {
    pbVar3 = (byte *)param_1[1];
    do {
      pbVar12 = pbVar3 + -0x18;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      pbVar3 = pbVar12;
    } while (pbVar8 != pbVar12);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar8;
  operator_delete(pbVar3);
  return;
}


