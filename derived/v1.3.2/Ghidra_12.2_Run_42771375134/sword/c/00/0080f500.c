/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080f500; name: FUN_0080f500
 */


void FUN_0080f500(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)*param_1;
  lVar6 = (plVar3[1] - *plVar3) * 0x10000000 >> 0x20;
  lVar5 = lVar6 + 1;
  lVar6 = lVar6 << 4;
  do {
    lVar1 = *plVar3 + lVar6;
    if (*(int *)(lVar1 + -0xc) == 4) {
      pbVar4 = *(byte **)(lVar1 + -8);
      if (pbVar4 != (byte *)0x0) {
        if (*(long *)pbVar4 != 0) {
          FUN_0080f500(pbVar4);
        }
        goto LAB_0080f57c;
      }
    }
    else if ((*(int *)(lVar1 + -0xc) == 3) &&
            (pbVar4 = *(byte **)(lVar1 + -8), pbVar4 != (byte *)0x0)) {
      if ((*pbVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + 0x10));
      }
LAB_0080f57c:
      operator_delete(pbVar4);
    }
    plVar3 = (long *)*param_1;
    lVar5 = lVar5 + -1;
    lVar6 = lVar6 + -0x10;
    if (lVar5 < 2) {
      if (plVar3 != (long *)0x0) {
        pvVar2 = (void *)*plVar3;
        if (pvVar2 != (void *)0x0) {
          plVar3[1] = (long)pvVar2;
          operator_delete(pvVar2);
        }
        operator_delete(plVar3);
      }
      *param_1 = 0;
      return;
    }
  } while( true );
}


