/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d190; name: FUN_0090d190
 */


void FUN_0090d190(long param_1,uint *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  short sVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar7 = FUN_00915450(*(undefined8 *)(param_1 + 0x210));
  if (param_4 != 0) {
    uVar14 = 0;
LAB_0090d1e8:
    uVar13 = (uint)uVar14;
    uVar9 = FUN_00915460(*(undefined8 *)(param_1 + 0x210));
    if ((uVar9 & 1) == 0) {
      iVar12 = -1;
      while( true ) {
        iVar8 = FUN_00915450(*(undefined8 *)(param_1 + 0x210));
        sVar5 = FUN_00915470(*(undefined8 *)(param_1 + 0x210),param_2 + uVar14 * 0x28 + 7,0x10,0);
        if (iVar12 == -1) {
          *(undefined1 *)(param_2 + uVar14 * 0x28 + 0x29) = 0;
          (param_2 + uVar14 * 0x28 + 0x25)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x25)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x27)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x27)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x21)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x21)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x23)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x23)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x1d)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x1d)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x1f)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x1f)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x19)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x19)[1] = 0;
          (param_2 + uVar14 * 0x28 + 0x1b)[0] = 0;
          (param_2 + uVar14 * 0x28 + 0x1b)[1] = 0;
        }
        if (sVar5 != 0xc0) break;
        uVar2 = param_2[uVar14 * 0x28 + 7];
        *(byte *)(param_2 + uVar14 * 0x28 + 0x29) = (byte)uVar2;
        if (((uVar2 & 0xf0) == 0) && ((uVar2 & 0xff) != 0)) {
          uVar9 = 0;
          do {
            uVar1 = uVar9 + 1;
            param_2[uVar14 * 0x28 + uVar9 + 0x19] = param_2[uVar14 * 0x28 + uVar9 + 8];
            uVar9 = uVar1;
          } while (uVar1 < (byte)param_2[uVar14 * 0x28 + 0x29]);
        }
        uVar9 = FUN_00915460(*(undefined8 *)(param_1 + 0x210));
        iVar12 = iVar8;
        if ((uVar9 & 1) != 0) goto LAB_0090d4fc;
      }
      if ((sVar5 != 0x87) && (sVar5 != 0xbe)) {
        if (sVar5 != 0xc1) {
          uVar9 = 0;
          do {
            if (*(short *)(param_3 + uVar9 * 2) == sVar5) {
              if (iVar12 != -1) {
                FUN_00918310(*(undefined8 *)(param_1 + 0x210),iVar12);
              }
              FUN_00918310(*(undefined8 *)(param_1 + 0x210),iVar8);
              uVar9 = 0;
              psVar4 = &DAT_0261a540;
              sVar3 = DAT_0261a510;
              goto joined_r0x0090d330;
            }
            uVar2 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar2;
          } while (uVar2 < param_4);
          goto joined_r0x0090d3d4;
        }
        goto LAB_0090d4f0;
      }
    }
    goto LAB_0090d4fc;
  }
  uVar14 = FUN_00915460(*(undefined8 *)(param_1 + 0x210));
  if ((uVar14 & 1) == 0) {
    iVar12 = -1;
    do {
      while( true ) {
        iVar8 = FUN_00915450(*(undefined8 *)(param_1 + 0x210));
        uVar6 = FUN_00915470(*(undefined8 *)(param_1 + 0x210),param_2 + 7,0x10,0);
        if (iVar12 == -1) break;
        if (0xbf < uVar6) goto LAB_0090d440;
LAB_0090d4b0:
        uVar13 = 0;
        if ((uVar6 == 0x87) || (uVar6 == 0xbe)) goto LAB_0090d4fc;
LAB_0090d4d0:
        uVar14 = FUN_00915460(*(undefined8 *)(param_1 + 0x210));
        iVar12 = -1;
        if ((uVar14 & 1) != 0) goto LAB_0090d3f0;
      }
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = 0;
      param_2[0x21] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x20] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      if (uVar6 < 0xc0) goto LAB_0090d4b0;
LAB_0090d440:
      if (uVar6 != 0xc0) {
        if (uVar6 == 0xc1) {
          uVar13 = 0;
LAB_0090d4f0:
          FUN_00918310(*(undefined8 *)(param_1 + 0x210),iVar8);
          goto LAB_0090d4fc;
        }
        goto LAB_0090d4d0;
      }
      uVar13 = param_2[7];
      *(char *)(param_2 + 0x29) = (char)uVar13;
      if (((uVar13 & 0xf0) == 0) && ((uVar13 & 0xff) != 0)) {
        uVar14 = 0;
        do {
          uVar9 = uVar14 + 1;
          param_2[uVar14 + 0x19] = param_2[uVar14 + 8];
          uVar14 = uVar9;
        } while (uVar9 < (byte)param_2[0x29]);
      }
      uVar14 = FUN_00915460(*(undefined8 *)(param_1 + 0x210));
      iVar12 = iVar8;
    } while ((uVar14 & 1) == 0);
  }
LAB_0090d3f0:
  uVar13 = 0;
LAB_0090d4fc:
  *param_2 = uVar13;
  FUN_00915680(*(undefined8 *)(param_1 + 0x210),uVar7);
  return;
joined_r0x0090d330:
  if (sVar3 == sVar5) goto LAB_0090d39c;
  if (psVar4[-0xc] == sVar5) {
    uVar9 = uVar9 | 1;
    goto LAB_0090d39c;
  }
  if (*psVar4 == sVar5) {
    uVar9 = uVar9 | 2;
    goto LAB_0090d39c;
  }
  if (0xbe < uVar9 + 3) {
    puVar10 = (undefined *)0x0;
    uVar11 = 0;
    goto LAB_0090d3b4;
  }
  if (psVar4[0xc] == sVar5) {
    uVar9 = uVar9 | 3;
    goto LAB_0090d39c;
  }
  uVar9 = uVar9 + 4;
  sVar3 = psVar4[0x18];
  psVar4 = psVar4 + 0x30;
  goto joined_r0x0090d330;
LAB_0090d39c:
  puVar10 = (&PTR_LAB_0261a518)[(uVar9 & 0xffffffff) * 3];
  uVar11 = (&DAT_0261a520)[(uVar9 & 0xffffffff) * 3];
LAB_0090d3b4:
  *(short *)(param_2 + uVar14 * 0x28 + 6) = sVar5;
  *(undefined **)(param_2 + uVar14 * 0x28 + 2) = puVar10;
  *(undefined8 *)(param_2 + uVar14 * 0x28 + 4) = uVar11;
  *(undefined1 *)(param_2 + uVar14 * 0x28 + 0x18) = 0;
  param_2[uVar14 * 0x28 + 0x17] = 0;
  uVar13 = uVar13 + 1;
  uVar14 = (ulong)uVar13;
joined_r0x0090d3d4:
  if (0xf < uVar13) goto LAB_0090d4fc;
  goto LAB_0090d1e8;
}


