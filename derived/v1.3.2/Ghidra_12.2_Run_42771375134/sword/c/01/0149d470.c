/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149d470; name: FUN_0149d470
 */


void FUN_0149d470(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  uVar3 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  cVar1 = FUN_0087b890();
  if (cVar1 == '\0') {
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f600);
    bVar2 = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  else {
    FUN_0149ca80(param_1,0,0);
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f600);
    bVar2 = *(byte *)(lVar4 + 0x58) | 1;
  }
  *(byte *)(lVar4 + 0x58) = bVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_28 = 0;
  cVar1 = FUN_0087b890(uVar3);
  FUN_016b81d0(uVar5,&local_28,cVar1 != '\0');
  bVar2 = FUN_0087b890(uVar3);
  if (bVar2 < 2) {
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f6c0);
    bVar2 = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  else {
    FUN_0149ca80(param_1,1,1);
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f6c0);
    bVar2 = *(byte *)(lVar4 + 0x58) | 1;
  }
  *(byte *)(lVar4 + 0x58) = bVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_28 = 0x100000000;
  bVar2 = FUN_0087b890(uVar3);
  FUN_016b81d0(uVar5,&local_28,1 < bVar2);
  bVar2 = FUN_0087b890(uVar3);
  if (bVar2 < 3) {
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f780);
    bVar2 = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  else {
    FUN_0149ca80(param_1,2,2);
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f780);
    bVar2 = *(byte *)(lVar4 + 0x58) | 1;
  }
  *(byte *)(lVar4 + 0x58) = bVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_28 = 0x200000000;
  bVar2 = FUN_0087b890(uVar3);
  FUN_016b81d0(uVar5,&local_28,2 < bVar2);
  bVar2 = FUN_0087b890(uVar3);
  if (bVar2 < 4) {
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f840);
    bVar2 = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  else {
    FUN_0149ca80(param_1,3,3);
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_0216f840);
    bVar2 = *(byte *)(lVar4 + 0x58) | 1;
  }
  *(byte *)(lVar4 + 0x58) = bVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x5e0);
  local_28 = 0x300000000;
  bVar2 = FUN_0087b890(uVar3);
  FUN_016b81d0(uVar5,&local_28,3 < bVar2);
  return;
}


