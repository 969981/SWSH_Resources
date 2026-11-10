/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a705d0; name: FUN_00a705d0
 */


void FUN_00a705d0(long *param_1,ulong param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  ushort *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar8 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x278) + 400);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  lVar6 = FUN_009c6000();
  uVar4 = (**(code **)(*param_1 + 0x870))(param_1);
  if (((lVar6 != 0) && (iVar5 = (**(code **)(*param_1 + 0x870))(param_1), iVar5 == 2)) &&
     ((uVar7 = FUN_008f35c0(lVar6,0x800), (uVar7 & 1) != 0 ||
      (uVar7 = FUN_008f35c0(lVar6,0x1000), (uVar7 & 1) != 0)))) {
    uVar4 = uVar4 + 1;
  }
  puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  uVar11 = 0;
  puVar8 = (uint *)((long)puVar8 + (ulong)(uVar4 & 0xff) * 4 + (ulong)*puVar8 + 4);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  uVar12 = 0;
  if (10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
    uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
    uVar12 = 0;
    if (uVar7 != 0) {
      uVar12 = *(undefined4 *)((long)piVar1 + uVar7);
    }
  }
  *param_8 = uVar12;
  uVar12 = 0;
  if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
    uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
    uVar12 = 0;
    if (uVar7 != 0) {
      uVar12 = *(undefined4 *)((long)piVar1 + uVar7);
    }
  }
  *param_9 = uVar12;
  puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  lVar6 = (param_2 & 0xff) * 4;
  puVar8 = (uint *)((long)puVar8 + lVar6 + (ulong)*puVar8 + 4);
  piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar8 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  lVar10 = ((ulong)param_3 & 0xff) * 4;
  *param_7 = *(undefined4 *)((long)puVar8 + lVar10 + (ulong)*puVar8 + 4);
  puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar8 = (uint *)((long)puVar8 + lVar6 + (ulong)*puVar8 + 4);
  piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar8 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  uVar14 = 0;
  puVar8 = (uint *)((long)puVar8 + lVar10 + (ulong)*puVar8 + 4);
  piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  uVar12 = 0;
  uVar4 = 0;
  if (4 < uVar3) {
    uVar14 = 0;
    uVar12 = 0;
    if ((ulong)puVar9[2] != 0) {
      uVar12 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[2]);
    }
    if (uVar3 < 7) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar14 = 0;
      if ((ulong)puVar9[3] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar9[4] != 0)) {
        uVar4 = *(uint *)((long)piVar2 + (ulong)puVar9[4]);
      }
    }
  }
  uVar13 = 0;
  uVar7 = 0;
  param_5[1] = (ulong)uVar4;
  *param_5 = CONCAT44(uVar14,uVar12);
  puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  puVar8 = (uint *)((long)puVar8 + (param_2 & 0xff) * 4 + (ulong)*puVar8 + 4);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar8 = (uint *)((long)puVar8 + ((ulong)param_3 & 0xff) * 4 + (ulong)*puVar8 + 4);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar9;
  if (4 < uVar3) {
    uVar11 = 0;
    uVar13 = 0;
    if ((ulong)puVar9[2] != 0) {
      uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[2]);
    }
    if (uVar3 < 7) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar11 = 0;
      if ((ulong)puVar9[3] != 0) {
        uVar11 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar9[4] != 0)) {
        uVar7 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar9[4]);
      }
    }
  }
  param_6[1] = uVar7;
  *param_6 = CONCAT44(uVar11,uVar13);
  return;
}


