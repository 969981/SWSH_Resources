/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c300; name: FUN_0042c300
 */


undefined8 FUN_0042c300(long param_1,byte param_2,uint param_3,void *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *__dest;
  long *plVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  
  uVar11 = *(uint *)(*(long *)PTR_DAT_02712d20 + 0x38);
  if (uVar11 != 0) {
    uVar1 = 0;
    if (uVar11 != 0) {
      uVar1 = (uint)param_1 / uVar11;
    }
    for (plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_02712d20 + 0x30) +
                            (ulong)((uint)param_1 - uVar1 * uVar11) * 8); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9[1] == param_1) {
        if (*(uint *)(plVar9[2] + 0x40) < 3) {
          return 0x1f;
        }
        lVar13 = *(long *)(*(long *)(plVar9[2] + 0x38) + 0x10);
        if (lVar13 == 0) {
          return 0x1f;
        }
        plVar9 = (long *)(lVar13 + 0x20);
        *(byte *)(lVar13 + 0x88) = param_2 & 1;
        if (*plVar9 != 0) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0;
          *plVar9 = 0;
        }
        if (param_4 == (void *)0x0) {
          return 1;
        }
        uVar11 = param_3 & 0xff;
        uVar12 = (ulong)uVar11;
        if ((param_3 & 0xff) == 0) {
          return 0x1f;
        }
        uVar1 = uVar11 + 3 >> 2;
        __dest = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar1 << 5,0x10);
        *plVar9 = (long)__dest;
        if (__dest == (void *)0x0) {
          return 2;
        }
        *(uint *)(lVar13 + 0x38) = param_3;
        *(void **)(lVar13 + 0x28) = __dest;
        *(ulong *)(lVar13 + 0x30) = (long)__dest + (ulong)(uVar1 << 4);
        memcpy(__dest,param_4,(ulong)(uVar11 << 2));
        memcpy(*(void **)(lVar13 + 0x30),*(void **)(lVar13 + 0x28),(ulong)(uVar11 << 2));
        fVar8 = DAT_01d4c714;
        fVar7 = DAT_01d4c46c;
        fVar6 = DAT_01d4c2ec;
        fVar5 = DAT_01d4c23c;
        fVar4 = DAT_01d4c1d8;
        fVar3 = DAT_01d4c158;
        fVar2 = DAT_01d4bda4;
        pfVar10 = *(float **)(lVar13 + 0x30);
        do {
          fVar14 = 0.0;
          if (fVar6 <= *pfVar10 * fVar3) {
            uVar11 = (uint)(fVar8 + fVar2 * *pfVar10);
            fVar14 = (float)(uVar11 & 0x7fffff | 0x3f800000);
            fVar14 = (fVar5 + fVar14 * (fVar4 + fVar7 * fVar14)) * (float)(uVar11 & 0xff800000);
          }
          uVar12 = uVar12 - 1;
          *pfVar10 = fVar14;
          pfVar10 = pfVar10 + 1;
        } while (uVar12 != 0);
        return 1;
      }
    }
  }
  return 0x1f;
}


