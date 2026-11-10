/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2000; name: FUN_008e2000
 */


void FUN_008e2000(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  
  if ((*(byte *)(param_1 + 0x87) >> 5 & 1) != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x298);
    uVar4 = FUN_0087b350(*(undefined8 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    FUN_008e0a20(param_1,1,1,uVar1);
    uVar2 = FUN_0087cdb0(*(undefined8 *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0x338) = uVar2;
    uVar1 = FUN_008783c0(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x33d) = uVar1;
    sVar3 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),uVar1,0x22);
    if (sVar3 == 0) {
      sVar3 = 1;
    }
    *(short *)(param_1 + 0x33a) = sVar3;
    *(undefined1 *)(param_1 + 0x33c) = 0;
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d0);
    cVar5 = *(int *)(param_1 + 0x2d4) != 0;
    if ((bool)cVar5) {
      *(undefined1 *)(param_1 + 0x33c) = 1;
    }
    *(undefined1 *)(param_1 + 0x2e0) = 1;
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e4);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2ec);
    if (*(int *)(param_1 + 0x2f0) != 0) {
      cVar5 = cVar5 + '\x01';
      *(char *)(param_1 + 0x33c) = cVar5;
    }
    *(undefined1 *)(param_1 + 0x2fc) = 1;
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
    if (*(int *)(param_1 + 0x30c) != 0) {
      cVar5 = cVar5 + '\x01';
      *(char *)(param_1 + 0x33c) = cVar5;
    }
    *(undefined1 *)(param_1 + 0x318) = 1;
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x324);
    if (*(int *)(param_1 + 0x328) != 0) {
      *(char *)(param_1 + 0x33c) = cVar5 + '\x01';
    }
    *(undefined1 *)(param_1 + 0x334) = 1;
    *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffdf;
  }
  return;
}


