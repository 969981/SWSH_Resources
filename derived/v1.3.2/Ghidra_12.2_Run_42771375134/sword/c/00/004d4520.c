/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4520; name: FUN_004d4520
 */


void FUN_004d4520(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0x11;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  uVar2 = 4;
  if (iVar1 != 0x11) {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  if (*(short *)(param_1 + 0x340) == 0) {
    if ((*(short *)(param_1 + 0x140) == 0) && (*(long *)(param_1 + 0x2c8) != 0)) {
      iVar1 = *(int *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0x2d4) = 0x11;
      uVar2 = 4;
      if (iVar1 != 0x11) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x348) = uVar2;
      *(undefined2 *)(param_1 + 0x2da) = 0;
    }
    if ((*(short *)(param_1 + 0x1c0) == 0) && (*(long *)(param_1 + 0x2e0) != 0)) {
      iVar1 = *(int *)(param_1 + 0x2ec);
      *(undefined4 *)(param_1 + 0x2ec) = 0x11;
      uVar2 = 4;
      if (iVar1 != 0x11) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x348) = uVar2;
      *(undefined2 *)(param_1 + 0x2f2) = 0;
    }
    if ((*(short *)(param_1 + 0x240) == 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
      iVar1 = *(int *)(param_1 + 0x304);
      *(undefined4 *)(param_1 + 0x304) = 0x11;
      uVar2 = 4;
      if (iVar1 != 0x11) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x348) = uVar2;
      *(undefined2 *)(param_1 + 0x30a) = 0;
    }
    if ((*(short *)(param_1 + 0x2c0) == 0) && (*(long *)(param_1 + 0x310) != 0)) {
      iVar1 = *(int *)(param_1 + 0x31c);
      *(undefined4 *)(param_1 + 0x31c) = 0x11;
      uVar2 = 4;
      if (iVar1 != 0x11) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x348) = uVar2;
      *(undefined2 *)(param_1 + 0x322) = 0;
    }
  }
  return;
}


