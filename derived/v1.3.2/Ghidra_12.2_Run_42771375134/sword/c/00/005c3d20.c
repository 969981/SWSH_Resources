/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3d20; name: FUN_005c3d20
 */


undefined8 FUN_005c3d20(long param_1,ulong param_2)

{
  int iVar1;
  long *__ptr;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [16];
  
  FUN_005c8860(auStack_30,param_1 + 8,1);
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_005c3e30;
  }
  iVar1 = *(int *)(param_2 - 0xc);
  __ptr = (long *)(param_2 - (long)iVar1);
  param_2 = param_2 & 0xffff;
  lVar2 = *__ptr;
  plVar4 = (long *)__ptr[1];
  if (lVar2 == 0) {
    lVar2 = param_1 + param_2 * 0x28;
    puVar3 = (undefined8 *)(lVar2 + 0x48);
    if ((long *)*puVar3 == __ptr && (long *)*puVar3 != (long *)0x0) {
      if (plVar4 == (long *)0x0) {
        *puVar3 = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
      }
      else {
        *plVar4 = 0;
        *puVar3 = plVar4;
      }
      goto LAB_005c3dc8;
    }
  }
  else {
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)(param_1 + param_2 * 0x28 + 0x50);
      plVar5 = (long *)*plVar4;
      if ((plVar5 != __ptr) || (plVar5 == (long *)0x0)) goto LAB_005c3de0;
      *(undefined8 *)(lVar2 + 8) = 0;
      *plVar4 = lVar2;
    }
    else {
      *plVar4 = lVar2;
      *(long **)(lVar2 + 8) = plVar4;
    }
LAB_005c3dc8:
    lVar2 = param_1 + param_2 * 0x28;
    *__ptr = 0;
    __ptr[1] = 0;
    *(long *)(lVar2 + 0x58) = *(long *)(lVar2 + 0x58) + -1;
  }
LAB_005c3de0:
  *(long *)(&LAB_00280038 + param_1) = *(long *)(&LAB_00280038 + param_1) - __ptr[4];
  *(long *)(&LAB_00280048 + param_1) = *(long *)(&LAB_00280048 + param_1) + -1;
  *(long *)(&LAB_00280060 + param_1) = *(long *)(&LAB_00280060 + param_1) - (__ptr[4] + (long)iVar1)
  ;
  free(__ptr);
  uVar6 = 1;
LAB_005c3e30:
  FUN_005c88a0(auStack_30);
  return uVar6;
}


