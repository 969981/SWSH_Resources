/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484680; name: FUN_00484680
 */


void FUN_00484680(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  if (((param_2 ^ uVar1 >> 0xb) & 1) != 0) {
    *(uint *)(param_1 + 0x9c) = uVar1 & 0xfffff000 | uVar1 & 0x7ff | (param_2 & 1) << 0xb;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar2 = (undefined1)(param_2 & 1);
      *(undefined1 *)(*(long *)(param_1 + 0x70) + 0x73) = uVar2;
      plVar3 = *(long **)(param_1 + 0x70);
      if ((int)plVar3[1] != 0) {
        lVar4 = *plVar3;
        do {
          if (*(long *)(lVar4 + 8) != 0) {
            *(undefined1 *)(*(long *)(lVar4 + 8) + 0x5b) = uVar2;
            plVar3 = *(long **)(param_1 + 0x70);
          }
          lVar4 = lVar4 + 0x10;
        } while (lVar4 != *plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x10);
      }
    }
  }
  return;
}


