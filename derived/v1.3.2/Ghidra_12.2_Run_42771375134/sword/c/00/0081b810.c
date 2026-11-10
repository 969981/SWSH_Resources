/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081b810; name: FUN_0081b810
 */


void FUN_0081b810(int *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1[1] < (int)param_2) {
    plVar6 = *(long **)(param_1 + 2);
    if (plVar6 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar6;
    }
    uVar3 = param_1[1] * 2;
    if ((int)param_2 <= (int)uVar3) {
      param_2 = uVar3;
    }
    if ((int)param_2 < 5) {
      param_2 = 4;
    }
    uVar1 = (ulong)param_2 * 4 + 8;
    if (lVar7 == 0) {
      puVar5 = operator_new__(uVar1);
      *(undefined8 **)(param_1 + 2) = puVar5;
      *puVar5 = 0;
      param_1[1] = param_2;
    }
    else {
      plVar4 = (long *)FUN_0080efb0(lVar7,0,uVar1);
      *(long **)(param_1 + 2) = plVar4;
      *plVar4 = lVar7;
      param_1[1] = param_2;
    }
    if (param_2 != 0) {
      lVar7 = *(long *)(param_1 + 2);
      uVar2 = lVar7 + uVar1;
      if (lVar7 + uVar1 <= lVar7 + 0xcU) {
        uVar2 = lVar7 + 0xcU;
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)(lVar7 + 8),0,(uVar2 - lVar7) - 5 & 0xfffffffffffffffc);
    }
    if (0 < *param_1) {
      memcpy((void *)(*(long *)(param_1 + 2) + 8),plVar6 + 1,(long)*param_1 << 2);
    }
    if ((plVar6 != (long *)0x0) && (*plVar6 == 0)) {
      operator_delete__(plVar6);
      return;
    }
  }
  return;
}


