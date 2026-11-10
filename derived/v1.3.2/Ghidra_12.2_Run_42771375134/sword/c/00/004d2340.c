/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d2340; name: FUN_004d2340
 */


void FUN_004d2340(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  
  if ((param_3 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x140);
    *(short *)(param_1 + 0x140) = (short)(param_2 & 1);
    uVar1 = param_2 & 1 ^ (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | (byte)(uVar1 << 1);
    if ((uVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
    }
  }
  if ((param_3 >> 1 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x1c0);
    uVar1 = param_2 >> 1 & 1;
    *(short *)(param_1 + 0x1c0) = (short)uVar1;
    uVar1 = uVar1 ^ sVar2 != 0;
    *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | (byte)(uVar1 << 1);
    if ((uVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x240);
    uVar1 = param_2 >> 2 & 1;
    *(short *)(param_1 + 0x240) = (short)uVar1;
    uVar1 = uVar1 ^ sVar2 != 0;
    *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | (byte)(uVar1 << 1);
    if ((uVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x2c0);
    uVar1 = param_2 >> 3 & 1;
    *(short *)(param_1 + 0x2c0) = (short)uVar1;
    uVar1 = uVar1 ^ sVar2 != 0;
    *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | (byte)(uVar1 << 1);
    if ((uVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
    }
  }
  if ((param_3 >> 4 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x340);
    uVar1 = param_2 >> 4 & 1;
    *(short *)(param_1 + 0x340) = (short)uVar1;
    uVar1 = uVar1 ^ sVar2 != 0;
    *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | (byte)(uVar1 << 1);
    if ((uVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
    }
  }
  return;
}


