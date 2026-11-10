/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00620520; name: FUN_00620520
 */


void FUN_00620520(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((ulong)param_1[6] < 0xffffffff) {
    uVar2 = param_1[8];
    if (uVar2 < (ulong)param_1[9]) {
      lVar4 = param_1[3] + uVar2 * 0xc + 0x1b;
      uVar3 = param_1[6] + 1;
      do {
        uVar5 = (ulong)*(byte *)(lVar4 + -0xb) << 0x18 | (ulong)*(byte *)(lVar4 + -10) << 0x10 |
                (ulong)*(byte *)(lVar4 + -9) << 8 | (ulong)*(byte *)(lVar4 + -8);
        if (uVar5 <= uVar3) {
          uVar5 = uVar3;
        }
        uVar1 = (*(uint *)(lVar4 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + -3) & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        if ((uVar5 <= ((ulong)*(byte *)(lVar4 + -7) << 0x18 | (ulong)*(byte *)(lVar4 + -6) << 0x10 |
                       (ulong)*(byte *)(lVar4 + -5) << 8 | (ulong)*(byte *)(lVar4 + -4)) &&
             uVar1 != 0) && (uVar1 < *(uint *)(*param_1 + 0x20))) {
          param_1[6] = uVar5;
          *(uint *)(param_1 + 7) = uVar1;
          param_1[8] = uVar2;
          return;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0xc;
        uVar3 = uVar5;
      } while (uVar2 < (ulong)param_1[9]);
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


