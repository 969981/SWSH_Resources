/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5530; name: FUN_004a5530
 */


void FUN_004a5530(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar4 = FUN_004785a0(*(undefined8 *)PTR_DAT_02712dc0,param_1);
  puVar3 = PTR_DAT_02712a90;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar8 = *(uint *)((long)param_2 + 0xc);
    if (uVar8 <= uVar2) {
      uVar8 = uVar8 + 1;
      lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar8 * 0xc);
      if (lVar5 == 0) {
        return;
      }
      lVar6 = *param_2;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        uVar4 = (ulong)*(uint *)(param_2 + 1);
        if (*(uint *)(param_2 + 1) != 0) {
          lVar6 = 0;
          do {
            puVar7 = (undefined8 *)(lVar5 + lVar6);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar5 + lVar6) = 0x3f80000000000000;
              *(undefined4 *)((undefined8 *)(lVar5 + lVar6) + 1) = 0x39;
            }
            puVar1 = (undefined8 *)(*param_2 + lVar6);
            lVar6 = lVar6 + 0xc;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar1 + 1);
            uVar4 = uVar4 - 1;
            *puVar7 = *puVar1;
          } while (uVar4 != 0);
          lVar6 = *param_2;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar6);
      }
      *param_2 = lVar5;
      *(uint *)((long)param_2 + 0xc) = uVar8;
    }
    if (uVar2 < uVar8) {
      uVar8 = *(uint *)(param_2 + 1);
      lVar5 = *param_2;
      *(uint *)(param_2 + 1) = uVar8 + 1;
      puVar7 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0xc);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined4 *)puVar7 = 0;
        *(undefined8 *)(lVar5 + (ulong)uVar8 * 0xc + 4) = 0x393f800000;
        *(undefined4 *)(puVar7 + 1) = 0x39;
        *puVar7 = 0x3f80000000000000;
      }
    }
  }
  return;
}


