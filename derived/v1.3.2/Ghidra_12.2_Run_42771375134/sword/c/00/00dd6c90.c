/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd6c90; name: FUN_00dd6c90
 */


void FUN_00dd6c90(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar6);
    lVar7 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar7);
  puVar3 = PTR_DAT_0271e9e0;
  *param_1 = (long)(PTR_DAT_0271e9e0 + 0x10);
  param_1[9] = (long)(puVar3 + 0x198);
  param_1[10] = (long)(puVar3 + 0x1d8);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x74] = lVar7;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1b) ||
     (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)((long)piVar2 + uVar6);
  }
  param_1[0x75] = lVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x76] = lVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xd) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x77] = lVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x17) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x78] = lVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x79) = uVar5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x3cc) = uVar5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x11) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x7a) = uVar5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x13) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x3d4) = uVar5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x15) {
    *(undefined1 *)(param_1 + 0x7b) = 0;
    return;
  }
  uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[10];
  bVar4 = false;
  if (uVar6 != 0) {
    bVar4 = *(char *)((long)param_4 + uVar6) != '\0';
  }
  *(bool *)(param_1 + 0x7b) = bVar4;
  return;
}


