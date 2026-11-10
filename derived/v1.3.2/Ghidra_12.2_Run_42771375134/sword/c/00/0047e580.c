/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047e580; name: FUN_0047e580
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0047e580(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
            float *param_6,long param_7,uint param_8,long *param_9)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  long *plVar5;
  byte *pbVar6;
  float *pfVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  
  uVar3 = param_3;
  if (((param_3 >> 6 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x98) & 0x1f000) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    uVar4 = FUN_004841f0(param_1,*param_5);
    *(undefined2 *)(param_2 + 0x84) = uVar4;
    uVar3 = param_3 & 0xffffffbf;
  }
  if ((param_3 & 1) != 0) {
    FUN_00452c80(param_1,param_2,0,param_5);
    if (((*(byte *)(param_2 + 0x1c) >> 1 & 1) == 0) &&
       (((*(byte *)(param_1 + 0xb1) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
      *(byte *)(param_2 + 0x1c) =
           *(byte *)(param_2 + 0x1c) & 0xfc | *(byte *)(param_1 + 0xb1) >> 5 & 1 | 2;
    }
    FUN_00452c80(param_1,param_2 + 0x18,6,param_5);
  }
  if ((param_3 >> 1 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 8,2,param_5);
  }
  if ((param_3 >> 2 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 0xc,3,param_5);
  }
  if ((param_3 >> 3 & 1) != 0) {
    FUN_00452c80(param_1,param_2 + 0x10,4,param_5);
  }
  if ((((param_3 >> 5 & 1) != 0) && (bVar1 = *(byte *)(param_2 + 0x24), (bVar1 & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x9a) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    if ((*(ulong **)(param_1 + 0x38) == (ulong *)0x0) ||
       ((**(ulong **)(param_1 + 0x38) & 1L << ((ulong)*(uint *)(PTR_DAT_02712b48 + 0x84) & 0x3f)) ==
        0)) {
      uVar12 = (ulong)local_78 >> 0x20;
      local_78 = CONCAT44((int)uVar12,*(undefined4 *)(PTR_DAT_02712b40 + 0x84));
      pbVar11 = *(byte **)(param_1 + 0x90);
      pbVar6 = pbVar11;
      if (pbVar11 != (byte *)0x0) {
        uVar12 = 0;
        pbVar6 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
        do {
          if (pbVar11[uVar12 + 1] == 0x21) goto LAB_0047e764;
          uVar12 = uVar12 + 1;
          pbVar6 = pbVar6 + 4;
        } while (uVar12 < *pbVar11);
        pbVar6 = (byte *)0x0;
      }
LAB_0047e764:
      pbVar11 = (byte *)&local_78;
      if (pbVar6 != (byte *)0x0) {
        pbVar11 = pbVar6;
      }
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)pbVar11;
    }
    else {
      uVar14 = FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,
                            (ulong)*(uint *)(PTR_DAT_02712b48 + 0x84),param_5);
      bVar1 = *(byte *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x20) = uVar14;
    }
    *(byte *)(param_2 + 0x24) = *(byte *)(param_1 + 0xb1) >> 5 & 2 | bVar1 & 0xfc | 1;
  }
  FUN_00483b40(param_1,param_2,param_4,param_5);
  if ((param_6 != (float *)0x0) && (pbVar6 = *(byte **)(param_1 + 0xa0), pbVar6 != (byte *)0x0)) {
    uVar12 = 0;
    pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
    do {
      if (pbVar6[uVar12 + 1] == 0) {
        if (pfVar7 == (float *)0x0) goto LAB_0047e86c;
        fVar15 = *pfVar7;
        fVar16 = pfVar7[1];
        if (fVar16 - fVar15 == 0.0) {
          fVar16 = 0.0;
        }
        else {
          lVar13 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_02712b80 = lVar13;
          fVar16 = (float)((double)(fVar16 - fVar15) * DAT_01cd53a0 *
                          (double)(uint)((ulong)lVar13 >> 0x21));
          fVar15 = *pfVar7;
        }
        *param_6 = fVar16 + fVar15 + *param_6;
        pbVar6 = *(byte **)(param_1 + 0xa0);
        break;
      }
      uVar12 = uVar12 + 1;
      pfVar7 = pfVar7 + 2;
    } while (uVar12 < *pbVar6);
    if (pbVar6 != (byte *)0x0) {
LAB_0047e86c:
      uVar12 = 0;
      pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
      do {
        if (pbVar6[uVar12 + 1] == 2) {
          if (pfVar7 == (float *)0x0) goto LAB_0047e928;
          fVar15 = *pfVar7;
          fVar16 = pfVar7[1];
          if (fVar16 - fVar15 == 0.0) {
            fVar16 = 0.0;
          }
          else {
            lVar13 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
            *(long *)PTR_DAT_02712b80 = lVar13;
            fVar16 = (float)((double)(fVar16 - fVar15) * DAT_01cd53a0 *
                            (double)(uint)((ulong)lVar13 >> 0x21));
            fVar15 = *pfVar7;
          }
          param_6[2] = fVar16 + fVar15 + param_6[2];
          pbVar6 = *(byte **)(param_1 + 0xa0);
          break;
        }
        uVar12 = uVar12 + 1;
        pfVar7 = pfVar7 + 2;
      } while (uVar12 < *pbVar6);
      if (pbVar6 != (byte *)0x0) {
LAB_0047e928:
        uVar12 = 0;
        pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
        do {
          if (pbVar6[uVar12 + 1] == 3) {
            if (pfVar7 == (float *)0x0) goto LAB_0047e9e4;
            fVar15 = *pfVar7;
            fVar16 = pfVar7[1];
            if (fVar16 - fVar15 == 0.0) {
              fVar16 = 0.0;
            }
            else {
              lVar13 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
              *(long *)PTR_DAT_02712b80 = lVar13;
              fVar16 = (float)((double)(fVar16 - fVar15) * DAT_01cd53a0 *
                              (double)(uint)((ulong)lVar13 >> 0x21));
              fVar15 = *pfVar7;
            }
            param_6[3] = fVar16 + fVar15 + param_6[3];
            pbVar6 = *(byte **)(param_1 + 0xa0);
            break;
          }
          uVar12 = uVar12 + 1;
          pfVar7 = pfVar7 + 2;
        } while (uVar12 < *pbVar6);
        if (pbVar6 != (byte *)0x0) {
LAB_0047e9e4:
          uVar12 = 0;
          pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
          do {
            if (pbVar6[uVar12 + 1] == 4) {
              if (pfVar7 == (float *)0x0) goto LAB_0047eaa0;
              fVar15 = *pfVar7;
              fVar16 = pfVar7[1];
              if (fVar16 - fVar15 == 0.0) {
                fVar16 = 0.0;
              }
              else {
                lVar13 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
                *(long *)PTR_DAT_02712b80 = lVar13;
                fVar16 = (float)((double)(fVar16 - fVar15) * DAT_01cd53a0 *
                                (double)(uint)((ulong)lVar13 >> 0x21));
                fVar15 = *pfVar7;
              }
              param_6[4] = fVar16 + fVar15 + param_6[4];
              pbVar6 = *(byte **)(param_1 + 0xa0);
              break;
            }
            uVar12 = uVar12 + 1;
            pfVar7 = pfVar7 + 2;
          } while (uVar12 < *pbVar6);
          if (pbVar6 != (byte *)0x0) {
LAB_0047eaa0:
            uVar12 = 0;
            pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
            do {
              if (pbVar6[uVar12 + 1] == 6) {
                if (pfVar7 != (float *)0x0) {
                  fVar15 = *pfVar7;
                  fVar16 = pfVar7[1];
                  if (fVar16 - fVar15 == 0.0) {
                    fVar16 = 0.0;
                  }
                  else {
                    lVar13 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
                    *(long *)PTR_DAT_02712b80 = lVar13;
                    fVar16 = (float)((double)(fVar16 - fVar15) * DAT_01cd53a0 *
                                    (double)(uint)((ulong)lVar13 >> 0x21));
                    fVar15 = *pfVar7;
                  }
                  param_6[1] = fVar16 + fVar15 + param_6[1];
                }
                break;
              }
              uVar12 = uVar12 + 1;
              pfVar7 = pfVar7 + 2;
            } while (uVar12 < *pbVar6);
          }
        }
      }
    }
  }
  if ((*(char *)(param_2 + 0x82) == '\0') &&
     (((*(ushort *)(param_1 + 0x9a) & 0xc3c0) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(undefined1 *)(param_2 + 0x82) = 1;
    if (*(long *)(param_1 + 0x88) == 0) {
      if ((*(uint *)(param_1 + 0x98) & 0xc3c00000) != 0) {
        *(undefined8 *)(param_2 + 0x6c) = 0;
        *(undefined8 *)(param_2 + 100) = 0;
        *(undefined8 *)(param_2 + 0x5c) = 0;
        *(undefined8 *)(param_2 + 0x54) = 0;
        *(undefined8 *)(param_2 + 0x4c) = 0;
        *(undefined8 *)(param_2 + 0x44) = 0;
        *(undefined8 *)(param_2 + 0x3c) = 0;
        *(undefined8 *)(param_2 + 0x34) = 0;
      }
      goto LAB_0047ece0;
    }
    FUN_00452c80(param_1,param_2 + 0x34,0x13,param_5);
    FUN_00452c80(param_1,param_2 + 0x38,0x14,param_5);
    FUN_00452c80(param_1,param_2 + 0x3c,0x15,param_5);
    FUN_00452c80(param_1,param_2 + 0x40,0x16,param_5);
    FUN_00452c80(param_1,param_2 + 0x44,0x3c,param_5);
    FUN_00452c80(param_1,param_2 + 0x48,0x3d,param_5);
    FUN_00452c80(param_1,param_2 + 0x4c,0x3e,param_5);
    FUN_00452c80(param_1,param_2 + 0x50,0x3f,param_5);
    FUN_00452c80(param_1,param_2 + 0x54,0x40,param_5);
    FUN_00452c80(param_1,param_2 + 0x58,0x41,param_5);
    FUN_00452c80(param_1,param_2 + 0x5c,0x42,param_5);
    FUN_00452c80(param_1,param_2 + 0x60,0x43,param_5);
    *(undefined4 *)(param_2 + 100) = **(undefined4 **)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 8);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xc);
    cVar2 = *(char *)(param_2 + 0x81);
  }
  else {
LAB_0047ece0:
    cVar2 = *(char *)(param_2 + 0x81);
  }
  if ((cVar2 == '\0') &&
     (((*(byte *)(param_1 + 0x9a) >> 5 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(undefined1 *)(param_2 + 0x81) = 1;
    FUN_00452c80(param_1,param_2 + 0x74,0x17,param_5);
    FUN_00452c80(param_1,param_2 + 0x78,0x44,param_5);
    FUN_00452c80(param_1,param_2 + 0x7c,0x45,param_5);
    *(byte *)(param_2 + 0x80) = (byte)(*(uint *)(param_1 + 0x9c) >> 0x12) & 1;
  }
  if (((param_7 != 0) && (*(long *)(param_1 + 0x38) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x20) != '\0')) {
    local_78 = param_1 + 0x30;
    local_68 = 2;
    lStack_70 = param_1;
    FUN_00477770(*(undefined8 *)PTR_DAT_02712dc0,&local_78,param_7);
  }
  if ((*(char *)(param_2 + 0x83) == '\0') && (*(long *)(param_1 + 0x80) != 0)) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    FUN_00484190(param_1,param_2,param_5);
    *(undefined1 *)(param_2 + 0x83) = 1;
  }
  if (((param_8 & 1) == 0) || (plVar5 = *(long **)(param_1 + 0x80), plVar5 == (long *)0x0)) {
    plVar5 = *(long **)(param_1 + 0x78);
    if ((plVar5 == (long *)0x0) || (plVar5 == param_9)) goto LAB_0047ee70;
    pcVar9 = *(code **)(*plVar5 + 0x150);
    param_8 = param_8 & 1;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x78);
    if ((plVar8 != (long *)0x0) && (plVar8 != param_9)) {
      (**(code **)(*plVar8 + 0x150))(plVar8,param_2,uVar3,param_4,param_5,param_6,param_7,0,param_9)
      ;
      plVar5 = *(long **)(param_1 + 0x80);
    }
    pcVar9 = *(code **)(*plVar5 + 0x150);
    param_8 = 0;
  }
  (*pcVar9)(plVar5,param_2,uVar3,param_4,param_5,param_6,param_7,param_8,param_9);
LAB_0047ee70:
  puVar10 = *(undefined8 **)(param_1 + 0xa8);
  if ((puVar10 != (undefined8 *)0x0) && (*(uint *)(puVar10 + 1) != 0)) {
    lVar13 = (ulong)*(uint *)(puVar10 + 1) << 3;
    puVar10 = (undefined8 *)*puVar10;
    do {
      FUN_00466720(*puVar10,param_1,param_2,uVar3,param_4,param_5,param_7);
      lVar13 = lVar13 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  return 1;
}


