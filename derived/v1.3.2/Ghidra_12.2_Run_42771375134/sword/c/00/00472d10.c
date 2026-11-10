/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00472d10; name: FUN_00472d10
 */


bool FUN_00472d10(long param_1,code *param_2,uint *param_3,undefined8 param_4,uint *param_5,
                 undefined8 param_6,ulong param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar7 = (*param_2)(param_1 + 8,param_4,param_6), (uVar7 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar5 = PTR_DAT_02712a90;
  uVar8 = *param_3;
  if (uVar8 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(uint *)(puVar13 + 5);
        uVar7 = FUN_00472fd0(puVar13,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
        if ((uVar7 & 1) == 0) {
          uVar8 = *(uint *)(param_1 + 0x20);
          puVar13 = puVar13 + 6;
        }
        else {
          FUN_0046ec50(puVar13);
          puVar14 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          puVar4 = puVar13;
          while (puVar4 < puVar14) {
            *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar4 + 0xb);
            puVar9 = (undefined8 *)puVar4[3];
            puVar4[1] = puVar4[7];
            *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar4 + 8);
            if (puVar9 != (undefined8 *)0x0) {
              if (*(uint *)(puVar4 + 4) != 0) {
                lVar11 = (ulong)*(uint *)(puVar4 + 4) * 0x30;
                do {
                  (**(code **)*puVar9)(puVar9);
                  lVar11 = lVar11 + -0x30;
                  puVar9 = puVar9 + 6;
                } while (lVar11 != 0);
                puVar9 = (undefined8 *)puVar4[3];
              }
              *(undefined4 *)(puVar4 + 4) = 0;
              FUN_00404870(*(undefined4 *)puVar5,puVar9);
              puVar4[3] = 0;
              *(undefined4 *)((long)puVar4 + 0x24) = 0;
            }
            puVar4[3] = puVar4[9];
            *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 10);
            *(undefined4 *)((long)puVar4 + 0x24) = *(undefined4 *)((long)puVar4 + 0x54);
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4 = puVar4 + 6;
          }
          (**(code **)*puVar14)(puVar14);
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x30) != puVar13);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar10) {
      lVar11 = *(long *)(param_1 + 0x18);
      iVar12 = 0;
      do {
        while( true ) {
          iVar3 = iVar10 - iVar12;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar12 + (iVar3 >> 1);
          uVar1 = *(uint *)(lVar11 + (long)iVar3 * 0x30 + 0x28);
          if (uVar8 < uVar1) break;
          if (uVar8 <= uVar1) {
            lVar11 = lVar11 + (long)iVar3 * 0x30;
            if (lVar11 != 0) {
              *param_5 = uVar8;
              uVar7 = FUN_00472fd0(lVar11,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
              if ((uVar7 & 1) != 0) {
                FUN_0046ec50(lVar11);
                FUN_00471fc0((long *)(param_1 + 0x18),*param_3);
                cVar2 = *(char *)(param_1 + 0x10);
                goto joined_r0x00472f9c;
              }
            }
            goto LAB_00472f40;
          }
          iVar12 = iVar3 + 1;
          if (iVar10 < iVar12) goto LAB_00472f40;
        }
        iVar10 = iVar3 + -1;
      } while (iVar12 <= iVar10);
    }
  }
LAB_00472f40:
  cVar2 = *(char *)(param_1 + 0x10);
joined_r0x00472f9c:
  if (cVar2 == '\0') {
    bVar6 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


