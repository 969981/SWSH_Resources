/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00471a80; name: FUN_00471a80
 */


undefined8 FUN_00471a80(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar3 = PTR_DAT_02712a90;
  iVar6 = *(uint *)(param_1 + 1) - 1;
  if (-1 < iVar6) {
    lVar5 = *param_1;
    iVar7 = 0;
    do {
      while( true ) {
        iVar1 = iVar6 - iVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar7 + (iVar1 >> 1);
        uVar8 = *(ulong *)(lVar5 + (long)iVar1 * 0x30 + 0x28);
        if (param_2 > uVar8 || uVar8 == param_2) break;
        iVar6 = iVar1 + -1;
        if (iVar6 < iVar7) {
          return 0;
        }
      }
      if (param_2 <= uVar8) {
        puVar9 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 1) * 0x30 + -0x30);
        puVar2 = (undefined8 *)(lVar5 + (long)iVar1 * 0x30);
        while (puVar2 < puVar9) {
          puVar2[5] = puVar2[0xb];
          puVar4 = (undefined8 *)puVar2[3];
          puVar2[1] = puVar2[7];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar2 + 8);
          if (puVar4 != (undefined8 *)0x0) {
            if (*(uint *)(puVar2 + 4) != 0) {
              lVar5 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
              do {
                (**(code **)*puVar4)(puVar4);
                lVar5 = lVar5 + -0x30;
                puVar4 = puVar4 + 6;
              } while (lVar5 != 0);
              puVar4 = (undefined8 *)puVar2[3];
            }
            *(undefined4 *)(puVar2 + 4) = 0;
            FUN_00404870(*(undefined4 *)puVar3,puVar4);
            puVar2[3] = 0;
            *(undefined4 *)((long)puVar2 + 0x24) = 0;
          }
          puVar2[3] = puVar2[9];
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 10);
          *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar2 + 0x54);
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2 = puVar2 + 6;
        }
        (**(code **)*puVar9)(puVar9);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      iVar7 = iVar1 + 1;
    } while (iVar7 <= iVar6);
  }
  return 0;
}


