/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004892c0; name: FUN_004892c0
 */


/* WARNING: Removing unreachable block (ram,0x00489314) */

void FUN_004892c0(long param_1,uint param_2,uint *param_3,ulong param_4)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  
  FUN_004b1d90();
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar3 = 0;
      lVar4 = 0;
    }
    else {
      uVar3 = 0;
      lVar4 = 0;
      puVar5 = param_3;
      do {
        uVar3 = 1L << ((ulong)*puVar5 & 0x3f) | uVar3;
        *(ulong *)(lVar2 + 8) = uVar3;
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 6;
        lVar4 = lVar4 + 2;
        uVar3 = 1L << ((ulong)*puVar1 & 0x3f) | uVar3;
        *(ulong *)(lVar2 + 8) = uVar3;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar4);
      if ((param_2 & 1) == 0) goto LAB_0048937c;
    }
    *(ulong *)(lVar2 + 8) = 1L << ((ulong)param_3[lVar4 * 3] & 0x3f) | uVar3;
  }
LAB_0048937c:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_004b2040(param_1);
  return;
}


