/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062d050; name: FUN_0062d050
 */


ulong FUN_0062d050(long param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x4a8);
  if (uVar5 <= param_2) {
    *param_3 = 0;
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x4b0);
  if (*(short *)(param_1 + 0x186) == 0) {
    puVar2 = (undefined1 *)(lVar3 + (ulong)(param_2 << 1));
    uVar6 = (ulong)CONCAT11(*puVar2,puVar2[1]);
    if (puVar2 + 4 <= (undefined1 *)(lVar3 + uVar5 * 2)) {
      uVar6 = (ulong)CONCAT11(puVar2[2],puVar2[3]);
    }
    uVar4 = (ulong)CONCAT11(*puVar2,puVar2[1]) * 2;
    uVar6 = uVar6 << 1;
    uVar7 = *(ulong *)(param_1 + 0x460);
    if (uVar7 < uVar4) goto LAB_0062d174;
  }
  else {
    pbVar1 = (byte *)(lVar3 + (ulong)(param_2 << 2));
    uVar4 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
            (ulong)pbVar1[3];
    if ((byte *)(lVar3 + uVar5 * 4) < pbVar1 + 8) {
      uVar7 = *(ulong *)(param_1 + 0x460);
      uVar6 = uVar4;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x460);
      uVar6 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
              (ulong)pbVar1[7];
    }
    if (uVar7 < uVar4) goto LAB_0062d174;
  }
  if ((uVar6 <= uVar7) || (uVar6 = uVar7, uVar5 - 2 == (ulong)param_2)) {
    if (uVar4 <= uVar6) {
      uVar7 = uVar6;
    }
    *param_3 = (int)uVar7 - (int)uVar4;
    return uVar4;
  }
LAB_0062d174:
  *param_3 = 0;
  return 0;
}


