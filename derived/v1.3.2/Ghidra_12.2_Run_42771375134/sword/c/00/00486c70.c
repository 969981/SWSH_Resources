/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00486c70; name: FUN_00486c70
 */


void FUN_00486c70(long param_1,long param_2,ulong *param_3,uint param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_02712b50;
  uVar13 = 0;
  lVar12 = param_1;
  if ((*(uint *)(param_1 + 0x9c) & 0x20000) == 0) {
    lVar12 = 0;
  }
  puVar2 = PTR_DAT_02712b50;
  if (((*(uint *)(param_1 + 0x9c) >> 0x11 & 1) == 0) && (param_1 != 0)) {
    uVar13 = 0;
    if ((param_4 & 1) == 0) {
LAB_00486ecc:
      do {
        puVar2 = PTR_DAT_02712b50;
        if ((*param_3 & (uVar13 ^ 0xffffffffffffffff)) == 0) break;
        lVar14 = *(long *)(param_1 + 0x38);
        if (lVar14 != 0) {
          uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
          if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
            puVar5 = *(undefined8 **)(param_1 + 0x38);
          }
          else {
            *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
            puVar5 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 0)) {
            FUN_0049e070(*(undefined8 *)puVar3,param_1 + 0x30,*puVar5);
          }
        }
        lVar14 = *(long *)(param_1 + 0x28);
        if (lVar14 != 0) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if (uVar7 != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x10);
            uVar6 = 0;
            uVar4 = (ulong)uVar7 * 0x10 - 0x11;
            puVar5 = puVar10;
LAB_00486f4c:
            if (puVar10[uVar6 * 2 + 1] != param_2) goto code_r0x00486f5c;
            if (puVar5 < puVar10 + (ulong)uVar7 * 2 + -2) {
              uVar8 = (uint)(uVar4 >> 4) & 0xfffffff;
              if ((uVar8 + 1 & 3) != 0) {
                lVar11 = -((ulong)(uVar8 + 1) & 3);
                puVar9 = puVar5;
                do {
                  puVar5 = puVar9 + 2;
                  *puVar9 = *puVar5;
                  puVar9[1] = puVar9[3];
                  lVar11 = lVar11 + 1;
                  puVar9 = puVar5;
                } while (lVar11 != 0);
              }
              if (0x2f < uVar4) {
                do {
                  *puVar5 = puVar5[2];
                  puVar5[1] = puVar5[3];
                  puVar5[2] = puVar5[4];
                  puVar5[3] = puVar5[5];
                  puVar5[4] = puVar5[6];
                  puVar5[5] = puVar5[7];
                  puVar9 = puVar5 + 8;
                  puVar5[6] = *puVar9;
                  puVar5[7] = puVar5[9];
                  puVar5 = puVar9;
                } while (puVar9 < puVar10 + (ulong)uVar7 * 2 + -2);
              }
              uVar7 = *(uint *)(lVar14 + 0x18);
            }
            *(uint *)(lVar14 + 0x18) = uVar7 - 1;
            lVar14 = *(long *)(param_1 + 0x48);
            goto joined_r0x00487038;
          }
        }
LAB_00486f70:
        lVar14 = *(long *)(param_1 + 0x48);
