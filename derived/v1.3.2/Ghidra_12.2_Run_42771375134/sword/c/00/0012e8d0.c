/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012e8d0; name: FUN_0012e8d0
 */


void FUN_0012e8d0(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,uint param_5)

{
  size_t __n;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  void *__src;
  long lVar12;
  void *__s;
  uint uVar13;
  uint uVar14;
  void *__dest;
  size_t __n_00;
  size_t __n_01;
  void *pvVar15;
  
  bVar3 = *(byte *)(param_1 + 3);
  __n_00 = (ulong)bVar3 * 0x10;
  __n_01 = (ulong)*(byte *)((long)param_1 + 0x19) * 0x30;
  __n = __n_01 + __n_00;
  if ((int)__n == 0) goto LAB_0012eb18;
  pvVar9 = (void *)*param_1;
  uVar14 = (uint)bVar3;
  uVar13 = uVar14 * 4;
  if (*(long *)(param_3 + 0x1c38) == 0) {
    uVar2 = uVar13 + (int)__n + 0xf & 0xfff0;
    if (uVar2 < 0x4001) {
      if (*(long *)(param_3 + 0x208) != 0) {
        uVar6 = *(uint *)(param_3 + 0x210) + uVar2;
        if (uVar6 < 0x4001) {
          pvVar15 = (void *)(*(long *)(param_3 + 0x208) + (ulong)*(uint *)(param_3 + 0x210));
          *(uint *)(param_3 + 0x210) = uVar6;
          goto LAB_0012ead4;
        }
      }
      pvVar15 = (void *)FUN_00112220(*(undefined8 *)(param_3 + 0x200));
      *(uint *)(param_3 + 0x210) = uVar2;
      *(void **)(param_3 + 0x208) = pvVar15;
    }
    else {
      pvVar15 = (void *)FUN_00112050(*(undefined8 *)(param_3 + 0x200),uVar2);
    }
LAB_0012ead4:
    __s = (void *)0x0;
    if (uVar14 != 0) {
      __s = (void *)((long)pvVar15 + __n);
    }
    __dest = (void *)((long)pvVar15 + (ulong)*(byte *)((long)param_1 + 0x19) * 0x30);
    memcpy(pvVar15,pvVar9,__n);
  }
  else {
    __src = (void *)param_1[1];
    uVar6 = FUN_003ff4b0(*(long *)(param_3 + 0x1c38) + 8,__n_00);
    plVar10 = *(long **)(param_3 + 0x1c38);
    uVar14 = *(uint *)((long)plVar10 + 0xc);
    lVar11 = *plVar10;
    bVar4 = (uint)((int)plVar10[2] + (int)plVar10[1]) < uVar14;
    uVar7 = FUN_003ff4b0(*(long *)(param_3 + 0x1c40) + 8,__n_01);
    plVar10 = *(long **)(param_3 + 0x1c40);
    uVar2 = *(uint *)((long)plVar10 + 0xc);
    lVar12 = *plVar10;
    bVar5 = (uint)((int)plVar10[2] + (int)plVar10[1]) < uVar2;
    if (bVar3 == 0) {
      if (bVar4 && bVar5) {
        __s = (void *)0x0;
        goto LAB_0012ea98;
      }
    }
    else {
      uVar1 = (uint)bVar3 << 3;
      if ((param_5 & 1) == 0) {
        uVar1 = uVar13;
      }
      uVar8 = FUN_003ff4b0(*(long *)(param_3 + 0x1c48) + 8,uVar1);
      plVar10 = *(long **)(param_3 + 0x1c48);
      uVar13 = uVar1;
      if ((bVar4 && bVar5) &&
          (uint)((int)plVar10[2] + (int)plVar10[1]) < *(uint *)((long)plVar10 + 0xc)) {
        __s = (void *)((*plVar10 + (ulong)*(uint *)((long)plVar10 + 0xc)) - (uVar8 & 0xffffffff));
        uVar7 = uVar7 & 0xffffffff;
LAB_0012ea98:
        __dest = (void *)((lVar11 + (ulong)uVar14) - (ulong)uVar6);
        pvVar15 = (void *)((lVar12 + (ulong)uVar2) - (uVar7 & 0xffffffff));
        memcpy(pvVar15,pvVar9,__n_01);
        memcpy(__dest,__src,__n_00);
        uVar14 = uVar13;
        goto joined_r0x0012ea48;
      }
    }
    __s = (void *)0x0;
    __dest = (void *)0x0;
    pvVar15 = (void *)0x0;
    *(undefined2 *)(param_1 + 3) = 0;
    uVar14 = uVar13;
  }
joined_r0x0012ea48:
  if (uVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)uVar13);
  }
  *param_1 = pvVar15;
  param_1[1] = __dest;
  param_4 = param_4 & 0xffffffff;
  param_1[2] = __s;
LAB_0012eb18:
  if (*(short *)(param_2 + 1) != 0) {
    if ((*(byte *)((long)param_2 + 0xb) >> 1 & 1) == 0) {
      if ((param_4 & 1) != 0) {
        pvVar15 = (void *)*param_2;
        pvVar9 = (void *)FUN_0011c940(param_3 + 0x218,*(short *)(param_2 + 1) + 0xfU & 0xfff0);
        memcpy(pvVar9,pvVar15,(ulong)*(ushort *)(param_2 + 1));
        *param_2 = pvVar9;
      }
    }
    else {
      pvVar9 = (void *)FUN_0011c940(param_3 + 0x218);
      memcpy(pvVar9,(void *)*param_2,(ulong)*(ushort *)(param_2 + 1));
      *param_2 = pvVar9;
      *(byte *)((long)param_2 + 0xb) = *(byte *)((long)param_2 + 0xb) | 3;
    }
  }
  return;
}


