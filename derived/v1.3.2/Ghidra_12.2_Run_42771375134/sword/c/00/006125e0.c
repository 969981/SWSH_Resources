/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006125e0; name: FUN_006125e0
 */


int FUN_006125e0(long param_1,long param_2,uint param_3,int param_4,undefined4 param_5,
                undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  int local_54;
  int local_48;
  int local_44;
  
  iVar7 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_5;
    iVar7 = *(int *)(param_1 + 0x10);
  }
  uVar8 = iVar7 + 1;
  if (*(uint *)(param_1 + 0x14) < uVar8) {
    local_54 = 0;
    uVar1 = iVar7 + 8U & 0xfffffff8;
    lVar5 = FUN_006029c0(param_6,0x18,*(uint *)(param_1 + 0x14),uVar1,
                         *(undefined8 *)(param_1 + 0x18),&local_54);
    *(long *)(param_1 + 0x18) = lVar5;
    if (local_54 != 0) {
      return local_54;
    }
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
  }
  lVar5 = lVar5 + (ulong)uVar8 * 0x18;
  *(undefined4 *)(lVar5 + -0x18) = 0;
  *(undefined4 *)(lVar5 + -8) = 0;
  *(uint *)(param_1 + 0x10) = uVar8;
  if (uVar8 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      local_48 = 0;
      piVar10 = (int *)FUN_006029c0(param_6,0x18,0,8,*(undefined8 *)(param_1 + 0x18),&local_48);
      *(int **)(param_1 + 0x18) = piVar10;
      if (local_48 != 0) {
        return local_48;
      }
      *(undefined4 *)(param_1 + 0x14) = 8;
    }
    else {
      piVar10 = *(int **)(param_1 + 0x18);
    }
    *piVar10 = 0;
    piVar10[4] = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    piVar10 = (int *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x18 + -0x18);
  }
  local_44 = 0;
  uVar8 = piVar10[1] + 7U >> 3;
  uVar1 = param_4 + 7U >> 3;
  if (uVar8 < uVar1) {
    uVar1 = uVar1 + 7 & 0x3ffffff8;
    pbVar6 = (byte *)FUN_006029c0(param_6,1,uVar8,uVar1,*(undefined8 *)(piVar10 + 2),&local_44);
    *(byte **)(piVar10 + 2) = pbVar6;
    if (local_44 != 0) {
      return local_44;
    }
    piVar10[1] = uVar1 << 3;
    *piVar10 = param_4;
  }
  else {
    pbVar6 = *(byte **)(piVar10 + 2);
    *piVar10 = param_4;
  }
  if (param_4 != 0) {
    uVar8 = 0x80 >> (ulong)(param_3 & 7);
    iVar7 = 0x80;
    pbVar9 = (byte *)(param_2 + (ulong)(param_3 >> 3));
    do {
      uVar1 = (int)uVar8 >> 1;
      bVar3 = *pbVar6 & ((byte)iVar7 ^ 0xff);
      if ((uVar8 & *pbVar9) != 0) {
        bVar3 = (byte)iVar7 | *pbVar6;
      }
      iVar2 = iVar7 >> 1;
      *pbVar6 = bVar3;
      pbVar4 = pbVar9 + 1;
      if (uVar1 != 0) {
        pbVar4 = pbVar9;
      }
      uVar8 = 0x80;
      if (uVar1 != 0) {
        uVar8 = uVar1;
      }
      pbVar9 = pbVar6 + 1;
      if (iVar2 != 0) {
        pbVar9 = pbVar6;
      }
      iVar7 = 0x80;
      if (iVar2 != 0) {
        iVar7 = iVar2;
      }
      param_4 = param_4 + -1;
      pbVar6 = pbVar9;
      pbVar9 = pbVar4;
    } while (param_4 != 0);
  }
  return 0;
}


