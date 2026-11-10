/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006203f0; name: FUN_006203f0
 */


void FUN_006203f0(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  
  if ((ulong)param_1[6] < 0xffffffff) {
    uVar5 = param_1[8];
    uVar1 = param_1[9];
    if (uVar5 < uVar1) {
      uVar6 = param_1[6] + 1;
      do {
        while( true ) {
          pbVar10 = (byte *)(param_1[3] + 0x14 + uVar5 * 0xc);
          uVar3 = (ulong)pbVar10[-4] << 0x18 | (ulong)pbVar10[-3] << 0x10 | (ulong)pbVar10[-2] << 8
                  | (ulong)pbVar10[-1];
          uVar8 = (ulong)*pbVar10 << 0x18 | (ulong)pbVar10[1] << 0x10 | (ulong)pbVar10[2] << 8 |
                  (ulong)pbVar10[3];
          uVar7 = uVar3;
          if (uVar3 <= uVar6) {
            uVar7 = uVar6;
          }
          uVar6 = uVar7;
          if (uVar8 < uVar7) break;
          uVar4 = (ulong)pbVar10[4] << 0x18 | (ulong)pbVar10[5] << 0x10 | (ulong)pbVar10[6] << 8 |
                  (ulong)pbVar10[7];
          uVar9 = ((int)uVar4 + (int)uVar7) - (int)uVar3;
          uVar3 = (uVar3 + 0xffffffff) - uVar7;
          do {
            uVar6 = uVar7;
            if (uVar3 < uVar4) goto LAB_006204f4;
            if (uVar9 != 0) {
              if (uVar9 < *(uint *)(*param_1 + 0x20)) {
                param_1[6] = uVar7;
                *(uint *)(param_1 + 7) = uVar9;
                param_1[8] = uVar5;
                return;
              }
              goto LAB_006204f4;
            }
            if (0xfffffffe < uVar7) goto LAB_00620504;
            uVar6 = uVar7 + 1;
            uVar9 = 1;
            uVar3 = uVar3 - 1;
            bVar2 = uVar7 < uVar8;
            uVar7 = uVar6;
          } while (bVar2);
          uVar5 = uVar5 + 1;
          if (uVar1 <= uVar5) goto LAB_00620504;
        }
LAB_006204f4:
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
  }
LAB_00620504:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


