/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f510; name: FUN_0072f510
 */


void FUN_0072f510(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_00730030(param_1[6]);
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar4 != plVar2) {
    uVar5 = (long)plVar2 + (-8 - (long)plVar4);
    uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar6 = -((ulong)uVar1 & 3);
      plVar3 = plVar4;
      do {
        plVar4 = plVar3 + 1;
        lVar6 = lVar6 + 1;
        *(undefined1 *)(*plVar3 + 0x1d8) = 1;
        plVar3 = plVar4;
      } while (lVar6 != 0);
    }
    if (0x17 < uVar5) {
      do {
        *(undefined1 *)(*plVar4 + 0x1d8) = 1;
        *(undefined1 *)(plVar4[1] + 0x1d8) = 1;
        *(undefined1 *)(plVar4[2] + 0x1d8) = 1;
        plVar3 = plVar4 + 3;
        plVar4 = plVar4 + 4;
        *(undefined1 *)(*plVar3 + 0x1d8) = 1;
      } while (plVar4 != plVar2);
    }
  }
  return;
}


