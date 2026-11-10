/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01038a10; name: FUN_01038a10
 */


bool FUN_01038a10(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  
  *(int *)(param_1 + 0xe0) = (int)param_2[7];
  *(long *)(param_1 + 0xe8) = param_2[8];
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)((long)param_2 + 0x4c);
  *(int *)(param_1 + 0xf0) = (int)param_2[9];
  *(undefined2 *)(param_1 + 0xf6) = *(undefined2 *)((long)param_2 + 0x4e);
  *(short *)(param_1 + 0xf8) = (short)param_2[10];
  *(long *)(param_1 + 0x108) = param_2[0xd];
  *(long *)(param_1 + 0x100) = param_2[0xc];
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_0077d660(*(undefined8 *)(param_1 + 0x20));
    lVar3 = param_2[1];
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    FUN_0077d4d0();
    lVar3 = param_2[1];
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar4 = lVar2 != 0;
  if (lVar3 == 0) {
    FUN_0077d660(uVar1);
    lVar2 = param_2[2];
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
    lVar2 = param_2[2];
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  if (lVar2 == 0) {
    FUN_0077d660(uVar1);
    lVar2 = param_2[3];
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
    lVar2 = param_2[3];
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  if (lVar2 == 0) {
    FUN_0077d660(uVar1);
    lVar2 = param_2[4];
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
    lVar2 = param_2[4];
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  if (lVar2 == 0) {
    FUN_0077d660(uVar1);
    lVar2 = param_2[5];
    uVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
    lVar2 = param_2[5];
    uVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  if (lVar2 == 0) {
    FUN_0077d660(uVar1);
    lVar2 = param_2[6];
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
    lVar2 = param_2[6];
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  if (lVar2 == 0) {
    FUN_0077d660(uVar1);
  }
  else {
    FUN_0077d4d0();
    cVar4 = cVar4 + '\x01';
  }
  return cVar4 != '\0';
}


