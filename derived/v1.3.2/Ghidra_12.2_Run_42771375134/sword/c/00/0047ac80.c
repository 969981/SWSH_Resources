/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047ac80; name: FUN_0047ac80
 */


void FUN_0047ac80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  
  puVar4 = *(undefined4 **)(param_1 + 0x78);
  puVar5 = puVar4;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      puVar6 = puVar5 + 4;
      FUN_004a8750(*puVar5,puVar5 + 2);
      puVar4 = *(undefined4 **)(param_1 + 0x78);
      puVar5 = puVar6;
    } while (puVar6 != puVar4 + (ulong)*(uint *)(param_1 + 0x80) * 4);
  }
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar4);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  puVar1 = PTR_DAT_02712a90;
  lVar7 = *(long *)(param_1 + 0x68);
  lVar2 = lVar7;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      FUN_00404870(*(undefined4 *)puVar1,*(undefined8 *)(lVar2 + 8));
      lVar7 = *(long *)(param_1 + 0x68);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar7 + (ulong)*(uint *)(param_1 + 0x70) * 0x10);
  }
  if (lVar7 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar7);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  puVar1 = PTR_DAT_02712a90;
  lVar2 = *(long *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x90);
  if (uVar3 != 0) {
    lVar7 = lVar2;
    do {
      if (*(long *)(lVar7 + 8) != 0) {
        *(undefined4 *)(lVar7 + 0x10) = 0;
        FUN_004047f0(*(undefined4 *)puVar1,*(long *)(lVar7 + 8));
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0;
        lVar2 = *(long *)(param_1 + 0x88);
        uVar3 = *(uint *)(param_1 + 0x90);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar2 + (ulong)uVar3 * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}


