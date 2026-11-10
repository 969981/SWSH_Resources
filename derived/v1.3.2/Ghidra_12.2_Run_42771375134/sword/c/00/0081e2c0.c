/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e2c0; name: FUN_0081e2c0
 */


void FUN_0081e2c0(long *param_1)

{
  void *__ptr;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *__ptr_00;
  byte *pbVar3;
  
  FUN_0081e180();
  if (*param_1 != 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) {
      return;
    }
    if ((plVar1[4] == 0) || (FUN_008226e0(plVar1), plVar1[5] != 0)) goto LAB_0081e39c;
    __ptr = (void *)plVar1[4];
  }
  else {
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) {
      return;
    }
    puVar2 = (undefined8 *)plVar1[3];
    while (__ptr_00 = puVar2, puVar2 != (undefined8 *)0x0) {
      while( true ) {
        puVar2 = (undefined8 *)*__ptr_00;
        if ((*(int *)(__ptr_00 + 3) == 9) && (pbVar3 = (byte *)__ptr_00[2], pbVar3 != (byte *)0x0))
        {
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          operator_delete(pbVar3);
        }
        if (plVar1[4] == 0) break;
        __ptr_00 = puVar2;
        if (puVar2 == (undefined8 *)0x0) goto LAB_0081e35c;
      }
      free(__ptr_00);
    }
LAB_0081e35c:
    __ptr = (void *)*plVar1;
    *plVar1 = 0;
    if ((__ptr == (void *)0x0) || (plVar1[2] != 0)) goto LAB_0081e39c;
  }
  free(__ptr);
LAB_0081e39c:
  operator_delete(plVar1);
  return;
}


