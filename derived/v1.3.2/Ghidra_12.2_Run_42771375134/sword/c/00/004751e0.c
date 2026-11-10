/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004751e0; name: FUN_004751e0
 */


void FUN_004751e0(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_02712a90;
  lVar8 = *param_3;
  uVar2 = *(uint *)(lVar8 + 0x20);
  uVar9 = *(uint *)(lVar8 + 0x24);
  if (uVar2 < uVar9) {
LAB_004752ac:
    if (uVar2 < uVar9) {
      uVar9 = *(uint *)(lVar8 + 0x20);
      *(uint *)(lVar8 + 0x20) = uVar9 + 1;
      puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x18) + (ulong)uVar9 * 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        lVar4 = *(long *)(lVar8 + 0x18) + (ulong)uVar9 * 0x18;
        *puVar7 = 0;
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        *(undefined8 *)(lVar4 + 0xc) = 0;
      }
      goto LAB_004752f0;
    }
  }
  else {
    uVar9 = uVar9 + 2;
    lVar4 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 * 0x18,0x10);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar8 + 0x18);
      if (lVar5 != 0 && lVar5 != lVar4) {
        uVar6 = (ulong)*(uint *)(lVar8 + 0x20);
        if (*(uint *)(lVar8 + 0x20) != 0) {
          lVar5 = 0;
          do {
            puVar7 = (undefined8 *)(lVar4 + lVar5);
            if (puVar7 != (undefined8 *)0x0) {
              puVar1 = (undefined8 *)(lVar4 + lVar5);
              *puVar1 = 0;
              puVar1[1] = 0xffffffff;
              *(undefined4 *)(puVar1 + 2) = 0;
            }
            puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x18) + lVar5);
            lVar5 = lVar5 + 0x18;
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar1 + 2);
            puVar7[1] = puVar1[1];
            uVar6 = uVar6 - 1;
            *puVar7 = *puVar1;
          } while (uVar6 != 0);
          lVar5 = *(long *)(lVar8 + 0x18);
        }
        FUN_004047f0(*(undefined4 *)puVar3,lVar5);
      }
      *(long *)(lVar8 + 0x18) = lVar4;
      *(uint *)(lVar8 + 0x24) = uVar9;
      goto LAB_004752ac;
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_004752f0:
  *(undefined8 **)(param_4 + 0x50) = puVar7;
  *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + *(int *)(param_4 + 0x78);
  if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x20)) {
    *param_3 = *(long *)*param_3;
  }
  return;
}


