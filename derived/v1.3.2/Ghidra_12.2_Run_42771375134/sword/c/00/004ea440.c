/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea440; name: FUN_004ea440
 */


long FUN_004ea440(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *__dest;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *__src;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar1) {
    uVar2 = FUN_004ea6a0(param_1,8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  __dest = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x110);
  if (__dest != (undefined8 *)0x0) {
    lVar4 = lVar4 + (ulong)uVar1 * 0x110;
    *(undefined8 *)(lVar4 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x58) = 0xffffffffffffffff;
    *(undefined4 *)(lVar4 + 0x108) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xb8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xe0) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xe8) = 0xffffffffffffffff;
    *(undefined1 **)(lVar4 + 0x100) = &DAT_7f7fffff00000000;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xf0) = 0;
    *(undefined8 *)(lVar4 + 0xf8) = 0x3f800000;
    *__dest = 0;
    lVar4 = *param_1;
  }
  puVar5 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x110);
  uVar2 = (ulong)param_2;
  if (puVar5 < __dest) {
    do {
      __src = __dest + -0x22;
      memcpy(__dest,__src,0x10c);
      lVar4 = *param_1;
      puVar5 = (undefined8 *)(lVar4 + uVar2 * 0x110);
      __dest = __src;
    } while (puVar5 < __src);
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = lVar4 + uVar2 * 0x110;
    *(undefined8 *)(lVar4 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x58) = 0xffffffffffffffff;
    *(undefined4 *)(lVar4 + 0x108) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xb8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xe0) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xe8) = 0xffffffffffffffff;
    *(undefined1 **)(lVar4 + 0x100) = &DAT_7f7fffff00000000;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0x3f800000;
    *(undefined8 *)(lVar4 + 0xf0) = 0;
    *(undefined8 *)(lVar4 + 0xf8) = 0x3f800000;
    *puVar5 = 0;
    lVar4 = *param_1;
  }
  return lVar4 + uVar2 * 0x110;
}


