/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2d80; name: FUN_004c2d80
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_004c2d80(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
  puVar2 = (undefined8 *)param_1[2];
  uVar6 = (ulong)*(uint *)(param_1 + 3);
  *param_1 = (long)(PTR_DAT_027134e0 + 0x10);
  if (*(uint *)(param_1 + 3) != 0) {
    puVar8 = puVar2 + uVar6 * 4;
    puVar3 = puVar2;
    do {
      iVar5 = (int)uVar6;
      if (puVar3[2] == 0) {
        if (puVar3 < puVar8 + -4) {
          uVar6 = (long)puVar8 + (-0x21 - (long)puVar3);
          uVar1 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1;
          puVar2 = puVar3;
          if ((uVar1 & 7) != 0) {
            lVar4 = -((ulong)uVar1 & 7);
            puVar7 = puVar3;
            do {
              puVar2 = puVar7 + 4;
              lVar4 = lVar4 + 1;
              puVar7[2] = puVar7[6];
              puVar7[3] = puVar7[7];
              *puVar7 = *puVar2;
              puVar7[1] = puVar7[5];
              puVar7 = puVar2;
            } while (lVar4 != 0);
          }
          if (0xdf < uVar6) {
            do {
              puVar2[2] = puVar2[6];
              puVar2[3] = puVar2[7];
              *puVar2 = puVar2[4];
              puVar2[1] = puVar2[5];
              puVar2[4] = puVar2[8];
              puVar2[5] = puVar2[9];
              puVar2[6] = puVar2[10];
              puVar2[7] = puVar2[0xb];
              puVar2[8] = puVar2[0xc];
              puVar2[9] = puVar2[0xd];
              puVar2[10] = puVar2[0xe];
              puVar2[0xb] = puVar2[0xf];
              puVar2[0xe] = puVar2[0x12];
              puVar2[0xf] = puVar2[0x13];
              puVar2[0xc] = puVar2[0x10];
              puVar2[0xd] = puVar2[0x11];
              puVar2[0x12] = puVar2[0x16];
              puVar2[0x13] = puVar2[0x17];
              puVar2[0x10] = puVar2[0x14];
              puVar2[0x11] = puVar2[0x15];
              puVar2[0x16] = puVar2[0x1a];
              puVar2[0x17] = puVar2[0x1b];
              puVar2[0x14] = puVar2[0x18];
              puVar2[0x15] = puVar2[0x19];
              puVar2[0x1a] = puVar2[0x1e];
              puVar2[0x1b] = puVar2[0x1f];
              puVar2[0x18] = puVar2[0x1c];
              puVar2[0x19] = puVar2[0x1d];
              puVar2[0x1e] = puVar2[0x22];
              puVar2[0x1f] = puVar2[0x23];
              puVar2[0x1c] = puVar2[0x20];
              puVar2[0x1d] = puVar2[0x21];
              puVar2 = puVar2 + 0x20;
            } while (puVar2 < puVar8 + -4);
          }
          iVar5 = (int)param_1[3];
          puVar2 = (undefined8 *)param_1[2];
        }
        uVar6 = (ulong)(iVar5 - 1U);
        *(uint *)(param_1 + 3) = iVar5 - 1U;
      }
      else {
        puVar3 = puVar3 + 4;
      }
      puVar8 = puVar2 + uVar6 * 4;
    } while (puVar8 != puVar3);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  plVar9 = (long *)param_1[5];
  if (plVar9 != (long *)0x0) {
    while( true ) {
      lVar4 = plVar9[2];
      plVar10 = (long *)*plVar9;
      param_1[5] = (long)plVar10;
      if ((long *)param_1[4] == plVar9) {
        param_1[4] = 0;
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      FUN_004c5230(plVar9);
      FUN_004c4930(plVar9);
      if (plVar10 == (long *)0x0) break;
      plVar9 = plVar10;
      if ((long *)param_1[5] != plVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


