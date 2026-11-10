/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046eda0; name: FUN_0046eda0
 */


/* WARNING: Removing unreachable block (ram,0x0046f014) */

bool FUN_0046eda0(long param_1,code *param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar3 = (*param_2)(param_1 + 8,param_3,param_5), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar2 = PTR_DAT_02712a90;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    do {
      while( true ) {
        *param_4 = *(undefined1 *)(puVar10 + 5);
        if (((*(char *)(puVar10 + 2) != '\0') &&
            (uVar3 = (*param_2)(puVar10 + 1,param_3,param_5), (uVar3 & 1) != 0)) &&
           (*(char *)(puVar10 + 2) != '\0')) {
          *(undefined1 *)(puVar10 + 2) = 0;
        }
        puVar8 = (undefined8 *)puVar10[3];
        uVar4 = 0;
        if (*(int *)(puVar10 + 4) != 0) {
          puVar6 = puVar8;
          do {
            *(undefined8 *)(param_4 + 8) = puVar6[1];
            uVar3 = (*param_2)(puVar6,param_3,param_5);
            if ((uVar3 & 1) == 0) {
              uVar4 = *(uint *)(puVar10 + 4);
              puVar6 = puVar6 + 2;
            }
            else {
              uVar4 = *(uint *)(puVar10 + 4);
              puVar8 = (undefined8 *)(puVar10[3] + (ulong)uVar4 * 0x10 + -0x10);
              if (puVar6 < puVar8) {
                uVar3 = (puVar10[3] + ((ulong)uVar4 * 0x10 - (long)puVar6)) - 0x11;
                uVar4 = ((uint)(uVar3 >> 4) & 0xfffffff) + 1;
                puVar5 = puVar6;
                if ((uVar4 & 7) != 0) {
                  lVar7 = -((ulong)uVar4 & 7);
                  puVar9 = puVar6;
                  do {
                    puVar5 = puVar9 + 2;
                    *puVar9 = *puVar5;
                    puVar9[1] = puVar9[3];
                    lVar7 = lVar7 + 1;
                    puVar9 = puVar5;
                  } while (lVar7 != 0);
                }
                if (0x6f < uVar3) {
                  do {
                    *puVar5 = puVar5[2];
                    puVar5[1] = puVar5[3];
                    puVar5[2] = puVar5[4];
                    puVar5[3] = puVar5[5];
                    puVar5[4] = puVar5[6];
                    puVar5[5] = puVar5[7];
                    puVar5[6] = puVar5[8];
                    puVar5[7] = puVar5[9];
                    puVar5[8] = puVar5[10];
                    puVar5[9] = puVar5[0xb];
                    puVar5[10] = puVar5[0xc];
                    puVar5[0xb] = puVar5[0xd];
                    puVar5[0xc] = puVar5[0xe];
                    puVar5[0xd] = puVar5[0xf];
                    puVar9 = puVar5 + 0x10;
                    puVar5[0xe] = *puVar9;
                    puVar5[0xf] = puVar5[0x11];
                    puVar5 = puVar9;
                  } while (puVar9 < puVar8);
                }
                uVar4 = *(uint *)(puVar10 + 4);
              }
              uVar4 = uVar4 - 1;
              *(uint *)(puVar10 + 4) = uVar4;
            }
            puVar8 = (undefined8 *)puVar10[3];
          } while (puVar8 + (ulong)uVar4 * 2 != puVar6);
        }
        if ((puVar8 != (undefined8 *)0x0) && (uVar4 == 0)) {
          *(undefined4 *)(puVar10 + 4) = 0;
          FUN_00404870(*(undefined4 *)puVar2,puVar8);
          puVar8 = (undefined8 *)0x0;
          puVar10[3] = 0;
          *(undefined4 *)((long)puVar10 + 0x24) = 0;
        }
        if ((*(char *)(puVar10 + 2) != '\0') || (*(int *)(puVar10 + 4) != 0)) break;
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar10 + 4) = 0;
          FUN_00404870(*(undefined4 *)puVar2,puVar8);
          puVar10[3] = 0;
          *(undefined4 *)((long)puVar10 + 0x24) = 0;
        }
        puVar8 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
        if (puVar10 < puVar8) {
          *(undefined1 *)(puVar10 + 5) = *(undefined1 *)(puVar10 + 0xb);
          puVar10[1] = puVar10[7];
          *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar10 + 8);
          puVar10[3] = puVar10[9];
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar10 + 10);
          *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)((long)puVar10 + 0x54);
          puVar10[9] = 0;
          puVar10[10] = 0;
          if (puVar10 + 6 < puVar8) {
            puVar6 = puVar10 + 9;
            do {
              *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(puVar6 + 8);
              puVar6[-2] = puVar6[4];
              *(undefined1 *)(puVar6 + -1) = *(undefined1 *)(puVar6 + 5);
              puVar9 = puVar6 + 6;
              *puVar6 = *puVar9;
              uVar1 = *(undefined4 *)(puVar6 + 7);
              puVar6[7] = 0;
              *(undefined4 *)(puVar6 + 1) = uVar1;
              *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)((long)puVar6 + 0x3c);
              puVar5 = puVar6 + 3;
              *puVar9 = 0;
              puVar6 = puVar9;
            } while (puVar5 < puVar8);
          }
        }
        (**(code **)*puVar8)(puVar8);
        uVar4 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar4;
        if ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 0x30) == puVar10)
        goto LAB_0046f0c8;
      }
      uVar4 = *(uint *)(param_1 + 0x20);
      puVar10 = puVar10 + 6;
    } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 0x30) != puVar10);
  }
LAB_0046f0c8:
  return *(char *)(param_1 + 0x10) == '\0' && uVar4 == 0;
}


