/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3e80; name: FUN_008e3e80
 */


void FUN_008e3e80(long param_1)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x358) = 0;
  FUN_008e2000();
  *(undefined1 *)(param_1 + 0x33c) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d0);
  cVar1 = *(int *)(param_1 + 0x2d4) != 0;
  if ((bool)cVar1) {
    *(undefined1 *)(param_1 + 0x33c) = 1;
  }
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2ec);
  if (*(int *)(param_1 + 0x2f0) != 0) {
    cVar1 = cVar1 + '\x01';
    *(char *)(param_1 + 0x33c) = cVar1;
  }
  *(undefined1 *)(param_1 + 0x2fc) = 1;
  *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
  if (*(int *)(param_1 + 0x30c) != 0) {
    cVar1 = cVar1 + '\x01';
    *(char *)(param_1 + 0x33c) = cVar1;
  }
  *(undefined1 *)(param_1 + 0x318) = 1;
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x324);
  if (*(int *)(param_1 + 0x328) != 0) {
    *(char *)(param_1 + 0x33c) = cVar1 + '\x01';
  }
  *(byte *)(param_1 + 0x2db) = *(byte *)(param_1 + 0x2db) & 0xf0;
  *(byte *)(param_1 + 0x2f7) = *(byte *)(param_1 + 0x2f7) & 0xf0;
  *(byte *)(param_1 + 0x313) = *(byte *)(param_1 + 0x313) & 0xf0;
  *(byte *)(param_1 + 0x307) = *(byte *)(param_1 + 0x307) & 0xf0;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(byte *)(param_1 + 0x2cf) = *(byte *)(param_1 + 0x2cf) & 0xf0;
  *(byte *)(param_1 + 0x2eb) = *(byte *)(param_1 + 0x2eb) & 0xf0;
  *(byte *)(param_1 + 0x32f) = *(byte *)(param_1 + 0x32f) & 0xf0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xf0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  *(undefined1 *)(param_1 + 0x341) = 0x12;
  *(undefined2 *)(param_1 + 0x348) = 0;
  *(undefined2 *)(param_1 + 0x365) = 0;
  *(undefined4 *)(param_1 + 0x361) = 0;
  if (*(char *)(param_1 + 0x45c) != '\x1f') {
    *(undefined1 *)(param_1 + 0x45c) = 0x1f;
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  *(undefined1 *)(param_1 + 0x246) = 0x1f;
  *(undefined1 *)(param_1 + 0x342) = 1;
  *(undefined2 *)(param_1 + 0x456) = 0;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffbf;
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0x90),0,0x195);
}


