/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f2d80; name: FUN_004f2d80
 */


void FUN_004f2d80(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  char *__s;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  
  iVar8 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    iVar8 = *(int *)(*(long *)(param_2 + 0x10) + 8);
  }
  uVar4 = FUN_004e7d60(param_2,iVar8 + *(int *)(param_1 + 1));
  puVar3 = PTR_DAT_02713650;
  if (((uVar4 & 1) != 0) && (uVar6 = *(uint *)(param_1 + 1), uVar6 != 0)) {
    puVar9 = (undefined8 *)*param_1;
    puVar12 = puVar9;
    do {
      while (*(uint *)(puVar12 + 0x10) - 1 < 4) {
        lVar7 = 0;
        while ((uint)lVar7 < *(uint *)(puVar12 + 0x10)) {
          lVar2 = lVar7 + 0xc;
          lVar7 = lVar7 + 1;
          if (puVar12[lVar2] == 0) goto LAB_004f2e20;
        }
        lVar7 = *(long *)(param_2 + 0x10);
        if (lVar7 == 0) {
LAB_004f2e60:
          puVar13 = (uint *)0x0;
        }
        else {
          uVar6 = *(uint *)(lVar7 + 8);
          if (*(uint *)(param_2 + 8) <= uVar6) goto LAB_004f2e60;
          *(uint *)(lVar7 + 8) = uVar6 + 1;
          puVar13 = (uint *)(lVar7 + (ulong)uVar6 * 0x40 + 0x10);
        }
        uVar6 = *(uint *)(puVar12 + 1);
        *(undefined8 *)(puVar13 + 1) = *puVar12;
        puVar13[3] = uVar6;
        puVar13[4] = 0x3f800000;
        puVar13[5] = 0x3f800000;
        uVar6 = *(uint *)(puVar12[(ulong)(*(int *)(puVar12 + 0x10) - 1) + 0xc] + 0x68);
        if (uVar6 == 0) {
          puVar13[0xe] = 0;
          puVar13[0xf] = 0;
          puVar13[0xc] = 0;
          iVar8 = *(int *)(puVar12 + 0x10);
        }
        else {
          uVar11 = *(uint *)(*(long *)puVar3 + 0x18);
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar6 / uVar11;
          }
          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0x10) + (ulong)(uVar6 - uVar1 * uVar11) * 8
                            );
          do {
            plVar10 = (long *)*plVar10;
          } while (*(uint *)(plVar10 + 1) != uVar6);
          __s = (char *)plVar10[2];
          *(char **)(puVar13 + 0xe) = __s;
          uVar6 = 0;
          if (__s != (char *)0x0) {
            sVar5 = strlen(__s);
            uVar6 = (uint)sVar5;
          }
          puVar13[0xc] = uVar6;
          iVar8 = *(int *)(puVar12 + 0x10);
        }
        uVar6 = 0x811c9dc5;
        if (iVar8 == 0) {
          uVar11 = 0;
        }
        else {
          uVar4 = 0;
          do {
            puVar13[uVar4 + 7] = *(uint *)(puVar12[uVar4 + 0xc] + 0x60);
            lVar7 = puVar12[uVar4 + 0xc];
            uVar6 = (((((((uVar6 * 0x1000193 ^ (uint)*(byte *)(lVar7 + 0x58)) * 0x1000193 ^
                         (uint)*(byte *)(lVar7 + 0x59)) * 0x1000193 ^ (uint)*(byte *)(lVar7 + 0x5a))
                        * 0x1000193 ^ (uint)*(byte *)(lVar7 + 0x5b)) * 0x1000193 ^
                      (uint)*(byte *)(lVar7 + 0x5c)) * 0x1000193 ^ (uint)*(byte *)(lVar7 + 0x5d)) *
                     0x1000193 ^ (uint)*(byte *)(lVar7 + 0x5e)) * 0x1000193 ^
                    (uint)*(byte *)(lVar7 + 0x5f);
            uVar11 = *(uint *)(puVar12 + 0x10);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar11);
        }
        puVar13[6] = uVar11;
        *puVar13 = uVar6;
        puVar9 = (undefined8 *)*param_1;
        uVar6 = *(uint *)(param_1 + 1);
        puVar12 = puVar12 + 0x12;
        if (puVar12 == puVar9 + (ulong)uVar6 * 0x12) {
          return;
        }
      }
LAB_004f2e20:
      puVar12 = puVar12 + 0x12;
    } while (puVar12 != puVar9 + (ulong)uVar6 * 0x12);
  }
  return;
}


