/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a815a0; name: FUN_00a815a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a815a0(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  float fVar5;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  if (param_2 == 2) {
    param_3[1] = 0;
    *param_3 = 0;
    param_4[1] = 0;
    *param_4 = 0;
    bVar3 = *(int *)(param_1 + 0x1704) != 0xff;
    if ((bool)bVar3) {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,*(int *)(param_1 + 0x1704),&local_40,&local_44);
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
      iVar2 = *(int *)(param_1 + 0x1708);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1708);
    }
    if (iVar2 != 0xff) {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,iVar2,&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
    }
    if (*(int *)(param_1 + 0x170c) == 0xff) {
      iVar2 = *(int *)(param_1 + 0x1710);
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,*(int *)(param_1 + 0x170c),&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
      iVar2 = *(int *)(param_1 + 0x1710);
    }
    if (iVar2 == 0xff) {
      iVar2 = *(int *)(param_1 + 0x1714);
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,iVar2,&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
      iVar2 = *(int *)(param_1 + 0x1714);
    }
    if (iVar2 == 0xff) {
      iVar2 = *(int *)(param_1 + 0x1718);
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,iVar2,&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
      iVar2 = *(int *)(param_1 + 0x1718);
    }
    if (iVar2 == 0xff) {
      iVar2 = *(int *)(param_1 + 0x171c);
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,iVar2,&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
      iVar2 = *(int *)(param_1 + 0x171c);
    }
    if (iVar2 != 0xff) {
      local_40 = 0;
      uStack_38 = 0;
      FUN_00a67970(param_1,iVar2,&local_40,&local_44);
      bVar3 = bVar3 + 1;
      param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uStack_38 >> 0x20),
                            (float)param_3[1] + (float)uStack_38);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                          (float)*param_3 + (float)local_40);
    }
    if (1 < bVar3) {
      fVar5 = (float)bVar3;
      param_3[1] = (ulong)(uint)((float)param_3[1] / fVar5);
      *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) / fVar5,(float)*param_3 / fVar5);
    }
    local_40 = 0;
    uStack_38 = 0;
    FUN_00a67970(param_1,*(undefined4 *)(param_1 + 0x16fc),&local_40,&local_44);
    param_4[1] = param_4[1];
    *param_4 = CONCAT44((float)((local_44 + 0xb4) % 0x168),(int)*param_4);
    return;
  }
  if (param_2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x16fc);
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x16fc);
    uVar4 = 1;
  }
  FUN_00a81890(param_1,param_3,param_4,uVar1,uVar4);
  return;
}


