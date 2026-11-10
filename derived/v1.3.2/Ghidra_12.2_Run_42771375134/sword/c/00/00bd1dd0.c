/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1dd0; name: FUN_00bd1dd0
 */


void FUN_00bd1dd0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(int *)(param_1 + 0x3008) != 2) &&
     ((*(uint *)(param_1 + 0x300c) >> 0x14 & 0x3f) * (*(uint *)(param_1 + 0x300c) >> 0x1a) != 0)) {
    uVar3 = 0;
    lVar2 = param_1 + 0x2d86;
    do {
      lVar1 = param_1 + 0x68;
      FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),
                   lVar1 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78 + 0x48);
      FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
                   lVar1 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78 + 0x40);
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                   lVar1 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78 + 0x18,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < ((ulong)(*(uint *)(param_1 + 0x300c) >> 0x14) & 0x3f) *
                     (ulong)(*(uint *)(param_1 + 0x300c) >> 0x1a));
  }
  return;
}


