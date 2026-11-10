/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004726e0; name: FUN_004726e0
 */


bool FUN_004726e0(long param_1,code *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6,ulong param_7)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar6 = (*param_2)(param_1 + 8,param_4,param_6), (uVar6 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar4 = PTR_DAT_02712a90;
  uVar6 = *param_3;
  if (uVar6 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = puVar13[5];
        uVar6 = FUN_004729a0(puVar13,param_2,param_3 + 1,param_4,param_5 + 1,param_6,1);
        if ((uVar6 & 1) == 0) {
          uVar7 = *(uint *)(param_1 + 0x20);
          puVar13 = puVar13 + 6;
        }
        else {
          FUN_0046e730(puVar13);
          puVar14 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          puVar3 = puVar13;
          while (puVar3 < puVar14) {
            puVar3[5] = puVar3[0xb];
            puVar8 = (undefined8 *)puVar3[3];
            puVar3[1] = puVar3[7];
            *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar3 + 8);
            if (puVar8 != (undefined8 *)0x0) {
              if (*(uint *)(puVar3 + 4) != 0) {
                lVar10 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
                do {
                  (**(code **)*puVar8)(puVar8);
                  lVar10 = lVar10 + -0x30;
                  puVar8 = puVar8 + 6;
                } while (lVar10 != 0);
                puVar8 = (undefined8 *)puVar3[3];
              }
              *(undefined4 *)(puVar3 + 4) = 0;
              FUN_00404870(*(undefined4 *)puVar4,puVar8);
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
          (**(code **)*puVar14)(puVar14);
          uVar7 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar7;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar7 * 0x30) != puVar13);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar9) {
      lVar10 = *(long *)(param_1 + 0x18);
      iVar11 = 0;
      do {
        while( true ) {
          iVar2 = iVar9 - iVar11;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar11 + (iVar2 >> 1);
          uVar12 = *(ulong *)(lVar10 + (long)iVar2 * 0x30 + 0x28);
          if (uVar6 < uVar12) break;
          if (uVar6 <= uVar12) {
            lVar10 = lVar10 + (long)iVar2 * 0x30;
            if (lVar10 != 0) {
              *param_5 = uVar6;
              uVar6 = FUN_004729a0(lVar10,param_2,param_3 + 1,param_4,param_5 + 1,param_6,1);
              if ((uVar6 & 1) != 0) {
                FUN_0046e730(lVar10);
                FUN_00471a80((long *)(param_1 + 0x18),*param_3);
                cVar1 = *(char *)(param_1 + 0x10);
                goto joined_r0x0047296c;
              }
            }
            goto LAB_00472910;
          }
          iVar11 = iVar2 + 1;
          if (iVar9 < iVar11) goto LAB_00472910;
        }
        iVar9 = iVar2 + -1;
      } while (iVar11 <= iVar9);
    }
  }
LAB_00472910:
  cVar1 = *(char *)(param_1 + 0x10);
joined_r0x0047296c:
  if (cVar1 == '\0') {
    bVar5 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


