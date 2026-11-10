/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008004e0; name: FUN_008004e0
 */


undefined8 FUN_008004e0(string *param_1,int *param_2)

{
  byte *pbVar1;
  string sVar2;
  string sVar3;
  byte bVar4;
  string *psVar5;
  string *psVar6;
  int iVar7;
  string *psVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  string local_60 [8];
  ulong local_58;
  byte *pbStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_2 = 0;
  sVar2 = *param_1;
  if (((byte)sVar2 & 1) == 0) {
    psVar5 = param_1 + 1;
    psVar6 = psVar5 + ((byte)sVar2 >> 1);
    if ((ulong)((byte)sVar2 >> 1) == 0) goto LAB_00800548;
  }
  else {
    psVar5 = *(string **)(param_1 + 0x10);
    psVar6 = psVar5 + *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 8) < 1) goto LAB_00800548;
  }
  do {
    if (*psVar5 != (string)0x20) break;
    psVar5 = psVar5 + 1;
  } while (psVar5 < psVar6);
LAB_00800548:
  do {
    psVar8 = psVar6;
    if (psVar8 <= psVar5) goto LAB_0080058c;
    psVar6 = psVar8 + -1;
  } while (psVar8[-1] == (string)0x20);
  sVar3 = *psVar5;
  if (((sVar3 == (string)0x2d) || (sVar3 == (string)0x2b)) &&
     (psVar5 = psVar5 + 1, psVar8 <= psVar5)) {
LAB_0080058c:
    uVar11 = 0;
  }
  else {
    if (((byte)sVar2 & 1) == 0) {
      psVar6 = param_1 + 1;
    }
    else {
      psVar6 = *(string **)(param_1 + 0x10);
    }
    std::string::string((string *)&local_48,param_1,(long)psVar5 - (long)psVar6,
                        (long)psVar8 - (long)psVar5,(allocator *)param_1);
    if (((byte)*param_1 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      if (((byte)*param_1 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x10));
        *(undefined8 *)param_1 = 0;
      }
    }
    *(undefined8 *)(param_1 + 8) = uStack_40;
    *(undefined8 *)(param_1 + 0x10) = local_38;
    *(undefined8 *)param_1 = local_48;
    if (sVar3 == (string)0x2d) {
      psVar5 = *(string **)(param_1 + 0x10);
      uVar10 = (ulong)((byte)*param_1 >> 1);
      if (((byte)*param_1 & 1) == 0) {
        psVar5 = param_1 + 1;
      }
      else {
        uVar10 = *(ulong *)(param_1 + 8);
      }
      if ((long)uVar10 < 1) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        psVar6 = psVar5 + uVar10;
        do {
          sVar2 = *psVar5;
          if (9 < (byte)sVar2 - 0x30) {
            *param_2 = iVar7;
            return 0;
          }
          if ((iVar7 < -0xccccccc) || (iVar7 * 10 < (int)((byte)sVar2 + 0x7fffffd0))) {
            *param_2 = -0x80000000;
            return 0;
          }
          psVar5 = psVar5 + 1;
          iVar7 = (iVar7 * 10 + 0x30) - (uint)(byte)sVar2;
        } while (psVar5 < psVar6);
      }
      uVar11 = 1;
      *param_2 = iVar7;
    }
    else {
      std::string::string(local_60,param_1);
      pbVar9 = (byte *)((ulong)local_60 | 1);
      uVar10 = (ulong)((byte)local_60[0] >> 1);
      if (((byte)local_60[0] & 1) != 0) {
        pbVar9 = pbStack_50;
        uVar10 = local_58;
      }
      if ((long)uVar10 < 1) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        pbVar1 = pbVar9 + uVar10;
        do {
          bVar4 = *pbVar9;
          if (9 < bVar4 - 0x30) {
            uVar11 = 0;
            *param_2 = iVar7;
            goto joined_r0x0080075c;
          }
          if ((0xccccccc < iVar7) || ((int)(-0x7fffffd1 - (uint)bVar4) < iVar7 * 10)) {
            uVar11 = 0;
            *param_2 = 0x7fffffff;
            goto joined_r0x0080075c;
          }
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 * 10 + (uint)bVar4 + -0x30;
        } while (pbVar9 < pbVar1);
      }
      uVar11 = 1;
      *param_2 = iVar7;
joined_r0x0080075c:
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(pbStack_50);
      }
    }
  }
  return uVar11;
}


