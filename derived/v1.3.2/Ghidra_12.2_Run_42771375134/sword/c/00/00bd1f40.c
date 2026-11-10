/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1f40; name: FUN_00bd1f40
 */


void FUN_00bd1f40(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((*(int *)(param_1 + 0x3008) != 2) &&
     ((*(uint *)(param_1 + 0x300c) >> 0x14 & 0x3f) * (*(uint *)(param_1 + 0x300c) >> 0x1a) != 0)) {
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
      do {
        FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),
                     param_1 + 0x68 + (ulong)*(byte *)(param_1 + 0x2d86 + uVar4) * 0x78 + 0x40);
        FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
                     param_1 + 0x68 + (ulong)*(byte *)(param_1 + 0x2d86 + uVar4) * 0x78 + 0x48);
        uVar4 = uVar4 + 1;
      } while (uVar4 < ((ulong)(*(uint *)(param_1 + 0x300c) >> 0x14) & 0x3f) *
                       (ulong)(*(uint *)(param_1 + 0x300c) >> 0x1a));
    }
    else {
      uVar4 = 0;
      lVar2 = param_1 + 0x2d86;
      do {
        lVar1 = param_1 + 0x68;
        FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar2 + uVar4) * 0x78 + 0x40);
        FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar2 + uVar4) * 0x78 + 0x48);
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        lVar1 = lVar1 + (ulong)*(byte *)(lVar2 + uVar4) * 0x78 + 0x48;
        FUN_0167bf30(uVar3,lVar1);
        FUN_0167bdb0(uVar3,lVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < ((ulong)(*(uint *)(param_1 + 0x300c) >> 0x14) & 0x3f) *
                       (ulong)(*(uint *)(param_1 + 0x300c) >> 0x1a));
    }
  }
  return;
}


