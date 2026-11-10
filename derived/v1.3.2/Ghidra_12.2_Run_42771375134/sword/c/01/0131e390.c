/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131e390; name: FUN_0131e390
 */


void FUN_0131e390(long param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  
  if (param_2 != (int *)0x0) {
    uVar3 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
    puVar1 = (uint *)((long)param_2 + uVar3);
    uVar5 = (ulong)*puVar1;
    if (*(int *)((long)puVar1 + uVar5) == 0xd) {
      uVar2 = 0;
      lVar4 = (long)param_2 + uVar5 + uVar3 + 10;
      piVar6 = (int *)(param_1 + 0x14);
      do {
        uVar3 = (ulong)*(uint *)(lVar4 + -6);
        lVar8 = lVar4 + (uVar3 - (long)*(int *)(lVar4 + uVar3 + -6));
        if ((*(ushort *)(lVar8 + -6) < 5) || (uVar5 = (ulong)*(ushort *)(lVar8 + -2), uVar5 == 0)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar4 + uVar3 + uVar5 + -6);
        }
        piVar6[-1] = iVar7 + 1;
        uVar3 = (ulong)*(uint *)(lVar4 + -6);
        lVar8 = uVar3 - (long)*(int *)(lVar4 + uVar3 + -6);
        if ((*(ushort *)(lVar4 + lVar8 + -6) < 7) ||
           (uVar5 = (ulong)*(ushort *)(lVar4 + lVar8), uVar5 == 0)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar4 + uVar3 + uVar5 + -6);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 4;
        *piVar6 = iVar7 + 1;
        piVar6 = piVar6 + 2;
      } while (uVar2 < 0xd);
    }
  }
  return;
}


