/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965c50; name: FUN_00965c50
 */


void FUN_00965c50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  
  pcVar8 = (char *)(param_3[1] + 1);
  cVar10 = *pcVar8;
  if (cVar10 == '\0') {
    pbVar13 = (byte *)param_3[2];
    if ((uint)pbVar13[1] + (uint)*pbVar13 == 0) {
      cVar10 = '\0';
    }
    else {
      uVar12 = *param_3;
      uVar7 = param_3[3];
      uVar9 = 0;
      pbVar14 = pbVar13 + 6;
      do {
        uVar5 = FUN_009424e0(param_1,*pbVar14);
        uVar6 = FUN_009423e0(param_1);
        FUN_0092aff0(uVar6,uVar12,uVar5,uVar7);
        uVar9 = uVar9 + 1;
        pbVar14 = pbVar14 + 0xc;
      } while (uVar9 < (ulong)pbVar13[1] + (ulong)*pbVar13);
      pcVar8 = (char *)(param_3[1] + 1);
      cVar10 = *pcVar8;
    }
  }
  *pcVar8 = cVar10 + '\x01';
  pbVar13 = (byte *)param_3[2];
  bVar2 = *pbVar13;
  uVar11 = (ulong)bVar2;
  uVar12 = *param_3;
  pbVar14 = pbVar13 + 1;
  bVar1 = *pbVar14;
  uVar9 = (ulong)bVar1;
  if ((uint)bVar1 + (uint)bVar2 == 0) {
    if ((uint)bVar1 == -(uint)bVar2) {
      return;
    }
  }
  else {
    uVar15 = 0;
    pbVar14 = pbVar13 + 0xd;
    do {
      if ((*pbVar14 & 1) != 0) {
        uVar4 = FUN_008e0a00(uVar12);
        uVar7 = FUN_009423b0(param_1);
        FUN_00937850(uVar7,uVar4,0);
        uVar11 = (ulong)*pbVar13;
        uVar9 = (ulong)pbVar13[1];
      }
      uVar15 = uVar15 + 1;
      pbVar14 = pbVar14 + 0xc;
    } while (uVar15 < uVar11 + uVar9);
    pbVar13 = (byte *)param_3[2];
    pbVar14 = pbVar13 + 1;
    if ((uint)*pbVar14 == -(uint)*pbVar13) {
      return;
    }
  }
  uVar9 = 0;
  pbVar16 = pbVar13 + 6;
  do {
    uVar3 = *(undefined2 *)(pbVar16 + -2);
    bVar1 = *pbVar16;
    uVar12 = FUN_009423b0(param_1);
    FUN_00937800(uVar12,bVar1,2,uVar3);
    uVar9 = uVar9 + 1;
    pbVar16 = pbVar16 + 0xc;
  } while (uVar9 < (ulong)*pbVar14 + (ulong)*pbVar13);
  return;
}


