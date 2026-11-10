/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e0590; name: FUN_007e0590
 */


void FUN_007e0590(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  FUN_008013e0(param_1 + 0x24);
  puVar1 = (void *)param_1[0x21];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[0x1b];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[0x16];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[0x11];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[0xf];
  param_1[0xf] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[0xc];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[7];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


