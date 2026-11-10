/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf33c0; name: FUN_00bf33c0
 */


void FUN_00bf33c0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_00bf6af0(*(undefined8 *)(param_1 + 0xb0));
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((0x3f < uVar4 || (1L << ((ulong)uVar4 & 0x3f) & 0x8000000000040042U) == 0) && (uVar4 != 0x88))
  {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x148) + 0x58);
    if ((bVar1 & 1) == 0) {
      *(byte *)(*(long *)(param_1 + 0x148) + 0x58) = bVar1 | 1;
      FUN_01036f70(*(undefined8 *)(param_1 + 0x138));
      uVar4 = *(uint *)(param_1 + 0x68);
    }
  }
  if (uVar4 - 1 < 0x89) {
                    /* WARNING: Could not recover jumptable at 0x00bf341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0215a700 + *(int *)(&DAT_0215a700 + (ulong)(uVar4 - 1) * 4)))();
    return;
  }
  FUN_00bfa980(*(undefined8 *)(param_1 + 0xa8));
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 == 0) {
    FUN_00bf6f10(*(undefined8 *)(param_1 + 0xb8));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if ((((uVar4 < 0x40) && ((1L << ((ulong)uVar4 & 0x3f) & 0x8000000000040042U) != 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))(), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0xa4) == '\0')) {
    if (*(int *)(*(long *)(param_1 + 0x90) + 0x54) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
    FUN_0103a1f0(*(undefined8 *)(param_1 + 0xc0),uVar3);
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 - 0x37 < 8) {
    FUN_00c08b70(*(undefined8 *)(param_1 + 0xe8));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (((uVar4 - 0x42 < 0x2d) && ((1L << ((ulong)(uVar4 - 0x42) & 0x3f) & 0x1c0000400003U) != 0)) ||
     (uVar4 == 5)) {
    FUN_00bf99f0(*(undefined8 *)(param_1 + 0xe0));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x11) {
    FUN_00c10760(*(undefined8 *)(param_1 + 0x100));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 - 8 < 0x4d) {
                    /* WARNING: Could not recover jumptable at 0x00bf356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0215a924 + *(int *)(&DAT_0215a924 + (ulong)(uVar4 - 8) * 4)))();
    return;
  }
  if (8 < uVar4 - 0x2d) {
    if (uVar4 != 0x16) goto LAB_00bf3594;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x630) + 0x58) & 1) == 0) {
      FUN_00bfb280(*(long *)(param_1 + 0xf8),
                   *(long *)(param_1 + 0x90) +
                   (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x60) * 0x2c + 0x1a0);
    }
  }
  FUN_00bfb2c0(*(undefined8 *)(param_1 + 0xf8));
  uVar4 = *(uint *)(param_1 + 0x68);
LAB_00bf3594:
  if (uVar4 == 0x5e) {
    FUN_00c12920(*(undefined8 *)(param_1 + 0x118));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x5f) {
    FUN_00bffd70(*(undefined8 *)(param_1 + 0x120));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x60) {
    FUN_00c0ba00(*(undefined8 *)(param_1 + 0x128));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x61) {
    FUN_00bffd70(*(undefined8 *)(param_1 + 0x130));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if ((uVar4 & 0xfffffffe) == 100) {
    FUN_00c164c0(*(undefined8 *)(param_1 + 0xd8));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 - 0x6f < 2) {
    FUN_00bfc070(*(undefined8 *)(param_1 + 0x110));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x75) {
    FUN_00c0dde0(*(undefined8 *)(param_1 + 200));
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  if (uVar4 == 0x76) {
    FUN_00bffd70(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}


