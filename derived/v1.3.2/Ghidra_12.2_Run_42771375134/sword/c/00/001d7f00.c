/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d7f00; name: FUN_001d7f00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001d7f00(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 0xffffff) != 0) {
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      lVar2 = FUN_001d1a00(*param_1,uVar1 >> 0x18 & 0xf);
      uVar1 = *(uint *)(param_1 + 1);
      param_1[2] = lVar2;
    }
    if ((uVar1 & 1) != 0) {
      FUN_003bac80(param_1 + 3,lVar2);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_003bacc0(param_1 + 3,lVar2 + 0x1c);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_003bad00(param_1 + 3,lVar2 + 0x38);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_003bad30(param_1 + 3,lVar2 + 0x48);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_003bad60(*(undefined4 *)(lVar2 + 0x54),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_003bad70(*(undefined4 *)(lVar2 + 0x58),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_003bad80(*(undefined4 *)(lVar2 + 0x5c),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_003bad90(*(undefined4 *)(lVar2 + 0x60),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_003bae20(*(undefined4 *)(lVar2 + 100),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_003bae10(param_1 + 3,*(undefined1 *)(lVar2 + 0x68));
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_003baeb0(*(undefined4 *)(lVar2 + 0x74),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_003baea0(param_1 + 3,*(undefined1 *)(lVar2 + 0x78));
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_003badf0(*(undefined4 *)(lVar2 + 0x6c),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_003bae00(*(undefined4 *)(lVar2 + 0x70),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_003bada0(*(undefined4 *)(lVar2 + 0x80),*(undefined4 *)(lVar2 + 0x84),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      FUN_003bae50(*(undefined4 *)(lVar2 + 0x88),*(undefined4 *)(lVar2 + 0x8c),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = uVar1 & 0xff000000;
  return;
}


