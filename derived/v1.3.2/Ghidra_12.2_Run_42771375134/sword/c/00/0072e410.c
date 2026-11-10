/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072e410; name: FUN_0072e410
 */


void FUN_0072e410(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar1 = param_2 * 3 + param_4;
  lVar4 = *(long *)(param_1 + 0x170);
  uVar7 = (ulong)(uVar1 >> 6);
  uVar9 = 1L << ((ulong)uVar1 & 0x3f);
  if ((param_3 & 1) == 0) {
    *(ulong *)(lVar4 + uVar7 * 8) = *(ulong *)(lVar4 + uVar7 * 8) & (uVar9 ^ 0xffffffffffffffff);
  }
  else {
    *(ulong *)(lVar4 + uVar7 * 8) = *(ulong *)(lVar4 + uVar7 * 8) | uVar9;
  }
  if (param_4 != 2) {
    iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x68) + 0x260) + (ulong)param_2 * 0x60 + 0x58);
    if (-1 < iVar3) {
      plVar8 = (long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x2c0) + (long)iVar3 * 0x38);
      piVar6 = (int *)*plVar8;
      piVar2 = (int *)plVar8[1];
      if (piVar6 != piVar2) {
        if ((param_3 & 1) == 0) {
          do {
            piVar5 = piVar6 + 2;
            uVar7 = (long)*piVar6 * 3 + (long)param_4;
            uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(param_1 + 0x170) + uVar9) =
                 *(ulong *)(*(long *)(param_1 + 0x170) + uVar9) &
                 (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
            piVar6 = piVar5;
          } while (piVar2 != piVar5);
        }
        else {
          do {
            piVar5 = piVar6 + 2;
            uVar7 = (long)*piVar6 * 3 + (long)param_4;
            uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(param_1 + 0x170) + uVar9) =
                 *(ulong *)(*(long *)(param_1 + 0x170) + uVar9) | 1L << (uVar7 & 0x3f);
            piVar6 = piVar5;
          } while (piVar2 != piVar5);
        }
      }
    }
  }
  return;
}


