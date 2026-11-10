/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d6d0; name: FUN_0077d6d0
 */


uint FUN_0077d6d0(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = *param_2;
    *param_1 = uVar2;
    uVar1 = uVar4;
    if (uVar2 == 0x10) {
      puVar5 = param_2 + 1;
      uVar2 = *puVar5;
      uVar3 = (ulong)uVar2;
      uVar1 = uVar2 + 1 & 7;
      puVar7 = param_1 + 1;
      *puVar7 = uVar2;
      if (uVar1 == 0) {
        puVar8 = param_2;
      }
      else {
        lVar6 = -(ulong)uVar1;
        do {
          puVar8 = puVar5;
          puVar5 = puVar8 + 1;
          lVar6 = lVar6 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar5;
        } while (lVar6 != 0);
      }
      if (6 < uVar2) {
        puVar7 = puVar7 + 4;
        puVar5 = puVar5 + -2;
        do {
          puVar7[-3] = puVar8[2];
          puVar7[-2] = puVar5[4];
          puVar7[-1] = puVar5[5];
          *puVar7 = puVar5[6];
          puVar7[1] = puVar5[7];
          puVar9 = puVar5 + 8;
          puVar7[2] = *puVar9;
          puVar8 = puVar5 + 9;
          puVar7[3] = *puVar8;
          puVar7[4] = puVar5[10];
          puVar7 = puVar7 + 8;
          puVar5 = puVar9;
        } while (param_2 + uVar3 != puVar9);
      }
      param_1 = param_1 + uVar3 + 2;
      uVar2 = *param_1;
      param_2 = param_2 + uVar3 + 2;
      uVar1 = uVar4 + (int)(uVar3 + 2);
    }
    if (uVar2 == 0) break;
    uVar4 = uVar1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (0x7ff < uVar4) {
      *param_1 = 0;
      return uVar1;
    }
  }
  return uVar1;
}


