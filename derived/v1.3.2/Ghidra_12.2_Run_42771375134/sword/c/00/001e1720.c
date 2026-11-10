/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1720; name: FUN_001e1720
 */


void FUN_001e1720(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_48;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (uVar2 = *(uint *)(lVar5 + 0x50), uVar2 != 0)) {
    lVar5 = *(long *)(lVar5 + 0x48);
    uVar4 = 0;
    do {
      uVar1 = (int)uVar4 + 1;
      if (*(char *)(lVar5 + uVar4 * 0x10) == '\0') {
        lVar6 = *(long *)(lVar5 + uVar4 * 0x10 + 8);
        if (lVar6 == 0) {
          return;
        }
        lVar3 = FUN_001df840(lVar6);
        if (lVar3 != 0) {
          local_48 = lVar6;
          FUN_001e08f0(lVar3 + 0x25b0,&local_48);
          FUN_001ce480(lVar3 + 0x10,lVar6 + 0x20);
        }
      }
      uVar4 = (ulong)uVar1;
    } while (uVar1 < uVar2);
  }
  return;
}


