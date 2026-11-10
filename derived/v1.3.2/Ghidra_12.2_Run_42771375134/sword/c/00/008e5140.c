/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5140; name: FUN_008e5140
 */


void FUN_008e5140(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  DAT_02a4ce90 = *(undefined8 *)(param_1 + 0x2c8);
  DAT_02a4ce98 = *(undefined8 *)(param_1 + 0x2d0);
  DAT_02a4cea0 = *(undefined8 *)(param_1 + 0x2d8);
  DAT_02a4cea8 = *(undefined8 *)(param_1 + 0x2e0);
  DAT_02a4ceb0 = *(undefined8 *)(param_1 + 0x2e8);
  DAT_02a4ceb8 = *(undefined8 *)(param_1 + 0x2f0);
  DAT_02a4cec0 = *(undefined8 *)(param_1 + 0x2f8);
  DAT_02a4cec8 = *(undefined8 *)(param_1 + 0x300);
  DAT_02a4ced0 = *(undefined8 *)(param_1 + 0x308);
  DAT_02a4ced8 = *(undefined8 *)(param_1 + 0x310);
  DAT_02a4cee0 = *(undefined8 *)(param_1 + 0x318);
  DAT_02a4cee8 = *(undefined8 *)(param_1 + 800);
  DAT_02a4cef0 = *(undefined8 *)(param_1 + 0x328);
  DAT_02a4cef8 = *(undefined8 *)(param_1 + 0x330);
  uVar9 = *(undefined8 *)(param_2 + 0x2a0);
  uVar1 = *(undefined4 *)(param_2 + 0x2b0);
  bVar7 = *(byte *)(param_2 + 0x35d);
  uVar12 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  *(undefined8 *)(param_1 + 0x2a0) = uVar9;
  uVar1 = *(undefined4 *)(param_2 + 0x2b4);
  uVar5 = *(undefined2 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2ba) = *(undefined1 *)(param_2 + 0x2ba);
  *(undefined2 *)(param_1 + 0x2b8) = uVar5;
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  *(undefined2 *)(param_1 + 0x338) = *(undefined2 *)(param_2 + 0x338);
  *(undefined2 *)(param_1 + 0x33a) = *(undefined2 *)(param_2 + 0x33a);
  *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_2 + 0x33c);
  *(undefined1 *)(param_1 + 0x33d) = *(undefined1 *)(param_2 + 0x33d);
  uVar3 = *(undefined1 *)(param_1 + 0x33e);
  *(undefined1 *)(param_1 + 0x33e) = *(undefined1 *)(param_2 + 0x33e);
  *(undefined1 *)(param_1 + 0x33f) = *(undefined1 *)(param_2 + 0x33f);
  *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x341) = *(undefined1 *)(param_2 + 0x341);
  *(undefined2 *)(param_1 + 0x344) = *(undefined2 *)(param_2 + 0x344);
  *(undefined2 *)(param_1 + 0x346) = *(undefined2 *)(param_2 + 0x346);
  *(undefined2 *)(param_1 + 0x348) = *(undefined2 *)(param_2 + 0x348);
  *(undefined1 *)(param_1 + 0x34a) = *(undefined1 *)(param_2 + 0x34a);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined1 *)(param_1 + 0x453) = *(undefined1 *)(param_2 + 0x453);
  *(undefined1 *)(param_1 + 0x454) = *(undefined1 *)(param_2 + 0x454);
  uVar5 = *(undefined2 *)(param_1 + 0x456);
  *(undefined2 *)(param_1 + 0x456) = *(undefined2 *)(param_2 + 0x456);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined1 *)(param_1 + 0x45c) = *(undefined1 *)(param_2 + 0x45c);
  uVar9 = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x2d8);
  uVar10 = *(undefined8 *)(param_2 + 0x2e0);
  uVar11 = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar11;
  *(undefined8 *)(param_1 + 0x2e0) = uVar10;
  *(undefined8 *)(param_1 + 0x2d8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x2f8);
  uVar10 = *(undefined8 *)(param_2 + 0x300);
  uVar11 = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = uVar11;
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x318);
  uVar10 = *(undefined8 *)(param_2 + 800);
  uVar11 = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = uVar11;
  *(undefined8 *)(param_1 + 800) = uVar10;
  *(undefined8 *)(param_1 + 0x318) = uVar9;
  bVar4 = *(byte *)(param_1 + 0x35b);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_2 + 0x35c);
  uVar1 = *(undefined4 *)(param_2 + 0x361);
  *(undefined2 *)(param_1 + 0x365) = *(undefined2 *)(param_2 + 0x365);
  *(undefined4 *)(param_1 + 0x361) = uVar1;
  uVar9 = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = uVar9;
  memcpy((void *)(param_1 + 0x378),(void *)(param_2 + 0x378),0xd8);
  uVar6 = *(undefined2 *)(param_2 + 0x450);
  *(undefined1 *)(param_1 + 0x452) = *(undefined1 *)(param_2 + 0x452);
  *(undefined2 *)(param_1 + 0x450) = uVar6;
  *(undefined8 *)(param_1 + 0x358) = 0;
  if ((bVar4 >> 2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x35b) = 4;
  }
  *(undefined2 *)(param_1 + 0x456) = uVar5;
  uVar9 = DAT_02a4ce98;
  *(undefined8 *)(param_1 + 0x2c8) = DAT_02a4ce90;
  *(undefined8 *)(param_1 + 0x2d0) = uVar9;
  uVar11 = DAT_02a4ceb8;
  uVar10 = DAT_02a4cea8;
  uVar9 = DAT_02a4cea0;
  *(undefined8 *)(param_1 + 0x2e8) = DAT_02a4ceb0;
  *(undefined8 *)(param_1 + 0x2f0) = uVar11;
  *(undefined8 *)(param_1 + 0x2d8) = uVar9;
  *(undefined8 *)(param_1 + 0x2e0) = uVar10;
  uVar11 = DAT_02a4ced8;
  uVar10 = DAT_02a4cec8;
  uVar9 = DAT_02a4cec0;
  *(undefined8 *)(param_1 + 0x308) = DAT_02a4ced0;
  *(undefined8 *)(param_1 + 0x310) = uVar11;
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  uVar11 = DAT_02a4cef8;
  uVar10 = DAT_02a4cee8;
  uVar9 = DAT_02a4cee0;
  *(undefined8 *)(param_1 + 0x328) = DAT_02a4cef0;
  *(undefined8 *)(param_1 + 0x330) = uVar11;
  *(undefined8 *)(param_1 + 0x318) = uVar9;
  *(undefined8 *)(param_1 + 800) = uVar10;
  *(undefined1 *)(param_1 + 0x33e) = uVar3;
  if ((bVar7 >> 1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x35d) = 2;
  }
  uVar8 = FUN_008ec550(0x29);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    *(undefined1 *)(param_1 + 0x1f9) = 0;
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    *(undefined1 *)(param_1 + 0x1fa) = 0;
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    *(undefined1 *)(param_1 + 0x201) = 0;
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xa8) = uVar9;
    *(undefined1 *)(param_1 + 0x1fb) = 0;
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xb0) = uVar9;
    *(undefined1 *)(param_1 + 0x1fc) = 0;
    uVar9 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xb8) = uVar9;
    *(undefined1 *)(param_1 + 0x1fd) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d8) = uVar12;
  *(undefined1 *)(param_1 + 0x221) = 0;
  iVar2 = *(int *)(param_2 + 0x2d4);
  *(int *)(param_1 + 0x2d4) = iVar2;
  *(undefined2 *)(param_1 + 0x2db) = 0;
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  if (iVar2 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_00880a40(iVar2,0);
    if (4 < bVar7) {
      bVar7 = 5;
    }
  }
  *(byte *)(param_1 + 0x2d9) = bVar7;
  *(byte *)(param_1 + 0x2d8) = bVar7;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  iVar2 = *(int *)(param_2 + 0x2f0);
  *(int *)(param_1 + 0x2f0) = iVar2;
  *(undefined2 *)(param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  if (iVar2 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_00880a40(iVar2,0);
    if (4 < bVar7) {
      bVar7 = 5;
    }
  }
  *(byte *)(param_1 + 0x2f5) = bVar7;
  *(byte *)(param_1 + 0x2f4) = bVar7;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  iVar2 = *(int *)(param_2 + 0x30c);
  *(int *)(param_1 + 0x30c) = iVar2;
  *(undefined2 *)(param_1 + 0x313) = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  if (iVar2 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_00880a40(iVar2,0);
    if (4 < bVar7) {
      bVar7 = 5;
    }
  }
  *(byte *)(param_1 + 0x311) = bVar7;
  *(byte *)(param_1 + 0x310) = bVar7;
  *(undefined1 *)(param_1 + 0x318) = 0;
  iVar2 = *(int *)(param_2 + 0x328);
  *(int *)(param_1 + 0x328) = iVar2;
  *(undefined2 *)(param_1 + 0x32f) = 0;
  *(undefined1 *)(param_1 + 0x331) = 0;
  if (iVar2 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_00880a40(iVar2,0);
    if (4 < bVar7) {
      bVar7 = 5;
    }
  }
  *(byte *)(param_1 + 0x32d) = bVar7;
  *(byte *)(param_1 + 0x32c) = bVar7;
  *(undefined4 *)(param_1 + 0x344) = 0x27100000;
  *(undefined1 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  *(undefined1 *)(param_1 + 0x341) = 0x12;
  *(undefined2 *)(param_1 + 0x348) = 0;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) | 0x20;
  return;
}


