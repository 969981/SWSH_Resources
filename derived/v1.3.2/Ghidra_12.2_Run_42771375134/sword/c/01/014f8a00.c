/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f8a00; name: FUN_014f8a00
 */


void FUN_014f8a00(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x4c8);
  uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,0);
  uVar3 = FUN_008787d0();
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02172370);
  bVar5 = *(byte *)(lVar4 + 0x58);
  if (lVar6 == 0) {
    bVar1 = bVar5 & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar1 = bVar5 | 1;
    }
    *(byte *)(lVar4 + 0x58) = bVar1;
    (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,1);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02172380);
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x58) | 1;
    }
    *(byte *)(lVar4 + 0x58) = bVar5;
    (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,2);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02172390);
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x58) | 1;
    }
    *(byte *)(lVar4 + 0x58) = bVar5;
    (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,3);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723a0);
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x58) | 1;
    }
    *(byte *)(lVar4 + 0x58) = bVar5;
    (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,4);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723b0);
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x58) | 1;
    }
    *(byte *)(lVar4 + 0x58) = bVar5;
    (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,5);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723c0);
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
    if ((uVar3 & 1) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x58) | 1;
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = bVar5 | 1;
      FUN_0168c480(lVar6,uVar2,0);
    }
    else {
      *(byte *)(lVar4 + 0x58) = bVar5 & 0xfe;
    }
    uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,1);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02172380);
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_0168c480(lVar6 + 0x3e0,uVar2,0);
    }
    else {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
    uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,2);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02172390);
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_0168c480(lVar6 + 0x7c0,uVar2,0);
    }
    else {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
    uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,3);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723a0);
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_0168c480(lVar6 + 0xba0,uVar2,0);
    }
    else {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
    uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,4);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723b0);
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_0168c480(lVar6 + 0xf80,uVar2,0);
    }
    else {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
    uVar2 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,5);
    uVar3 = FUN_008787d0();
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021723c0);
    if ((uVar3 & 1) == 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_0168c480(lVar6 + 0x1360,uVar2,0);
      return;
    }
    bVar5 = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  *(byte *)(lVar4 + 0x58) = bVar5;
  return;
}


