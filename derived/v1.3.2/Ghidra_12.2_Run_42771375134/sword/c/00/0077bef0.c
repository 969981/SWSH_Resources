/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077bef0; name: FUN_0077bef0
 */


ulong * FUN_0077bef0(long param_1,ulong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  if (((*param_3 == 1) && (piVar3 = *(int **)(param_1 + 0x28), piVar3 != (int *)0x0)) &&
     (*piVar3 != 0)) {
    uVar2 = (uint)*(byte *)(param_3 + 6);
    if (*(byte *)(param_3 + 6) != 0) {
      uVar2 = (uint)*(ushort *)(param_1 + 8);
    }
    iVar5 = 0;
    iVar4 = *piVar3 + -1;
    do {
      while( true ) {
        while( true ) {
          iVar1 = iVar4 - iVar5;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar5 + (iVar1 >> 1);
          uVar6 = *(ulong *)(piVar3 + (long)iVar1 * 6 + 1);
          if (uVar6 <= param_2) break;
          iVar4 = iVar1 + -1;
          if (iVar4 < iVar5) {
            return (ulong *)0x0;
          }
        }
        if (param_2 <= uVar6) break;
LAB_0077bf88:
        iVar5 = iVar1 + 1;
        if (iVar4 < iVar5) {
          return (ulong *)0x0;
        }
      }
      if ((uint)piVar3[(long)iVar1 * 6 + 6] <= uVar2) {
        if (uVar2 <= (uint)piVar3[(long)iVar1 * 6 + 6]) {
          return (ulong *)(piVar3 + (long)iVar1 * 6 + 1);
        }
        goto LAB_0077bf88;
      }
      iVar4 = iVar1 + -1;
    } while (iVar5 <= iVar4);
  }
  return (ulong *)0x0;
}


