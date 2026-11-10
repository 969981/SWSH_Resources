/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081c2e0; name: FUN_0081c2e0
 */


void FUN_0081c2e0(int *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1[1] < param_2) {
    plVar5 = *(long **)(param_1 + 2);
    if (plVar5 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    iVar2 = param_1[1] * 2;
    if (param_2 <= iVar2) {
      param_2 = iVar2;
    }
    if (param_2 < 5) {
      param_2 = 4;
    }
    uVar7 = (ulong)(param_2 + 8);
    if (lVar6 == 0) {
      puVar4 = operator_new__(uVar7);
      *(undefined8 **)(param_1 + 2) = puVar4;
      *puVar4 = 0;
      param_1[1] = param_2;
    }
    else {
      plVar3 = (long *)FUN_0080efb0(lVar6,0,uVar7);
      *(long **)(param_1 + 2) = plVar3;
      *plVar3 = lVar6;
      param_1[1] = param_2;
    }
    if (param_2 != 0) {
      lVar6 = *(long *)(param_1 + 2);
      uVar1 = lVar6 + uVar7;
      if (lVar6 + uVar7 <= lVar6 + 9U) {
        uVar1 = lVar6 + 9U;
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)(lVar6 + 8),0,uVar1 + (-8 - lVar6));
    }
    if (0 < *param_1) {
      memcpy((void *)(*(long *)(param_1 + 2) + 8),plVar5 + 1,(long)*param_1);
    }
    if ((plVar5 != (long *)0x0) && (*plVar5 == 0)) {
      operator_delete__(plVar5);
      return;
    }
  }
  return;
}


