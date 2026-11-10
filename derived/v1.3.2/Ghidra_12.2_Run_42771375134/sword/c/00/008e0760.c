/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e0760; name: FUN_008e0760
 */


char FUN_008e0760(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  uVar2 = FUN_0087f070(param_2);
  if ((param_3 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x2cf) = 0;
    *(undefined1 *)(param_1 + 0x2d1) = 0;
    *(undefined2 *)(param_1 + 0x2eb) = 0;
    *(undefined1 *)(param_1 + 0x2ed) = 0;
    *(undefined2 *)(param_1 + 0x307) = 0;
    *(undefined1 *)(param_1 + 0x309) = 0;
    *(undefined2 *)(param_1 + 0x323) = 0;
    *(undefined1 *)(param_1 + 0x325) = 0;
  }
  iVar3 = FUN_0087b880(param_2,0);
  if (*(int *)(param_1 + 0x2c8) != iVar3) {
    *(undefined2 *)(param_1 + 0x2cf) = 0;
    *(undefined1 *)(param_1 + 0x2d1) = 0;
  }
  *(int *)(param_1 + 0x2c8) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x2cc) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0087b590(param_2,0);
    *(undefined1 *)(param_1 + 0x2cc) = uVar1;
    uVar1 = FUN_0087b620(param_2,0);
    *(undefined1 *)(param_1 + 0x2cd) = uVar1;
    uVar1 = FUN_0087b840(param_2,0);
  }
  cVar4 = iVar3 != 0;
  *(undefined1 *)(param_1 + 0x2ce) = uVar1;
  iVar3 = FUN_0087b880(param_2,1);
  if (*(int *)(param_1 + 0x2e4) != iVar3) {
    *(undefined2 *)(param_1 + 0x2eb) = 0;
    *(undefined1 *)(param_1 + 0x2ed) = 0;
  }
  *(int *)(param_1 + 0x2e4) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x2e8) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0087b590(param_2,1);
    *(undefined1 *)(param_1 + 0x2e8) = uVar1;
    uVar1 = FUN_0087b620(param_2,1);
    *(undefined1 *)(param_1 + 0x2e9) = uVar1;
    uVar1 = FUN_0087b840(param_2,1);
    cVar4 = cVar4 + '\x01';
  }
  *(undefined1 *)(param_1 + 0x2ea) = uVar1;
  iVar3 = FUN_0087b880(param_2,2);
  if (*(int *)(param_1 + 0x300) != iVar3) {
    *(undefined2 *)(param_1 + 0x307) = 0;
    *(undefined1 *)(param_1 + 0x309) = 0;
  }
  *(int *)(param_1 + 0x300) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x304) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0087b590(param_2,2);
    *(undefined1 *)(param_1 + 0x304) = uVar1;
    uVar1 = FUN_0087b620(param_2,2);
    *(undefined1 *)(param_1 + 0x305) = uVar1;
    uVar1 = FUN_0087b840(param_2,2);
    cVar4 = cVar4 + '\x01';
  }
  *(undefined1 *)(param_1 + 0x306) = uVar1;
  iVar3 = FUN_0087b880(param_2,3);
  if (*(int *)(param_1 + 0x31c) != iVar3) {
    *(undefined2 *)(param_1 + 0x323) = 0;
    *(undefined1 *)(param_1 + 0x325) = 0;
  }
  *(int *)(param_1 + 0x31c) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 800) = 0;
    *(undefined1 *)(param_1 + 0x322) = 0;
  }
  else {
    uVar1 = FUN_0087b590(param_2,3);
    *(undefined1 *)(param_1 + 800) = uVar1;
    uVar1 = FUN_0087b620(param_2,3);
    *(undefined1 *)(param_1 + 0x321) = uVar1;
    uVar1 = FUN_0087b840(param_2,3);
    cVar4 = cVar4 + '\x01';
    *(undefined1 *)(param_1 + 0x322) = uVar1;
  }
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2ec);
    *(undefined1 *)(param_1 + 0x2e0) = 1;
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e4);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
    *(undefined1 *)(param_1 + 0x2fc) = 1;
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x300);
    *(undefined1 *)(param_1 + 0x318) = 1;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x324);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x31c);
    *(undefined1 *)(param_1 + 0x334) = 1;
  }
  FUN_0087f0c0(param_2,uVar2 & 1);
  return cVar4;
}


