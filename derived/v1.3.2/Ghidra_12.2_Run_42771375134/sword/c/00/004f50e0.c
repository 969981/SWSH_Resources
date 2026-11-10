/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f50e0; name: FUN_004f50e0
 */


undefined8 FUN_004f50e0(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  
  puVar8 = (undefined4 *)PTR_DAT_02713640;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 * 0x18);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      uVar9 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar10 = 0;
        lVar6 = 0;
        do {
          puVar8 = (undefined4 *)(lVar4 + lVar10);
          lVar3 = lVar10;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(lVar4 + lVar10 + 4) = 0;
            *(undefined8 *)(lVar4 + lVar10 + 0x10) = 0;
            lVar3 = lVar6 * 0x18;
          }
          lVar7 = *param_1;
          FUN_004e7d20(puVar8);
          puVar2 = (undefined4 *)(lVar7 + lVar10);
          *puVar8 = *puVar2;
          *(undefined8 *)(lVar4 + lVar3 + 0x10) = *(undefined8 *)(puVar2 + 4);
          *(undefined4 *)(lVar4 + lVar3 + 8) = puVar2[2];
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          puVar2[2] = 0;
          FUN_004e7ce0(*param_1 + lVar10);
          lVar6 = lVar6 + 1;
          lVar10 = lVar10 + 0x18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        lVar6 = *param_1;
        puVar8 = (undefined4 *)PTR_DAT_02713640;
      }
      FUN_00404870(*puVar8,lVar6);
    }
    uVar5 = 1;
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


