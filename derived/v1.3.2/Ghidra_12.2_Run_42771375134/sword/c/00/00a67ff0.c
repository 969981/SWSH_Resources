/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a67ff0; name: FUN_00a67ff0
 */


void FUN_00a67ff0(long *param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ushort *puVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar9 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x278) + 400);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  lVar7 = FUN_009c6000();
  uVar5 = (**(code **)(*param_1 + 0x870))(param_1);
  if (((lVar7 != 0) && (iVar6 = (**(code **)(*param_1 + 0x870))(param_1), iVar6 == 2)) &&
     ((uVar8 = FUN_008f35c0(lVar7,0x800), (uVar8 & 1) != 0 ||
      (uVar8 = FUN_008f35c0(lVar7,0x1000), (uVar8 & 1) != 0)))) {
    uVar5 = uVar5 + 1;
  }
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)(uVar5 & 0xff) * 4 + (ulong)*puVar9 + 4);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  if (*puVar9 <= param_2) {
    uVar13 = 0xb4;
    *param_3 = 0;
    param_3[1] = 0;
    goto LAB_00a68214;
  }
  puVar9 = puVar9 + (ulong)param_2 + 1;
  piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
  if (param_2 == 0xff) {
LAB_00a68140:
    cVar4 = FUN_00ad59f0(0);
  }
  else {
    lVar7 = param_1[(ulong)param_2 + 0xa9];
    if (lVar7 == 0) goto LAB_00a68140;
    plVar11 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    cVar4 = FUN_00ad59f0(lVar7);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  puVar9 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar9 = (uint *)((long)puVar9 + (ulong)(cVar4 != '\0') * 4 + (ulong)*puVar9 + 4);
  piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar10;
  if (uVar3 < 5) {
    uVar13 = 0;
LAB_00a681dc:
    uVar12 = 0;
    uVar5 = uVar12;
  }
  else {
    uVar13 = 0;
    if ((ulong)puVar10[2] != 0) {
      uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[2]);
    }
    if (uVar3 < 7) goto LAB_00a681dc;
    uVar12 = 0;
    if ((ulong)puVar10[3] != 0) {
      uVar12 = *(uint *)((long)piVar2 + (ulong)puVar10[3]);
    }
    uVar5 = 0;
    if ((8 < uVar3) && ((ulong)puVar10[4] != 0)) {
      uVar5 = *(uint *)((long)piVar2 + (ulong)puVar10[4]);
    }
  }
  param_3[1] = (ulong)uVar5;
  *param_3 = CONCAT44(uVar12,uVar13);
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  uVar13 = *(undefined4 *)((long)puVar9 + (ulong)param_2 * 4 + (ulong)*puVar9 + 4);
LAB_00a68214:
  *param_4 = uVar13;
  return;
}


