/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e42f0; name: FUN_008e42f0
 */


void FUN_008e42f0(long param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  
  *(undefined4 *)(param_1 + 0x358) = 0;
  FUN_008e2000();
  *(undefined1 *)(param_1 + 0x33c) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d0);
  cVar4 = *(int *)(param_1 + 0x2d4) != 0;
  if ((bool)cVar4) {
    *(undefined1 *)(param_1 + 0x33c) = 1;
  }
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2ec);
  if (*(int *)(param_1 + 0x2f0) != 0) {
    cVar4 = cVar4 + '\x01';
    *(char *)(param_1 + 0x33c) = cVar4;
  }
  *(undefined1 *)(param_1 + 0x2fc) = 1;
  *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
  if (*(int *)(param_1 + 0x30c) != 0) {
    cVar4 = cVar4 + '\x01';
    *(char *)(param_1 + 0x33c) = cVar4;
  }
  *(undefined1 *)(param_1 + 0x318) = 1;
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x324);
  if (*(int *)(param_1 + 0x328) != 0) {
    *(char *)(param_1 + 0x33c) = cVar4 + '\x01';
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
  uVar1 = *(ushort *)(param_1 + 0x87);
  *(undefined1 *)(param_1 + 0x246) = 0x1f;
  *(ushort *)(param_1 + 0x87) = uVar1 & 0xffbf;
  *(undefined1 *)(param_1 + 0x342) = 1;
  if ((*(byte *)(param_1 + 0x35d) >> 6 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x456) = 0;
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + 0xc0),0,0x165);
  }
  if ((uVar1 >> 8 & 1) == 0) {
    *(char *)(param_1 + 0x33d) = (char)(uVar1 & 0x1f);
    *(undefined2 *)(param_1 + 0x338) = *(undefined2 *)(param_1 + 0x7a);
    FUN_0087df30(*(undefined8 *)(param_1 + 0x60),uVar1 & 0x1f,0);
    return;
  }
  uVar2 = FUN_008783c0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x33d) = uVar2;
  uVar3 = FUN_0087cdb0(*(undefined8 *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x338) = uVar3;
  return;
}


