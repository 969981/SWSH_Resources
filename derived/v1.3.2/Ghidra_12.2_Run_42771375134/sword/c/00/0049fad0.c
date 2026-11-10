/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049fad0; name: FUN_0049fad0
 */


undefined8 FUN_0049fad0(long *param_1,ulong param_2)

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
        uVar8 = *(ulong *)(lVar5 + (long)iVar1 * 0x28 + 0x20);
        if (param_2 > uVar8 || uVar8 == param_2) break;
        iVar6 = iVar1 + -1;
        if (iVar6 < iVar7) {
          return 0;
        }
      }
      if (param_2 <= uVar8) {
        puVar9 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 1) * 0x28 + -0x28);
        puVar2 = (undefined8 *)(lVar5 + (long)iVar1 * 0x28);
        while (puVar2 < puVar9) {
          puVar2[4] = puVar2[9];
          puVar4 = (undefined8 *)puVar2[2];
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + 6);
          *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)((long)puVar2 + 0x34);
          if (puVar4 != (undefined8 *)0x0) {
            if (*(uint *)(puVar2 + 3) != 0) {
              lVar5 = (ulong)*(uint *)(puVar2 + 3) * 0x28;
              do {
                (**(code **)*puVar4)(puVar4);
                lVar5 = lVar5 + -0x28;
                puVar4 = puVar4 + 5;
              } while (lVar5 != 0);
              puVar4 = (undefined8 *)puVar2[2];
            }
            *(undefined4 *)(puVar2 + 3) = 0;
            FUN_00404870(*(undefined4 *)puVar3,puVar4);
            puVar2[2] = 0;
            *(undefined4 *)((long)puVar2 + 0x1c) = 0;
          }
          puVar2[2] = puVar2[7];
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar2 + 8);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x44);
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2 = puVar2 + 5;
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


