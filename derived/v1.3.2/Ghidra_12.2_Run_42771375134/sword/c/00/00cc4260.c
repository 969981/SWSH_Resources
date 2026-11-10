/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4260; name: FUN_00cc4260
 */


void FUN_00cc4260(undefined8 param_1,undefined1 *param_2,int *param_3,undefined1 *param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_2 = *param_4;
  *(undefined4 *)(param_2 + 4) = *param_5;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 9) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)param_3 + uVar4);
    }
  }
  *(undefined4 *)(param_2 + 8) = uVar3;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)((long)param_3 + uVar4);
  }
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3));
  puVar1 = (uint *)((long)param_3 + uVar7);
  uVar10 = (ulong)*puVar1;
  bVar2 = *(byte *)((long)puVar1 + uVar10 + 4);
  uVar4 = 0xcbf29ce484222645;
  uVar9 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar8 = (byte *)((long)param_3 + uVar10 + uVar7 + 5);
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_2 + 0x18) = uVar9;
  uVar7 = (ulong)*(ushort *)((long)param_3 + (0x36 - (long)*param_3));
  puVar1 = (uint *)((long)param_3 + uVar7);
  uVar10 = (ulong)*puVar1;
  bVar2 = *(byte *)((long)puVar1 + uVar10 + 4);
  uVar9 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar9 = 0xcbf29ce484222645;
    pbVar8 = (byte *)((long)param_3 + uVar10 + uVar7 + 5);
    do {
      uVar9 = (uVar9 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_2 + 0x20) = uVar9;
  uVar7 = (ulong)*(ushort *)((long)param_3 + (6 - (long)*param_3));
  puVar1 = (uint *)((long)param_3 + uVar7);
  uVar9 = (ulong)*puVar1;
  bVar2 = *(byte *)((long)puVar1 + uVar9 + 4);
  if (bVar2 != 0) {
    pbVar8 = (byte *)((long)param_3 + uVar9 + uVar7 + 5);
    do {
      uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_2 + 0x28) = uVar4;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0xf) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[7];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)param_3 + uVar4);
    }
  }
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0x11) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[8];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)param_3 + uVar4);
    }
  }
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0x2f) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x17];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)param_3 + uVar4);
    }
  }
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0x39) {
    strncpy(param_2 + 0x3c,&DAT_00000004,0xff);
    return;
  }
  uVar4 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x1c];
  lVar5 = 0;
  if (uVar4 != 0) {
    puVar1 = (uint *)((long)param_3 + uVar4);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  strncpy(param_2 + 0x3c,(char *)(lVar5 + 4),0xff);
  return;
}


