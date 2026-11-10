/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00483f70; name: FUN_00483f70
 */


/* WARNING: Removing unreachable block (ram,0x00484084) */

long * FUN_00483f70(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  
  puVar5 = PTR_DAT_02712a90;
  plVar8 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar10 = plVar8;
  if (uVar3 == 0) {
LAB_00483fe4:
    if (plVar10 != plVar8 + (ulong)uVar3 * 3) {
      *(undefined4 *)(plVar10 + 2) = *param_4;
      return plVar10 + 2;
    }
  }
  else {
    lVar11 = (ulong)uVar3 * 0x18;
    do {
      if ((*plVar10 == param_2) && ((((uint)*(byte *)(plVar10 + 1) ^ (uint)param_3) & 1) == 0))
      goto LAB_00483fe4;
      lVar11 = lVar11 + -0x18;
      plVar10 = plVar10 + 3;
    } while (lVar11 != 0);
  }
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 < uVar12) goto LAB_0048412c;
  uVar12 = uVar12 + 1;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 * 0x18);
  if (puVar6 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) {
      puVar6[2] = puVar7[2];
      puVar6[1] = puVar7[1];
      *puVar6 = *puVar7;
      if (uVar4 != 1) {
        if (uVar4 == 2) {
          lVar11 = 1;
        }
        else {
          lVar11 = 1;
          lVar9 = 0;
          do {
            lVar1 = *param_1 + lVar9;
            *(undefined8 *)((long)puVar6 + lVar9 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)((long)puVar6 + lVar9 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)((long)puVar6 + lVar9 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
            lVar1 = *param_1 + lVar9;
            *(undefined8 *)((long)puVar6 + lVar9 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
            *(undefined8 *)((long)puVar6 + lVar9 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
            lVar11 = lVar11 + 2;
            *(undefined8 *)((long)puVar6 + lVar9 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
            lVar9 = lVar9 + 0x30;
          } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar11);
          if ((~uVar4 & 1) == 0) goto LAB_00484118;
        }
        puVar7 = puVar6 + lVar11 * 3;
        puVar2 = (undefined8 *)(*param_1 + lVar11 * 0x18);
        puVar7[2] = puVar2[2];
        puVar7[1] = puVar2[1];
        *puVar7 = *puVar2;
      }
LAB_00484118:
      puVar7 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar5,puVar7);
  }
  *param_1 = (long)puVar6;
  *(uint *)((long)param_1 + 0xc) = uVar12;
LAB_0048412c:
  if (uVar3 < uVar12) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar11 = *param_1;
    *(uint *)(param_1 + 1) = uVar3 + 1;
    plVar10 = (long *)(lVar11 + (ulong)uVar3 * 0x18);
    if (plVar10 != (long *)0x0) {
      *plVar10 = param_2;
      lVar11 = lVar11 + (ulong)uVar3 * 0x18;
      *(undefined8 *)(lVar11 + 8) = param_3;
      *(undefined4 *)(lVar11 + 0x10) = *param_4;
      return (long *)(lVar11 + 0x10);
    }
  }
  return (long *)0x0;
}


