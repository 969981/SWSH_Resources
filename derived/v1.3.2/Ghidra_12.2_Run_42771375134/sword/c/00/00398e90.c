/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398e90; name: FUN_00398e90
 */


void FUN_00398e90(long param_1,float *param_2,long param_3,ulong param_4)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  
  pfVar5 = *(float **)(param_3 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
LAB_00398ea8:
  pfVar3 = param_2;
  uVar4 = param_4 & 0xffffffff;
  uVar2 = (uint)pfVar3[6] >> 1;
  param_4 = (ulong)uVar2;
  param_2 = (float *)(lVar6 + param_4 * 0x1c);
  if (((*param_2 <= *pfVar5) && (*(float *)(lVar6 + param_4 * 0x1c + 4) <= pfVar5[1])) &&
     (*(float *)(lVar6 + param_4 * 0x1c + 8) <= pfVar5[2])) goto code_r0x00398ef0;
  goto LAB_00398f2c;
code_r0x00398ef0:
  if (((*(float *)(lVar6 + param_4 * 0x1c + 0xc) < pfVar5[3]) ||
      (*(float *)(lVar6 + param_4 * 0x1c + 0x10) < pfVar5[4])) ||
     (*(float *)(lVar6 + param_4 * 0x1c + 0x14) < pfVar5[5])) {
LAB_00398f2c:
    pfVar1 = (float *)0x0;
    if (param_2 != (float *)0x0) {
      pfVar1 = param_2 + 7;
    }
    if (((*pfVar5 < *pfVar1) || (pfVar5[1] < pfVar1[1])) ||
       ((pfVar5[2] < pfVar1[2] ||
        (((pfVar1[3] < pfVar5[3] || (pfVar1[4] < pfVar5[4])) || (pfVar1[5] < pfVar5[5])))))) {
      if (((uint)pfVar3[6] & 1) == 0) {
        FUN_00398a80(param_1,pfVar3,param_3,uVar4);
        return;
      }
      FUN_00398780(param_1,pfVar3,param_3,uVar4);
      return;
    }
    param_4 = (ulong)(uVar2 + 1);
    param_2 = pfVar1;
  }
  goto LAB_00398ea8;
}


