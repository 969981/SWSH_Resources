/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b130; name: FUN_0093b130
 */


void FUN_0093b130(long param_1,long param_2,short param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar3 = *(byte *)(param_1 + 0x4c);
  uVar4 = (ulong)bVar3;
  if (param_2 != 0) {
    if (4 < bVar3) goto joined_r0x0093b1c0;
    if (bVar3 != 0) {
      uVar5 = 0;
      do {
        if (*(long *)(param_1 + uVar5 * 8) == param_2) goto LAB_0093b1b4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    *(long *)(param_1 + uVar4 * 8) = param_2;
    *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) + 0x3c) = 0;
    *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) * 2 + 0x28) = 0;
    *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) * 2 + 0x32) = 0;
    uVar1 = *(byte *)(param_1 + 0x4c) + 1;
    uVar4 = (ulong)uVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar1;
    if ((uint)*(byte *)(param_1 + 0x4d) < (uVar1 & 0xff)) {
      *(char *)(param_1 + 0x4d) = (char)uVar1;
      goto joined_r0x0093b1c0;
    }
  }
LAB_0093b1b4:
  if ((uVar4 & 0xff) == 0) {
    return;
  }
joined_r0x0093b1c0:
  if ((param_4 & 1) == 0) {
    uVar5 = 0;
    do {
      while (*(long *)(param_1 + uVar5 * 8) == param_2) {
        lVar2 = param_1 + uVar5 * 2;
        *(short *)(lVar2 + 0x28) = *(short *)(lVar2 + 0x28) + param_3;
        *(undefined1 *)(param_1 + uVar5 + 0x3c) = 1;
        uVar4 = (ulong)*(byte *)(param_1 + 0x4c);
        uVar5 = uVar5 + 1;
        if (*(byte *)(param_1 + 0x4c) <= uVar5) {
          return;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar4 & 0xff));
  }
  else {
    uVar5 = 0;
    do {
      while (*(long *)(param_1 + uVar5 * 8) == param_2) {
        lVar2 = param_1 + uVar5 * 2;
        *(short *)(lVar2 + 0x32) = *(short *)(lVar2 + 0x32) + param_3;
        *(undefined1 *)(param_1 + uVar5 + 0x3c) = 2;
        uVar4 = (ulong)*(byte *)(param_1 + 0x4c);
        uVar5 = uVar5 + 1;
        if (*(byte *)(param_1 + 0x4c) <= uVar5) {
          return;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar4 & 0xff));
  }
  return;
}


