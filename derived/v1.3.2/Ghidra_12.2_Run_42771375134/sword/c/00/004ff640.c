/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff640; name: FUN_004ff640
 */


int * FUN_004ff640(long param_1,uint param_2,long param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x300) +
                  (ulong)((-1 << (ulong)(*(int *)(param_1 + 0x318) + param_2 + 1 & 0x1f) & param_5)
                         + param_4));
  if (piVar1 != (int *)0x0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (param_3 != 0) {
    return piVar1;
  }
  if ((*(int *)(param_1 + 0x31c) - 1U <= param_2) ||
     (param_5 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x318) + param_2 + 1 & 0x1f)))) {
    FUN_004ff7b0(param_1,param_2,piVar1);
    return (int *)0x0;
  }
  piVar2 = (int *)(param_1 + (ulong)param_2 * 0x18);
  piVar5 = piVar2 + 4;
  piVar6 = *(int **)piVar5;
  piVar4 = (int *)0x0;
  if (piVar6 == (int *)0x0) {
LAB_004ff774:
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar4;
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(int **)piVar5 = piVar1;
  }
  else {
    piVar7 = piVar6;
    if (piVar6 <= piVar1) {
      do {
        piVar4 = piVar7;
        piVar7 = *(int **)piVar4;
      } while (piVar7 != (int *)0x0 && piVar7 <= piVar1);
    }
    if (piVar7 == (int *)0x0) goto LAB_004ff774;
    if ((long)piVar7 - (long)piVar1 ==
        (ulong)(uint)(1 << (ulong)(*(int *)(param_1 + 0x318) + param_2 & 0x1f))) {
      if (piVar7 != piVar6) {
        piVar5 = piVar4;
      }
      *(undefined8 *)piVar5 = *(undefined8 *)piVar7;
      puVar3 = (undefined8 *)(param_1 + (ulong)param_2 * 0x18 + 8);
      if ((int *)*puVar3 == piVar7) {
        *puVar3 = piVar4;
      }
      *piVar2 = *piVar2 + -1;
      return piVar1;
    }
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar4;
    }
    *(int **)piVar1 = piVar7;
    *(int **)piVar5 = piVar1;
    if (piVar7 != (int *)0x0) goto LAB_004ff790;
  }
  *(int **)(param_1 + (ulong)param_2 * 0x18 + 8) = piVar1;
LAB_004ff790:
  *piVar2 = *piVar2 + 1;
  return (int *)0x0;
}


