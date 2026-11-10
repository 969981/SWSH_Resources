/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088ffa0; name: FUN_0088ffa0
 */


long * FUN_0088ffa0(uint param_1,ulong param_2,long *param_3,size_t *param_4)

{
  size_t __size;
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long local_68;
  
  if ((param_1 & 1) == 0) {
    uVar4 = (int)param_1 >> 1;
    FUN_00890400(uVar4,param_2,0,&local_68);
    iVar2 = (param_1 & 0xfffffffe) + uVar4;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    __size = local_68 + (long)(iVar2 >> 1) * 8 + 0x18;
    if (param_4 == (size_t *)0x0) {
      param_3 = malloc(__size);
    }
    else {
      uVar6 = *param_4;
      *param_4 = __size;
      if (uVar6 < __size) goto LAB_0089001c;
    }
    if (param_3 != (long *)0x0) {
      plVar1 = param_3 + 3;
      *param_3 = (long)plVar1;
      param_3[1] = (long)plVar1 + local_68;
      param_3[2] = (long)plVar1 + local_68 + (long)(int)uVar4 * 8;
      FUN_00890400(uVar4,param_2 & 0xffffffff,plVar1,&local_68);
      dVar13 = DAT_01cd52c8;
      dVar12 = DAT_01cd5210;
      dVar10 = DAT_01cd5198;
      dVar11 = DAT_01cd4fd0;
      if (3 < (int)param_1) {
        dVar9 = (double)(int)uVar4;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 1;
        }
        lVar5 = (long)((ulong)uVar4 << 0x20) >> 0x21;
        if ((int)param_2 == 0) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            lVar8 = lVar8 + 1;
            dVar13 = dVar12 + dVar10 * (1.0 / dVar9) * (double)(int)lVar8;
            dVar11 = cos(dVar13);
            *(float *)(param_3[2] + lVar7) = (float)dVar11;
            dVar11 = sin(dVar13);
            lVar3 = param_3[2] + lVar7;
            lVar7 = lVar7 + 8;
            *(float *)(lVar3 + 4) = (float)dVar11;
          } while (lVar8 < lVar5);
        }
        else {
          lVar7 = 0;
          lVar8 = 0;
          do {
            lVar8 = lVar8 + 1;
            dVar12 = dVar13 + dVar11 * (1.0 / dVar9) * (double)(int)lVar8;
            dVar10 = cos(dVar12);
            *(float *)(param_3[2] + lVar7) = (float)dVar10;
            dVar10 = sin(dVar12);
            lVar3 = param_3[2] + lVar7;
            lVar7 = lVar7 + 8;
            *(float *)(lVar3 + 4) = (float)dVar10;
          } while (lVar8 < lVar5);
        }
      }
    }
  }
  else {
    fwrite("Real FFT optimization must be even.\n",0x24,1,*(FILE **)PTR_stderr_02716ee0);
LAB_0089001c:
    param_3 = (long *)0x0;
  }
  return param_3;
}


