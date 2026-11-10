/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007348d0; name: FUN_007348d0
 */


void FUN_007348d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0xc0);
  for (plVar2 = *(long **)(param_1 + 0xb8); plVar2 != plVar3; plVar2 = plVar2 + 2) {
    lVar6 = (long)(int)plVar2[1];
    if ((int)plVar2[1] < *(int *)((long)plVar2 + 0xc)) {
      lVar7 = lVar6 << 6;
      do {
        lVar1 = *(long *)(param_1 + 0xe8) + lVar7;
        uVar5 = (ulong)*(uint *)(lVar1 + 0x38);
        iVar4 = FUN_0072a0b0(*plVar2 + uVar5 * 0x120 + 0x90,uVar5,3,*(undefined8 *)(lVar1 + 0x10));
        if (-1 < iVar4) {
          *(int *)(*(long *)(param_1 + 0xe8) + lVar7 + 0x3c) = iVar4;
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x40;
      } while (lVar6 < *(int *)((long)plVar2 + 0xc));
    }
  }
  return;
}


