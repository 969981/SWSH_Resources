/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498840; name: FUN_00498840
 */


void FUN_00498840(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8)
        ; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3[1] == param_2) {
        lVar5 = plVar3[2];
        if (lVar5 == 0) {
          return;
        }
        if (*(uint *)(lVar5 + 0x40) < 2) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
        if (lVar4 == 0) {
          return;
        }
        FUN_0045af70(lVar4);
        FUN_004c5bc0(0);
        lVar5 = FUN_004e9f10(lVar5);
        if (lVar5 == 0) {
          return;
        }
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
        FUN_00498470(lVar5 + 0x20,lVar4 + 0xa0);
        return;
      }
    }
  }
  return;
}


