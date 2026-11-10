/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a430; name: FUN_0029a430
 */


void FUN_0029a430(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  long lVar3;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_18;
  undefined2 local_14;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    break;
  case 1:
    *(undefined4 *)param_1 = 1;
    return;
  case 2:
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    return;
  case 3:
    *(undefined4 *)param_1 = 3;
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    return;
  case 4:
    *(undefined4 *)param_1 = 4;
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    param_1[4] = param_2[4];
    *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
    *(undefined1 *)((long)param_1 + 0x2f) = *(undefined1 *)((long)param_2 + 0x2f);
    *(undefined2 *)((long)param_1 + 0x2d) = *(undefined2 *)((long)param_2 + 0x2d);
    param_1[6] = (long *)param_1[4] + 4;
    bVar2 = (**(code **)(*(long *)param_1[4] + 0x78))();
    *(byte *)(param_1 + 7) = bVar2 & 1;
    return;
  case 5:
    *(undefined4 *)param_1 = 5;
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[5] = param_2[5];
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    param_1[6] = param_1[5];
    param_1[7] = *(undefined8 *)(param_1[5] + 0x60);
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    *(undefined2 *)((long)param_1 + 0x4e) = local_14;
    *(undefined4 *)((long)param_1 + 0x4a) = local_18;
    return;
  case 6:
    *(undefined4 *)param_1 = 6;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    param_1[2] = param_2[2];
    lVar3 = param_2[1];
    param_1[1] = lVar3;
    *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(undefined1 *)((long)param_1 + 0x1f) = *(undefined1 *)((long)param_2 + 0x1f);
    uVar1 = *(undefined2 *)((long)param_2 + 0x1d);
    *(undefined2 *)(param_1 + 6) = 0;
    param_1[4] = lVar3 + 0x20;
    param_1[5] = 0;
    *(undefined2 *)((long)param_1 + 0x1d) = uVar1;
    *(undefined2 *)((long)param_1 + 0x36) = local_24;
    *(undefined4 *)((long)param_1 + 0x32) = local_28;
    return;
  }
  return;
}


