/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc6370; name: FUN_00dc6370
 */


void FUN_00dc6370(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char *__s;
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  size_t sVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar7 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar7);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar9);
  puVar3 = PTR_DAT_0271e938;
  *param_1 = (long)(PTR_DAT_0271e938 + 0x10);
  param_1[9] = (long)(puVar3 + 0x1b0);
  param_1[10] = (long)(puVar3 + 0x1f0);
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], uVar7 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)((long)param_4 + uVar7);
  }
  param_1[0x74] = lVar9;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0x454b2000451c4000;
  lVar9 = 0;
  if ((8 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4], lVar9 = 0, uVar7 != 0)) {
    lVar9 = *(long *)((long)param_4 + uVar7);
  }
  param_1[0x79] = lVar9;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = (long)(PTR_DAT_0271e940 + 0x10);
  FUN_006c5dc0(param_1 + 0x9c);
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xd) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(undefined4 *)((long)param_4 + uVar7);
    }
  }
  uVar7 = 0xcbf29ce484222645;
  *(undefined4 *)(param_1 + 0xc2) = uVar6;
  param_1[0xc3] = 0;
  param_1[0xc4] = -0x340d631b7bddd9bb;
  param_1[0xc5] = (long)&DAT_01d38550;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x11) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
    bVar4 = false;
    if (uVar8 != 0) {
      bVar4 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)(param_1 + 200) = bVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x19) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc];
    bVar4 = false;
    if (uVar8 != 0) {
      bVar4 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x641) = bVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x13) {
    lVar9 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    lVar9 = 0;
    if (uVar8 != 0) {
      lVar9 = *(long *)((long)param_4 + uVar8);
    }
  }
  param_1[0xc9] = lVar9;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x15) {
    lVar9 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[10];
    lVar9 = 0;
    if (uVar8 != 0) {
      lVar9 = *(long *)((long)param_4 + uVar8);
    }
  }
  param_1[0xca] = lVar9;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x17) {
    lVar9 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    lVar9 = 0;
    if (uVar8 != 0) {
      lVar9 = *(long *)((long)param_4 + uVar8);
    }
  }
  param_1[0xcb] = lVar9;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd];
    bVar4 = false;
    if (uVar8 != 0) {
      bVar4 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)(param_1 + 0xcc) = bVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1f) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xf];
    bVar4 = false;
    if (uVar8 != 0) {
      bVar4 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x661) = bVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x21) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x10];
    bVar4 = false;
    if (uVar8 != 0) {
      bVar4 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x662) = bVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x23) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x11];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)param_4 + uVar8);
    }
  }
  *(undefined4 *)((long)param_1 + 0x664) = uVar6;
  *(undefined1 *)(param_1 + 0xcd) = 1;
  *(undefined1 *)((long)param_1 + 0x66d) = 0;
  *(undefined4 *)((long)param_1 + 0x669) = 0;
  if ((0xe < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], uVar8 != 0)) {
    uVar11 = (ulong)*(uint *)((long)param_4 + uVar8);
    lVar9 = (long)((long)param_4 + uVar8) + uVar11;
    if (lVar9 != 0) {
      __s = (char *)(lVar9 + 4);
      sVar5 = strlen(__s);
      if (1 < sVar5) {
        sVar5 = strlen(__s);
        bVar2 = *(byte *)(lVar9 + 4);
        if (bVar2 != 0) {
          pbVar10 = (byte *)((long)param_4 + uVar11 + uVar8 + 5);
          do {
            uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar2 != 0);
        }
        param_1[0xc4] = uVar7;
        param_1[0xc5] = (long)__s;
        param_1[0xc6] = sVar5;
        param_1[199] = 0;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x1c7) = 1;
  return;
}


