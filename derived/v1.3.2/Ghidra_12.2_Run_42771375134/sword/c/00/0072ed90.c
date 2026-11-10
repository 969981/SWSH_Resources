/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ed90; name: FUN_0072ed90
 */


void FUN_0072ed90(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 7) >> 2 & 1) == 0) {
    plVar1 = (long *)*param_1;
    plVar2 = (long *)param_1[1];
    if (plVar1 != plVar2) {
      uVar4 = (ulong)(param_2 & 0xff) << 0x25;
      uVar5 = (long)plVar2 + (-8 - (long)plVar1);
      plVar3 = plVar1;
      if (((uint)uVar5 >> 3 & 1) == 0) {
        plVar3 = plVar1 + 1;
        *(ulong *)(*plVar1 + 0xa0) = *(ulong *)(*plVar1 + 0xa0) & 0xffffe01fffffffff | uVar4;
      }
      if (7 < uVar5) {
        do {
          *(ulong *)(*plVar3 + 0xa0) = *(ulong *)(*plVar3 + 0xa0) & 0xffffe01fffffffff | uVar4;
          plVar1 = plVar3 + 1;
          plVar3 = plVar3 + 2;
          *(ulong *)(*plVar1 + 0xa0) = *(ulong *)(*plVar1 + 0xa0) & 0xffffe01fffffffff | uVar4;
        } while (plVar3 != plVar2);
      }
    }
  }
  return;
}


