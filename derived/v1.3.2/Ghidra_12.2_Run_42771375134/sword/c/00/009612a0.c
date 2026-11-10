/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009612a0; name: FUN_009612a0
 */


void FUN_009612a0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  byte bVar15;
  char *pcVar16;
  uint uVar17;
  undefined8 uVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  undefined2 local_6c [2];
  char local_68 [4];
  ushort local_64 [2];
  
  local_68[0] = '\0';
  uVar18 = *param_3;
  puVar2 = (undefined4 *)param_3[2];
  uVar3 = param_3[3];
  param_2[0] = '\0';
  param_2[1] = '\0';
  FUN_0093b2e0(param_3[1]);
  lVar12 = FUN_0093b2f0(param_3[1]);
  if (lVar12 != 0) {
    uVar20 = 0;
    do {
      uVar13 = FUN_008e55a0(lVar12);
      if ((uVar13 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        uVar14 = FUN_009423e0(param_1);
        bVar4 = FUN_009267c0(uVar14,uVar18,lVar12,*puVar2);
        bVar4 = bVar4 ^ 1;
      }
      cVar5 = FUN_008e0a00(lVar12);
      param_2[uVar20 * 0xc + 6] = cVar5;
      uVar9 = *puVar2;
      uVar13 = FUN_00942670(param_1,0x100);
      if ((uVar13 & 1) == 0) {
LAB_0096139c:
        uVar14 = FUN_009423e0(param_1);
        bVar6 = FUN_009269b0(uVar14,uVar18,lVar12,uVar9,local_68);
      }
      else {
        uVar8 = FUN_008e0a00(lVar12);
        uVar8 = FUN_009425e0(param_1,uVar8);
        uVar14 = FUN_00942380(param_1);
        uVar13 = FUN_008f9370(uVar14,uVar8);
        if ((uVar13 & 1) == 0) goto LAB_0096139c;
        bVar6 = 0;
      }
      pbVar19 = (byte *)(param_2 + uVar20 * 0xc + 0xd);
      *pbVar19 = *pbVar19 & 0xfc | bVar6 & 1 | local_68[0] << 1;
      uVar9 = FUN_00960520(uVar3,param_2[uVar20 * 0xc + 6]);
      pcVar16 = param_2 + uVar20 * 0xc + 8;
      *(undefined4 *)(param_2 + uVar20 * 0xc + 8) = uVar9;
      bVar7 = FUN_00961590(param_1,uVar18,lVar12,puVar2,uVar9,*(undefined4 *)(param_3 + 4),
                           *pbVar19 & 1,bVar4 & 1,local_64);
      bVar6 = (bVar7 & 1) << 2;
      bVar1 = *pbVar19 & 0xf8;
      bVar15 = bVar1 | *pbVar19 & 3 | bVar6;
      *pbVar19 = bVar15;
      uVar10 = (uint)local_64[0];
      *(ushort *)(param_2 + uVar20 * 0xc + 4) = local_64[0];
      if ((bVar7 & 1) != 0) {
        bVar15 = bVar1 | bVar6;
        *pbVar19 = bVar15;
        pcVar16[0] = '\a';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
      }
      *pbVar19 = bVar15 & 0xf7 | (bVar4 & 1) << 3;
      uVar17 = (uint)local_64[0];
      if ((bVar4 & 1) == 0) {
        uVar11 = FUN_008e12a0(lVar12,0xd);
        if (uVar10 <= uVar11) {
          uVar11 = uVar17;
        }
        local_6c[0] = (undefined2)uVar11;
        uVar14 = FUN_009423e0(param_1);
        cVar5 = FUN_0092b0a0(uVar14,uVar18,lVar12,1,local_6c);
        *(undefined2 *)(param_2 + uVar20 * 0xc + 4) = local_6c[0];
        *param_2 = *param_2 + '\x01';
      }
      else {
        uVar10 = FUN_008e55b0();
        cVar5 = '\0';
        if (uVar17 <= uVar10) {
          uVar10 = uVar17;
        }
        *(short *)(param_2 + uVar20 * 0xc + 4) = (short)uVar10;
        param_2[1] = param_2[1] + '\x01';
      }
      param_2[uVar20 * 0xc + 0xc] = cVar5;
      lVar21 = param_3[5];
      if (lVar21 != 0) {
        uVar14 = FUN_00942380(param_1);
        FUN_00932040(lVar21,uVar14,uVar18,lVar12,*(undefined4 *)pcVar16);
      }
      uVar20 = (ulong)((int)uVar20 + 1);
      lVar12 = FUN_0093b2f0(param_3[1]);
    } while (lVar12 != 0);
  }
  return;
}