joined_r0x00487038:
        if (lVar14 != 0) {
          uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
          if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
            puVar5 = *(undefined8 **)(param_1 + 0x48);
          }
          else {
            *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
            puVar5 = *(undefined8 **)(param_1 + 0x48);
          }
          if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 0)) {
            FUN_0049e070(*(undefined8 *)puVar3,param_1 + 0x40,*puVar5);
            puVar1 = (uint *)(param_1 + 0x98);
            param_1 = *(long *)(param_1 + 0x78);
            uVar13 = uVar13 | (ulong)*puVar1 << 0x11;
            puVar2 = PTR_DAT_02712b50;
            if (param_1 == 0) break;
            goto LAB_00486ecc;
          }
        }
        puVar1 = (uint *)(param_1 + 0x98);
        param_1 = *(long *)(param_1 + 0x78);
        uVar13 = uVar13 | (ulong)*puVar1 << 0x11;
        puVar2 = PTR_DAT_02712b50;
      } while (param_1 != 0);
    }
    else {
LAB_00486cc4:
      do {
        puVar2 = PTR_DAT_02712b50;
        if ((*param_3 & (uVar13 ^ 0xffffffffffffffff)) == 0) break;
        lVar14 = *(long *)(param_1 + 0x38);
        if (lVar14 != 0) {
          uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
          if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
            puVar5 = *(undefined8 **)(param_1 + 0x38);
          }
          else {
            *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
            puVar5 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 0)) {
            FUN_0049e070(*(undefined8 *)puVar3,param_1 + 0x30,*puVar5);
          }
        }
        lVar14 = *(long *)(param_1 + 0x28);
        if (lVar14 != 0) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if (uVar7 != 0) {
            puVar10 = *(undefined8 **)(lVar14 + 0x10);
            uVar6 = 0;
            uVar4 = (ulong)uVar7 * 0x10 - 0x11;
            puVar5 = puVar10;
LAB_00486d44:
            if (puVar10[uVar6 * 2 + 1] != param_2) goto code_r0x00486d54;
            if (puVar5 < puVar10 + (ulong)uVar7 * 2 + -2) {
              uVar8 = (uint)(uVar4 >> 4) & 0xfffffff;
              if ((uVar8 + 1 & 3) != 0) {
                lVar11 = -((ulong)(uVar8 + 1) & 3);
                puVar9 = puVar5;
                do {
                  puVar5 = puVar9 + 2;
                  *puVar9 = *puVar5;
                  puVar9[1] = puVar9[3];
                  lVar11 = lVar11 + 1;
                  puVar9 = puVar5;
                } while (lVar11 != 0);
              }
              if (0x2f < uVar4) {
                do {
                  *puVar5 = puVar5[2];
                  puVar5[1] = puVar5[3];
                  puVar5[2] = puVar5[4];
                  puVar5[3] = puVar5[5];
                  puVar5[4] = puVar5[6];
                  puVar5[5] = puVar5[7];
                  puVar9 = puVar5 + 8;
                  puVar5[6] = *puVar9;
                  puVar5[7] = puVar5[9];
                  puVar5 = puVar9;
                } while (puVar9 < puVar10 + (ulong)uVar7 * 2 + -2);
              }
              uVar7 = *(uint *)(lVar14 + 0x18);
            }
            *(uint *)(lVar14 + 0x18) = uVar7 - 1;
            lVar14 = *(long *)(param_1 + 0x48);
            goto joined_r0x00486e84;
          }
        }
LAB_00486d68:
        lVar14 = *(long *)(param_1 + 0x48);
joined_r0x00486e84:
        if (lVar14 != 0) {
          uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
          if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
            puVar5 = *(undefined8 **)(param_1 + 0x48);
          }
          else {
            *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
            puVar5 = *(undefined8 **)(param_1 + 0x48);
          }
          if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 0)) {
            FUN_0049e070(*(undefined8 *)puVar3,param_1 + 0x40,*puVar5);
          }
        }
        uVar13 = uVar13 | (ulong)*(uint *)(param_1 + 0x98) << 0x11;
        puVar2 = PTR_DAT_02712b50;
        if (lVar12 != 0) {
          param_1 = *(long *)(param_1 + 0x78);
          if (param_1 == 0) break;
          goto LAB_00486cc4;
        }
        lVar12 = *(long *)(param_1 + 0x80);
        param_1 = *(long *)(param_1 + 0x78);
      } while (param_1 != 0);
    }
  }
