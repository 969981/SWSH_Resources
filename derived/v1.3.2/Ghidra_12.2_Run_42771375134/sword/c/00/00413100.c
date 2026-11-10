/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00413100; name: FUN_00413100
 */


undefined8 FUN_00413100(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar4 = PTR_DAT_02712a90;
  uVar2 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 0x18);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar9 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar7 = 0;
        puVar1 = PTR_DAT_02712ba8 + 0x10;
        do {
          if (lVar5 + lVar7 != 0) {
            plVar3 = (long *)(lVar5 + lVar7);
            FUN_004b7930(plVar3);
            *plVar3 = (long)puVar1;
            *(undefined4 *)((long)plVar3 + 0xc) = 0xffffffff;
            plVar3[2] = 0;
          }
          lVar8 = *param_1;
          *(undefined8 *)(lVar5 + lVar7 + 0x10) = *(undefined8 *)(lVar8 + lVar7 + 0x10);
          *(undefined8 *)(lVar5 + lVar7 + 8) = *(undefined8 *)(lVar8 + lVar7 + 8);
          (*(code *)**(undefined8 **)(*param_1 + lVar7))();
          lVar7 = lVar7 + 0x18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar2;
  }
  return uVar6;
}


