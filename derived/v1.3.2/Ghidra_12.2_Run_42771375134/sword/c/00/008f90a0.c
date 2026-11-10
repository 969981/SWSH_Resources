/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f90a0; name: FUN_008f90a0
 */


void FUN_008f90a0(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  
  uVar4 = FUN_008e1290(param_2);
  uVar7 = FUN_009a79b0(param_1,uVar4);
  if ((uVar7 & 1) == 0) {
    puVar9 = *(uint **)(param_1 + 0x88);
    if (((puVar9[0x29c] >> 0xe & 1) == 0) && (((byte)puVar9[0x29d] >> 2 & 1) == 0)) {
      if ((puVar9[0x29c] >> 0xc & 1) == 0) {
        if (*(int *)(param_1 + 0x150) == 2) {
          uVar7 = FUN_008e0b50(param_2);
          if ((uVar7 & 1) == 0) {
            FUN_008e0a00(param_2);
            cVar3 = FUN_009c98b0();
            if (*(char *)(param_1 + 0x174) != cVar3) {
              return;
            }
          }
        }
        else if (1 < *puVar9) {
          return;
        }
      }
      uVar8 = FUN_008e1680(param_2);
      lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0xa48);
      if (lVar10 != 0) {
        uVar7 = FUN_008e5a80(param_2);
        if ((uVar7 & 1) == 0) {
          uVar6 = FUN_008e0a10(param_2);
          uVar6 = uVar6 & 1;
          bVar2 = *(byte *)(*(long *)(param_1 + 0x88) + 0xa71);
        }
        else {
          uVar6 = 2;
          bVar2 = *(byte *)(*(long *)(param_1 + 0x88) + 0xa71);
        }
        if (((bVar2 >> 4 & 1) != 0) && (sVar5 = FUN_008e1290(param_2), sVar5 == 0x37a)) {
          uVar1 = 2;
          if (*(char *)(param_2 + 0x33d) != '\x01') {
            uVar1 = uVar6;
          }
          uVar6 = uVar1;
        }
        FUN_015351d0(lVar10,uVar8,uVar6);
        return;
      }
    }
  }
  return;
}


