/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e77a0; name: FUN_004e77a0
 */


undefined8 FUN_004e77a0(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  
  puVar6 = PTR_DAT_02713640;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 * 0x48);
  uVar8 = 0;
  if (lVar7 != 0) {
    lVar9 = *param_1;
    if ((lVar9 != 0) && (lVar9 != lVar7)) {
      uVar13 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar14 = 0;
        lVar9 = 0;
        do {
          if (lVar7 + lVar14 == 0) {
            lVar3 = lVar7 + lVar14;
            pcVar15 = (char *)(lVar3 + 0x40);
            cVar11 = *pcVar15;
            puVar12 = (undefined8 *)(lVar7 + lVar9 * 0x48 + 0x38);
            lVar10 = *(long *)(lVar3 + 0x38);
          }
          else {
            lVar2 = lVar7 + lVar14;
            puVar12 = (undefined8 *)(lVar2 + 0x38);
            *puVar12 = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *(undefined8 *)(lVar2 + 0x18) = 0x3f80000000000000;
            *(undefined8 *)(lVar2 + 0x20) = 0x13f800000;
            *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
            lVar3 = lVar7 + lVar9 * 0x48;
            cVar11 = '\0';
            lVar10 = 0;
            *(undefined4 *)(lVar2 + 0x28) = 0;
            *(undefined1 *)(lVar2 + 0x40) = 0;
            pcVar15 = (char *)(lVar3 + 0x40);
          }
          puVar4 = (undefined4 *)(*param_1 + lVar14);
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(puVar4 + 2);
          puVar5 = (undefined4 *)(lVar7 + lVar14);
          *puVar5 = *puVar4;
          puVar5[8] = puVar4[8];
          *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar4 + 6);
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar4 + 4);
          *(undefined8 *)(puVar5 + 9) = *(undefined8 *)(puVar4 + 9);
          *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)(puVar4 + 0xb);
          puVar5[0xd] = puVar4[0xd];
          if ((lVar10 != 0) && (cVar11 != '\0')) {
            FUN_00404870(*(undefined4 *)puVar6);
            *pcVar15 = '\0';
          }
          *puVar12 = 0;
          *puVar12 = *(undefined8 *)(puVar4 + 0xe);
          *pcVar15 = '\x01';
          *(undefined8 *)(puVar4 + 0xe) = 0;
          *(undefined1 *)(puVar4 + 0x10) = 0;
          lVar3 = *param_1 + lVar14;
          if ((*(long *)(lVar3 + 0x38) != 0) && (*(char *)(lVar3 + 0x40) != '\0')) {
            FUN_00404870(*(undefined4 *)puVar6);
            *(undefined1 *)(lVar3 + 0x40) = 0;
          }
          lVar9 = lVar9 + 1;
          lVar14 = lVar14 + 0x48;
          uVar13 = uVar13 - 1;
          *(undefined8 *)(lVar3 + 0x38) = 0;
        } while (uVar13 != 0);
        lVar9 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar6,lVar9);
    }
    uVar8 = 1;
    *param_1 = lVar7;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar8;
}


