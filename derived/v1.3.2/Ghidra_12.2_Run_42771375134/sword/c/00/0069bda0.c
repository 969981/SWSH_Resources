/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069bda0; name: FUN_0069bda0
 */


ulong FUN_0069bda0(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (*(long *)(param_1 + 0x1d8) == lVar3) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      lVar3 = *(long *)(lVar3 + uVar2 * 8);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      plVar1 = (long *)FUN_006b4e80(lVar3);
      lVar6 = *plVar1;
      lVar7 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (lVar6 == lVar7) goto LAB_0069be48;
      uVar5 = (ulong)((int)uVar2 + 1);
      lVar3 = *(long *)(param_1 + 0x1d0);
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x1d8) - lVar3 >> 3));
    uVar4 = 0;
LAB_0069be48:
    uVar2 = uVar2 << 0x20;
  }
  return uVar2 | uVar4;
}


