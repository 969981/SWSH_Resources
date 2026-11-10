/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488cf0; name: FUN_00488cf0
 */


long FUN_00488cf0(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *__src;
  undefined8 *__dest;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar1) {
    uVar2 = FUN_00488e20(param_1,1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar1) {
    return 0;
  }
  lVar4 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  __dest = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x40);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (__dest != (undefined8 *)0x0) {
    lVar4 = lVar4 + (ulong)uVar1 * 0x40;
    *__dest = 0;
    *(undefined4 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined1 *)(lVar4 + 0x18) = 0xff;
    *(undefined1 *)(lVar4 + 0x20) = 0xff;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    lVar4 = *param_1;
  }
  uVar2 = (ulong)param_2;
  puVar5 = (undefined8 *)(lVar4 + uVar2 * 0x40);
  if (puVar5 < __dest) {
    do {
      __src = __dest + -8;
      memcpy(__dest,__src,0x30);
      __dest[6] = __dest[-2];
      __dest[7] = __dest[-1];
      lVar4 = *param_1;
      puVar5 = (undefined8 *)(lVar4 + uVar2 * 0x40);
      __dest = __src;
    } while (puVar5 < __src);
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = lVar4 + uVar2 * 0x40;
    *puVar5 = 0;
    *(undefined4 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined1 *)(lVar4 + 0x18) = 0xff;
    *(undefined1 *)(lVar4 + 0x20) = 0xff;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    lVar4 = *param_1;
  }
  return lVar4 + uVar2 * 0x40;
}


