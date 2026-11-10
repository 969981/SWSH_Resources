/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479990; name: FUN_00479990
 */


void FUN_00479990(long *param_1,ulong *param_2,long param_3,long param_4,long param_5,uint *param_6,
                 uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    *param_6 = 0;
    *param_7 = 0;
    return;
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    if ((param_1[1] != 0) && ((int)param_1[3] != 0)) {
      pfVar5 = (float *)param_1[2];
      do {
        if ((1L << ((ulong)(uint)pfVar5[2] & 0x3f) & *param_2) != 0) {
          lVar6 = param_1[1];
          lVar8 = 0;
          if (*(long **)(lVar6 + 0x50) != (long *)0x0) {
            if (*(int *)(lVar6 + 0x78) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = **(long **)(lVar6 + 0x50);
              if (lVar8 != 0 && uVar4 < *param_6) {
                uVar7 = (ulong)uVar4;
                uVar4 = uVar4 + 1;
                *(long *)(param_5 + uVar7 * 8) = lVar8;
                *(undefined8 *)(param_3 + uVar7 * 8) = *(undefined8 *)pfVar5;
                goto LAB_00479a68;
              }
            }
          }
          if ((lVar8 == 0) && (uVar3 < *param_7)) {
            pfVar1 = (float *)(param_4 + (ulong)uVar3 * 8);
            uVar3 = uVar3 + 1;
            *pfVar1 = *pfVar5 + *(float *)(lVar6 + 0x70) * pfVar5[1];
            lVar8 = *(long *)(param_1[1] + 0x50);
            pfVar2 = (float *)(param_1[1] + 0x70);
            if (lVar8 != 0) {
              pfVar2 = (float *)(lVar8 + 0xc);
            }
            pfVar1[1] = *pfVar5 + *pfVar2 * pfVar5[1];
          }
        }
LAB_00479a68:
        pfVar5 = pfVar5 + 3;
      } while (pfVar5 != (float *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc));
    }
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      *param_6 = uVar4;
      *param_7 = uVar3;
      return;
    }
  } while( true );
}


