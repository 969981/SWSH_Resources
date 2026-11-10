/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e0c80; name: FUN_008e0c80
 */


void FUN_008e0c80(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x33c) = 0;
  iVar3 = FUN_0087b880(uVar4,0);
  if (*(int *)(param_1 + 0x2c8) != iVar3) {
    *(undefined2 *)(param_1 + 0x2cf) = 0;
    *(undefined1 *)(param_1 + 0x2d1) = 0;
  }
  *(int *)(param_1 + 0x2c8) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x2cc) = 0;
    cVar1 = *(char *)(param_1 + 0x2e0);
    *(undefined1 *)(param_1 + 0x2ce) = 0;
  }
  else {
    uVar2 = FUN_0087b590(uVar4,0);
    *(undefined1 *)(param_1 + 0x2cc) = uVar2;
    uVar2 = FUN_0087b620(uVar4,0);
    *(undefined1 *)(param_1 + 0x2cd) = uVar2;
    uVar2 = FUN_0087b840(uVar4,0);
    *(char *)(param_1 + 0x33c) = *(char *)(param_1 + 0x33c) + '\x01';
    cVar1 = *(char *)(param_1 + 0x2e0);
    *(undefined1 *)(param_1 + 0x2ce) = uVar2;
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2c8);
  }
  iVar3 = FUN_0087b880(uVar4,1);
  if (*(int *)(param_1 + 0x2e4) != iVar3) {
    *(undefined2 *)(param_1 + 0x2eb) = 0;
    *(undefined1 *)(param_1 + 0x2ed) = 0;
  }
  *(int *)(param_1 + 0x2e4) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x2e8) = 0;
    cVar1 = *(char *)(param_1 + 0x2fc);
    *(undefined1 *)(param_1 + 0x2ea) = 0;
  }
  else {
    uVar2 = FUN_0087b590(uVar4,1);
    *(undefined1 *)(param_1 + 0x2e8) = uVar2;
    uVar2 = FUN_0087b620(uVar4,1);
    *(undefined1 *)(param_1 + 0x2e9) = uVar2;
    uVar2 = FUN_0087b840(uVar4,1);
    *(char *)(param_1 + 0x33c) = *(char *)(param_1 + 0x33c) + '\x01';
    cVar1 = *(char *)(param_1 + 0x2fc);
    *(undefined1 *)(param_1 + 0x2ea) = uVar2;
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2ec);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e4);
  }
  iVar3 = FUN_0087b880(uVar4,2);
  if (*(int *)(param_1 + 0x300) != iVar3) {
    *(undefined2 *)(param_1 + 0x307) = 0;
    *(undefined1 *)(param_1 + 0x309) = 0;
  }
  *(int *)(param_1 + 0x300) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x304) = 0;
    cVar1 = *(char *)(param_1 + 0x318);
    *(undefined1 *)(param_1 + 0x306) = 0;
  }
  else {
    uVar2 = FUN_0087b590(uVar4,2);
    *(undefined1 *)(param_1 + 0x304) = uVar2;
    uVar2 = FUN_0087b620(uVar4,2);
    *(undefined1 *)(param_1 + 0x305) = uVar2;
    uVar2 = FUN_0087b840(uVar4,2);
    *(char *)(param_1 + 0x33c) = *(char *)(param_1 + 0x33c) + '\x01';
    cVar1 = *(char *)(param_1 + 0x318);
    *(undefined1 *)(param_1 + 0x306) = uVar2;
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x300);
  }
  iVar3 = FUN_0087b880(uVar4,3);
  if (*(int *)(param_1 + 0x31c) != iVar3) {
    *(undefined2 *)(param_1 + 0x323) = 0;
    *(undefined1 *)(param_1 + 0x325) = 0;
  }
  *(int *)(param_1 + 0x31c) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 800) = 0;
    cVar1 = *(char *)(param_1 + 0x334);
    *(undefined1 *)(param_1 + 0x322) = 0;
  }
  else {
    uVar2 = FUN_0087b590(uVar4,3);
    *(undefined1 *)(param_1 + 800) = uVar2;
    uVar2 = FUN_0087b620(uVar4,3);
    *(undefined1 *)(param_1 + 0x321) = uVar2;
    uVar2 = FUN_0087b840(uVar4,3);
    *(char *)(param_1 + 0x33c) = *(char *)(param_1 + 0x33c) + '\x01';
    cVar1 = *(char *)(param_1 + 0x334);
    *(undefined1 *)(param_1 + 0x322) = uVar2;
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x324);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x31c);
  }
  return;
}


