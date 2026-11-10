/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4390; name: FUN_00cb4390
 */


bool FUN_00cb4390(long param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long lVar8;
  
  puVar4 = *(uint **)(*(long *)(*(long *)(&DAT_00001588 + param_1) + 0x138) + 400);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  puVar4 = (uint *)((long)puVar4 + (ulong)param_3 * 4 + (ulong)*puVar4 + 4);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
    uVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar5);
    }
  }
  *param_2 = uVar6;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
    uVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar5);
    }
  }
  param_2[1] = uVar6;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
    uVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar5);
    }
  }
  param_2[2] = uVar6;
  param_2[3] = *(undefined8 *)PTR_DAT_0271c2f8;
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar7 < 0xb) {
    return false;
  }
  lVar8 = -(long)*piVar1;
  if (((ulong)puVar7[5] != 0) &&
     (puVar4 = (uint *)((long)piVar1 + (ulong)puVar7[5]), lVar2 = (long)puVar4 + (ulong)*puVar4,
     lVar2 != 0)) {
    puVar4 = (uint *)(lVar2 + 4);
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)piVar3 + uVar5);
    }
    param_2[3] = uVar6;
    lVar8 = -(long)*piVar1;
    puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  }
  if (*puVar7 < 0x15) {
    return false;
  }
  uVar5 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x14);
  if (uVar5 == 0) {
    return false;
  }
  return *(int *)((long)piVar1 + uVar5) != 0;
}