joined_r0x0048704c:
  do {
    puVar3 = PTR_DAT_02712b50;
    if ((lVar12 == 0) || ((*param_3 & ((uVar13 | 0x3800000100bf) ^ 0xffffc7fffffeff40)) == 0)) {
      PTR_DAT_02712b50 = puVar2;
      return;
    }
    lVar14 = *(long *)(lVar12 + 0x38);
    PTR_DAT_02712b50 = puVar2;
    if (lVar14 == 0) {
LAB_004870b8:
      lVar14 = *(long *)(lVar12 + 0x28);
    }
    else {
      uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
      if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
        puVar5 = *(undefined8 **)(lVar12 + 0x38);
      }
      else {
        *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
        puVar5 = *(undefined8 **)(lVar12 + 0x38);
      }
      if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 3) != 0)) goto LAB_004870b8;
      FUN_0049e070(*(undefined8 *)puVar3,lVar12 + 0x30,*puVar5);
      lVar14 = *(long *)(lVar12 + 0x28);
    }
    if (lVar14 != 0) {
      uVar7 = *(uint *)(lVar14 + 0x18);
      if (uVar7 != 0) {
        puVar10 = *(undefined8 **)(lVar14 + 0x10);
        uVar6 = 0;
        uVar4 = (ulong)uVar7 * 0x10 - 0x11;
        puVar5 = puVar10;
LAB_004870dc:
        if (puVar10[uVar6 * 2 + 1] != param_2) goto code_r0x004870ec;
        if (puVar5 < puVar10 + (ulong)uVar7 * 2 + -2) {
          uVar8 = (uint)(uVar4 >> 4) & 0xfffffff;
          if ((uVar8 + 1 & 3) != 0) {
            lVar11 = -((ulong)(uVar8 + 1) & 3);
            puVar9 = puVar5;
            do {
              puVar5 = puVar9 + 2;
              *puVar9 = *puVar5;
              puVar9[1] = puVar9[3];
              lVar11 = lVar11 + 1;
              puVar9 = puVar5;
            } while (lVar11 != 0);
          }
          if (0x2f < uVar4) {
            do {
              *puVar5 = puVar5[2];
              puVar5[1] = puVar5[3];
              puVar5[2] = puVar5[4];
              puVar5[3] = puVar5[5];
              puVar5[4] = puVar5[6];
              puVar5[5] = puVar5[7];
              puVar9 = puVar5 + 8;
              puVar5[6] = *puVar9;
              puVar5[7] = puVar5[9];
              puVar5 = puVar9;
            } while (puVar9 < puVar10 + (ulong)uVar7 * 2 + -2);
          }
          uVar7 = *(uint *)(lVar14 + 0x18);
        }
        *(uint *)(lVar14 + 0x18) = uVar7 - 1;
        lVar14 = *(long *)(lVar12 + 0x158);
        if (lVar14 != 0) goto LAB_004871cc;
        goto LAB_004871f4;
      }
    }
LAB_004871c4:
    lVar14 = *(long *)(lVar12 + 0x158);
    if (lVar14 == 0) {
LAB_004871f4:
      lVar14 = *(long *)(lVar12 + 0x48);
    }
    else {
LAB_004871cc:
      uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
      if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
        puVar5 = *(undefined8 **)(lVar12 + 0x158);
      }
      else {
        *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
        puVar5 = *(undefined8 **)(lVar12 + 0x158);
      }
      if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 3) != 0)) goto LAB_004871f4;
      FUN_0049e070(*(undefined8 *)puVar3,lVar12 + 0x150,*puVar5);
      lVar14 = *(long *)(lVar12 + 0x48);
    }
    if (lVar14 != 0) {
      uVar4 = FUN_004a4300(lVar14 + 0x10,param_2);
      if (((uVar4 & 1) == 0) || (*(int *)(lVar14 + 0x18) != 0)) {
        puVar5 = *(undefined8 **)(lVar12 + 0x48);
      }
      else {
        *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
        puVar5 = *(undefined8 **)(lVar12 + 0x48);
      }
      if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 0)) {
        FUN_0049e070(*(undefined8 *)puVar3,lVar12 + 0x40,*puVar5);
        puVar1 = (uint *)(lVar12 + 0x98);
        lVar12 = *(long *)(lVar12 + 0x80);
        uVar13 = uVar13 | (ulong)*puVar1 << 0x11;
        puVar2 = PTR_DAT_02712b50;
        PTR_DAT_02712b50 = puVar3;
        goto joined_r0x0048704c;
      }
    }
    puVar1 = (uint *)(lVar12 + 0x98);
    lVar12 = *(long *)(lVar12 + 0x80);
    uVar13 = uVar13 | (ulong)*puVar1 << 0x11;
    puVar2 = PTR_DAT_02712b50;
    PTR_DAT_02712b50 = puVar3;
  } while( true );
code_r0x00486f5c:
  uVar8 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar8;
  uVar4 = uVar4 - 0x10;
  puVar5 = puVar5 + 2;
  if (uVar7 <= uVar8) goto LAB_00486f70;
  goto LAB_00486f4c;
code_r0x00486d54:
  uVar8 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar8;
  uVar4 = uVar4 - 0x10;
  puVar5 = puVar5 + 2;
  if (uVar7 <= uVar8) goto LAB_00486d68;
  goto LAB_00486d44;
code_r0x004870ec:
  uVar8 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar8;
  uVar4 = uVar4 - 0x10;
  puVar5 = puVar5 + 2;
  if (uVar7 <= uVar8) goto LAB_004871c4;
  goto LAB_004870dc;
}


