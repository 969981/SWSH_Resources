/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010733f0; name: FUN_010733f0
 */


void FUN_010733f0(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),bVar2);
  lVar1 = param_1 + 0x100;
  uVar3 = FUN_0106fc00(0);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  bVar2 = true;
  uVar3 = FUN_0106fc00(1);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) != '\0') {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(2);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(3);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(4);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(5);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(6);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(7);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(8);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(9);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(10);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  FUN_016b2d70(uVar3,bVar2);
  uVar3 = FUN_0106fc00(0xb);
  uVar3 = FUN_00ffdb00(lVar1,uVar3);
  if (*(char *)(param_1 + 0x690) == '\0') {
    FUN_016b2d70(uVar3,1);
    return;
  }
  FUN_016b2d70(uVar3,*(int *)(param_1 + 0x5dc) != 1);
  return;
}


