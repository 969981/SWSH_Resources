/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077bda0; name: FUN_0077bda0
 */


uint * FUN_0077bda0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((*(int *)(param_3 + 4) == 0) && (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0))
     && (*piVar4 != 0)) {
    uVar3 = (uint)*(byte *)(param_3 + 0x18);
    if (*(byte *)(param_3 + 0x18) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 8);
    }
    iVar6 = 0;
    iVar5 = *piVar4 + -1;
    do {
      while( true ) {
        while( true ) {
          iVar2 = iVar5 - iVar6;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar6 + (iVar2 >> 1);
          uVar1 = piVar4[(long)iVar2 * 5 + 1];
          if (uVar1 <= param_2) break;
          iVar5 = iVar2 + -1;
          if (iVar5 < iVar6) {
            return (uint *)0x0;
          }
        }
        if (param_2 <= uVar1) break;
LAB_0077bed0:
        iVar6 = iVar2 + 1;
        if (iVar5 < iVar6) {
          return (uint *)0x0;
        }
      }
      if ((uint)piVar4[(long)iVar2 * 5 + 5] <= uVar3) {
        if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
          return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
        }
        goto LAB_0077bed0;
      }
      iVar5 = iVar2 + -1;
    } while (iVar6 <= iVar5);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x20);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      uVar3 = (uint)*(byte *)(param_3 + 0x18);
      if (*(byte *)(param_3 + 0x18) != 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 8);
      }
      iVar6 = 0;
      iVar5 = *piVar4 + -1;
      do {
        while( true ) {
          while( true ) {
            iVar2 = iVar5 - iVar6;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar6 + (iVar2 >> 1);
            uVar1 = piVar4[(long)iVar2 * 5 + 1];
            if (uVar1 <= param_2) break;
            iVar5 = iVar2 + -1;
            if (iVar5 < iVar6) {
              return (uint *)0x0;
            }
          }
          if (param_2 <= uVar1) break;
LAB_0077be34:
          iVar6 = iVar2 + 1;
          if (iVar5 < iVar6) {
            return (uint *)0x0;
          }
        }
        if ((uint)piVar4[(long)iVar2 * 5 + 5] <= uVar3) {
          if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
            return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
          }
          goto LAB_0077be34;
        }
        iVar5 = iVar2 + -1;
      } while (iVar6 <= iVar5);
    }
  }
  return (uint *)0x0;
}


