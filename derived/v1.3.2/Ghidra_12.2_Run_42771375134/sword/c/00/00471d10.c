/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00471d10; name: FUN_00471d10
 */


undefined8 FUN_00471d10(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_02712a90;
  iVar7 = *(uint *)(param_1 + 1) - 1;
  if (-1 < iVar7) {
    lVar6 = *param_1;
    iVar8 = 0;
    do {
      while( true ) {
        iVar2 = iVar7 - iVar8;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar8 + (iVar2 >> 1);
        uVar1 = *(uint *)(lVar6 + (long)iVar2 * 0x30 + 0x28);
        if (param_2 > uVar1 || uVar1 == param_2) break;
        iVar7 = iVar2 + -1;
        if (iVar7 < iVar8) {
          return 0;
        }
      }
      if (param_2 <= uVar1) {
        puVar9 = (undefined8 *)(lVar6 + (ulong)*(uint *)(param_1 + 1) * 0x30 + -0x30);
        puVar3 = (undefined8 *)(lVar6 + (long)iVar2 * 0x30);
        while (puVar3 < puVar9) {
          *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar3 + 0xb);
          puVar5 = (undefined8 *)puVar3[3];
          puVar3[1] = puVar3[7];
          *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar3 + 8);
          if (puVar5 != (undefined8 *)0x0) {
            if (*(uint *)(puVar3 + 4) != 0) {
              lVar6 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
              do {
                (**(code **)*puVar5)(puVar5);
                lVar6 = lVar6 + -0x30;
                puVar5 = puVar5 + 6;
              } while (lVar6 != 0);
              puVar5 = (undefined8 *)puVar3[3];
            }
            *(undefined4 *)(puVar3 + 4) = 0;
            FUN_00404870(*(undefined4 *)puVar4,puVar5);
            puVar3[3] = 0;
            *(undefined4 *)((long)puVar3 + 0x24) = 0;
          }
          puVar3[3] = puVar3[9];
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 10);
          *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar3 + 0x54);
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3 = puVar3 + 6;
        }
        (**(code **)*puVar9)(puVar9);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      iVar8 = iVar2 + 1;
    } while (iVar8 <= iVar7);
  }
  return 0;
}


