/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a0d40; name: FUN_004a0d40
 */


undefined8 FUN_004a0d40(long *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar4 = PTR_DAT_02712a90;
  iVar8 = *(uint *)(param_1 + 1) - 1;
  if (-1 < iVar8) {
    lVar5 = *param_1;
    iVar7 = 0;
    do {
      while( true ) {
        iVar3 = iVar8 - iVar7;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar1 = (iVar3 >> 1) + iVar7;
        bVar2 = *(byte *)(lVar5 + (long)iVar1 * 0x28 + 0x20);
        if (param_2 > bVar2 || bVar2 == param_2) break;
        iVar8 = iVar1 + -1;
        if (iVar8 < iVar7) {
          return 0;
        }
      }
      if (param_2 <= bVar2) {
        puVar11 = (undefined8 *)(lVar5 + (long)iVar1 * 0x28);
        puVar9 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 1) * 0x28 + -0x28);
        if (puVar11 < puVar9) {
          puVar10 = (undefined4 *)(lVar5 + (long)(iVar7 + (iVar3 >> 1)) * 0x28 + 0x30);
          do {
            *(undefined1 *)(puVar10 + -4) = *(undefined1 *)(puVar10 + 6);
            puVar10[-10] = *puVar10;
            *(undefined1 *)(puVar10 + -9) = *(undefined1 *)(puVar10 + 1);
            if (*(long *)(puVar10 + -8) == 0) {
              puVar12 = (undefined8 *)(puVar10 + -6);
              puVar6 = puVar10 + -5;
            }
            else {
              puVar10[-6] = 0;
              puVar12 = puVar11 + 3;
              FUN_00404870(*(undefined4 *)puVar4);
              puVar6 = (undefined4 *)((long)puVar11 + 0x1c);
              *(undefined8 *)(puVar10 + -8) = 0;
              puVar10[-5] = 0;
            }
            *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + 2);
            *(undefined4 *)puVar12 = puVar10[4];
            *puVar6 = puVar10[5];
            puVar12 = (undefined8 *)(puVar10 + -2);
            *(undefined8 *)(puVar10 + 2) = 0;
            *(undefined8 *)(puVar10 + 4) = 0;
            puVar10 = puVar10 + 10;
            puVar11 = puVar11 + 5;
          } while (puVar12 < puVar9);
        }
        (**(code **)*puVar9)(puVar9);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      iVar7 = iVar1 + 1;
    } while (iVar7 <= iVar8);
  }
  return 0;
}


