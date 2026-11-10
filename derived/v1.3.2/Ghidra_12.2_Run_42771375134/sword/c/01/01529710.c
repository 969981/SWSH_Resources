/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01529710; name: FUN_01529710
 */


void FUN_01529710(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 < 2) && (*(char *)(param_1 + 0x110) != '\0')) {
    uVar2 = *(ushort *)(param_1 + 0x60);
    uVar3 = (uint)*(byte *)(param_1 + 0x62);
    if ((uVar2 == 999) && (*(byte *)(param_1 + 0x62) == 0x3b)) {
      if (*(char *)(param_1 + 99) == ';') {
        return;
      }
      uVar3 = 0x3b;
    }
    param_2 = *(byte *)(param_1 + 99) + param_2;
    uVar4 = param_2;
    if (0x3c < param_2) {
      uVar3 = param_2 / 0x3c + uVar3;
      uVar4 = param_2 % 0x3c;
      if (0x3b < uVar3) {
        uVar1 = uVar3 / 0x3c + (uint)uVar2;
        uVar4 = uVar3 % 0x3c;
        uVar3 = 999;
        if (uVar1 < 999) {
          uVar3 = uVar1;
        }
        uVar2 = (ushort)uVar3;
        uVar3 = 0x3b;
        if (uVar1 < 999) {
          uVar3 = uVar4;
        }
        uVar4 = 0x3b;
        if (uVar1 < 999) {
          uVar4 = param_2 % 0x3c;
        }
      }
    }
    *(ushort *)(param_1 + 0x60) = uVar2;
    *(char *)(param_1 + 0x62) = (char)uVar3;
    *(char *)(param_1 + 99) = (char)uVar4;
  }
  return;
}


