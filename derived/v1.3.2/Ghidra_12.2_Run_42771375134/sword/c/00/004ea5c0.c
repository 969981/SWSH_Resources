/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea5c0; name: FUN_004ea5c0
 */


undefined8 * FUN_004ea5c0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar1) {
    uVar2 = FUN_004ea6a0(param_1,8);
    if ((uVar2 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar1) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar3 = (undefined8 *)(*param_1 + (ulong)uVar1 * 0x110);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = *param_1 + (ulong)uVar1 * 0x110;
    *(undefined8 *)(lVar5 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x58) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 0x108) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined8 *)(lVar5 + 0xb0) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0xb8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0xe0) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0xe8) = 0xffffffffffffffff;
    *(undefined1 **)(lVar5 + 0x100) = &DAT_7f7fffff00000000;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0xf0) = 0;
    *(undefined8 *)(lVar5 + 0xf8) = 0x3f800000;
    *puVar3 = 0;
  }
  return puVar3;
}


