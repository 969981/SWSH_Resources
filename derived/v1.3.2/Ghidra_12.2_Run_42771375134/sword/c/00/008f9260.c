/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9260; name: FUN_008f9260
 */


void FUN_008f9260(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  
  puVar4 = *(uint **)(param_1 + 0x88);
  if (((puVar4[0x29c] & 0x4c00) == 0) && (((byte)puVar4[0x29d] >> 2 & 1) == 0)) {
    if ((puVar4[0x29c] >> 0xc & 1) == 0) {
      if (*(int *)(param_1 + 0x150) == 2) {
        uVar3 = FUN_008e0b50(param_2);
        if ((uVar3 & 1) == 0) {
          FUN_008e0a00(param_2);
          cVar1 = FUN_009c98b0();
          if (*(char *)(param_1 + 0x174) != cVar1) {
            return;
          }
        }
      }
      else if (1 < *puVar4) {
        return;
      }
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0xa48);
    if (lVar5 != 0) {
      uVar2 = FUN_008e1290(param_2);
      FUN_01534930(lVar5,uVar2);
      return;
    }
  }
  return;
}


