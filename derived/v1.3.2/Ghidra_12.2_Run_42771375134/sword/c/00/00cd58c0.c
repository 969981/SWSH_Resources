/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd58c0; name: FUN_00cd58c0
 */


void FUN_00cd58c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar3 + 0x18));
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xd0);
    uVar2 = FUN_0077d470(*(undefined8 *)(lVar3 + 0x18));
    *(undefined8 *)(lVar4 + 0xb8) = uVar2;
    *(undefined1 *)(lVar4 + 0xc0) = *(undefined1 *)(lVar3 + 0x24);
    *(undefined1 *)(lVar4 + 0xc1) = *(undefined1 *)(lVar3 + 0x25);
    *(undefined4 *)(lVar4 + 0xc4) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(lVar4 + 200) = *(undefined1 *)(lVar3 + 0x27);
    *(undefined4 *)(lVar4 + 0xcc) = *(undefined4 *)(lVar3 + 0x2c);
  }
  lVar3 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar3 + 0x30));
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xd0);
    uVar2 = FUN_0077d470(*(undefined8 *)(lVar3 + 0x30));
    *(undefined8 *)(lVar4 + 0xd0) = uVar2;
    *(undefined1 *)(lVar4 + 0xd8) = *(undefined1 *)(lVar3 + 0x3c);
    *(undefined1 *)(lVar4 + 0xd9) = *(undefined1 *)(lVar3 + 0x3d);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(lVar3 + 0x38);
    *(undefined1 *)(lVar4 + 0xe0) = *(undefined1 *)(lVar3 + 0x3f);
    *(undefined4 *)(lVar4 + 0xe4) = *(undefined4 *)(lVar3 + 0x44);
  }
  lVar3 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar3 + 0x48));
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xd0);
    uVar2 = FUN_0077d470(*(undefined8 *)(lVar3 + 0x48));
    *(undefined8 *)(lVar4 + 0xe8) = uVar2;
    *(undefined1 *)(lVar4 + 0xf0) = *(undefined1 *)(lVar3 + 0x54);
    *(undefined1 *)(lVar4 + 0xf1) = *(undefined1 *)(lVar3 + 0x55);
    *(undefined4 *)(lVar4 + 0xf4) = *(undefined4 *)(lVar3 + 0x50);
    *(undefined1 *)(lVar4 + 0xf8) = *(undefined1 *)(lVar3 + 0x57);
    *(undefined4 *)(lVar4 + 0xfc) = *(undefined4 *)(lVar3 + 0x5c);
  }
  lVar3 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar3 + 0x60));
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0xd0);
    uVar2 = FUN_0077d470(*(undefined8 *)(lVar3 + 0x60));
    *(undefined8 *)(lVar4 + 0x100) = uVar2;
    *(undefined1 *)(lVar4 + 0x108) = *(undefined1 *)(lVar3 + 0x6c);
    *(undefined1 *)(lVar4 + 0x109) = *(undefined1 *)(lVar3 + 0x6d);
    *(undefined4 *)(lVar4 + 0x10c) = *(undefined4 *)(lVar3 + 0x68);
    *(undefined1 *)(lVar4 + 0x110) = *(undefined1 *)(lVar3 + 0x6f);
    *(undefined4 *)(lVar4 + 0x114) = *(undefined4 *)(lVar3 + 0x74);
  }
  return;
}


