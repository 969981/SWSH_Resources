/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6a10; name: FUN_003c6a10
 */


void FUN_003c6a10(long param_1,byte param_2,byte param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + 0x34);
  if (uVar2 != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x28);
    plVar1 = plVar4 + uVar2;
    lVar3 = (ulong)uVar2 << 3;
    do {
      plVar6 = plVar4 + 1;
      lVar5 = *plVar4;
      if (((*(byte *)(lVar5 + 0x25) & 1) != 0) &&
         ((*(long *)(lVar5 + 0x28) == param_1 || (*(long *)(lVar5 + 0x30) == param_1)))) {
        if (lVar5 == 0) {
          return;
        }
        while( true ) {
          if (((*(byte *)(lVar5 + 0x25) & param_3) != 0) &&
             (*(byte *)(lVar5 + 0x26) = *(byte *)(lVar5 + 0x26) | param_2,
             (*(byte *)(lVar5 + 0x25) >> 4 & 1) == 0)) {
            FUN_003c6e30(lVar5);
            *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) | 0x10;
          }
          if (plVar6 == plVar1) break;
          while( true ) {
            plVar4 = plVar6 + 1;
            lVar5 = *plVar6;
            if (((*(byte *)(lVar5 + 0x25) & 1) != 0) &&
               ((*(long *)(lVar5 + 0x28) == param_1 || (*(long *)(lVar5 + 0x30) == param_1))))
            break;
            plVar6 = plVar4;
            if (plVar1 == plVar4) {
              return;
            }
          }
          plVar6 = plVar6 + 1;
          if (lVar5 == 0) {
            return;
          }
        }
        return;
      }
      lVar3 = lVar3 + -8;
      plVar4 = plVar6;
    } while (lVar3 != 0);
  }
  return;
}


