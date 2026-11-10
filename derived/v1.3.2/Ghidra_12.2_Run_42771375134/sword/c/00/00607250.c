/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00607250; name: FUN_00607250
 */


ulong FUN_00607250(long *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte local_24 [4];
  
  *param_2 = 0;
  lVar1 = param_1[2];
  if ((ulong)param_1[1] <= lVar1 + 3U) {
LAB_006072a8:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    pbVar3 = (byte *)(*param_1 + lVar1);
    if (pbVar3 == (byte *)0x0) {
      uVar2 = 0;
      goto LAB_006072f8;
    }
  }
  else {
    lVar1 = (*(code *)param_1[5])(param_1,lVar1,local_24,4);
    if (lVar1 != 4) goto LAB_006072a8;
    lVar1 = param_1[2];
    pbVar3 = local_24;
  }
  uVar2 = (ulong)*pbVar3 << 0x18 | (ulong)pbVar3[1] << 0x10 | (ulong)pbVar3[2] << 8 |
          (ulong)pbVar3[3];
LAB_006072f8:
  param_1[2] = lVar1 + 4;
  return uVar2;
}


