/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00697a20; name: FUN_00697a20
 */


void FUN_00697a20(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  uint *__s;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  
  uVar9 = 0xcbf29ce484222645;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[1] = 0xcbf29ce484222645;
  param_1[2] = &DAT_01d38550;
  param_1[3] = 0;
  if (param_2 == (int *)0x0) {
    FUN_00696f40(param_1 + 5);
    FUN_00696f40(param_1 + 0x11,0);
    FUN_00696f40(param_1 + 0x1d,0);
    piVar10 = (int *)*param_1;
  }
  else {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar6 == 0)) {
      lVar5 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar6);
      lVar5 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_00696f40(param_1 + 5,lVar5);
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar6 == 0)) {
      lVar5 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar6);
      lVar5 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_00696f40(param_1 + 0x11,lVar5);
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
       (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar6 == 0)) {
      FUN_00696f40(param_1 + 0x1d,0);
      piVar10 = (int *)*param_1;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar6);
      FUN_00696f40(param_1 + 0x1d,(long)puVar1 + (ulong)*puVar1);
      piVar10 = (int *)*param_1;
    }
  }
  if (((piVar10 != (int *)0x0) && (4 < *(ushort *)((long)piVar10 - (long)*piVar10))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 != 0)) {
    uVar11 = (ulong)*(uint *)((long)piVar10 + uVar6);
    puVar1 = (uint *)((long)((long)piVar10 + uVar6) + uVar11);
    __s = puVar1 + 1;
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar4 = strlen((char *)__s);
    }
    bVar3 = (byte)*__s;
    if (bVar3 != 0) {
      pbVar8 = (byte *)((long)piVar10 + uVar11 + uVar6 + 5);
      do {
        uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar3 != 0);
    }
    param_1[1] = uVar9;
    param_1[2] = __s;
    param_1[3] = uVar4;
    if (param_1[4] != 0) {
      plVar7 = (long *)(param_1[4] + 0x48);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      param_1[4] = 0;
    }
    param_1[4] = 0;
  }
  return;
}


