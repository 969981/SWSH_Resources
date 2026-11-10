/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446e30; name: FUN_00446e30
 */


int FUN_00446e30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  iVar4 = (int)param_2[4] + -1;
  *(int *)(param_2 + 4) = iVar4;
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*param_2 != 0) {
    FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18));
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if ((int)param_2[4] != 0) {
      return (int)param_2[4];
    }
  }
  uVar2 = *(uint *)(param_1 + 0x78);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = *(uint *)((long)param_2 + 0x24);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar3 / uVar2;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)(uVar3 - uVar5 * uVar2) * 8);
  puVar6 = (undefined8 *)*puVar1;
  if (puVar6 == (undefined8 *)0x0) {
    return 0;
  }
  puVar8 = (undefined8 *)0x0;
  do {
    puVar7 = puVar6;
    if (*(uint *)(puVar7 + 1) == uVar3) {
      if (puVar8 != (undefined8 *)0x0) {
        puVar1 = puVar8;
      }
      *puVar1 = *puVar7;
      if (puVar7[4] != 0) {
        *(undefined4 *)(puVar7 + 5) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        puVar7[4] = 0;
        *(undefined4 *)((long)puVar7 + 0x2c) = 0;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar7);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      return 0;
    }
    puVar6 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
  } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
  return 0;
}


