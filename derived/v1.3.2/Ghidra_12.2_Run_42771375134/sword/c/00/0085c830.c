/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085c830; name: FUN_0085c830
 */


void FUN_0085c830(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_027172f8 + 0x10);
  puVar1 = PTR_DAT_02716d10;
  pbVar4 = *(byte **)PTR_DAT_02716d10;
  pbVar5 = (byte *)param_1[9];
  if (pbVar5 != pbVar4 && pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 1) != 0) {
      operator_delete(*(void **)(pbVar5 + 0x10));
    }
    operator_delete(pbVar5);
    pbVar4 = *(byte **)puVar1;
  }
  pbVar5 = (byte *)param_1[10];
  param_1[9] = 0;
  if (pbVar5 != pbVar4 && pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 1) != 0) {
      operator_delete(*(void **)(pbVar5 + 0x10));
    }
    operator_delete(pbVar5);
  }
  puVar2 = (uint *)param_1[0xd];
  param_1[10] = 0;
  if ((puVar2 != (uint *)0x0) && (param_1[0xb] == 0)) {
    uVar6 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        pbVar4 = *(byte **)puVar2;
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          operator_delete(pbVar4);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar2 = (uint *)param_1[0xd];
      if (puVar2 == (uint *)0x0) goto LAB_0085c914;
    }
    operator_delete__(puVar2);
  }
LAB_0085c914:
  plVar3 = (long *)param_1[7];
  param_1[0xd] = 0;
  if ((plVar3 == (long *)0x0) || (*plVar3 != 0)) {
    plVar3 = (long *)param_1[4];
  }
  else {
    operator_delete__(plVar3);
    plVar3 = (long *)param_1[4];
  }
  if ((plVar3 == (long *)0x0) || (*plVar3 != 0)) {
    uVar6 = param_1[1];
  }
  else {
    operator_delete__(plVar3);
    uVar6 = param_1[1];
  }
  if ((((uVar6 & 1) != 0) && (plVar3 = (long *)(uVar6 & 0xfffffffffffffffe), plVar3 != (long *)0x0))
     && (plVar3[1] == 0)) {
    if (*plVar3 != 0) {
      FUN_0080f500(plVar3);
    }
    operator_delete(plVar3);
  }
  param_1[1] = 0;
  return;
}


