/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810550; name: FUN_00810550
 */


bool FUN_00810550(ulong *param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined4 local_3c;
  undefined8 local_38;
  
  bVar2 = false;
  if (5 < ((uint)param_2 & 7)) {
    return false;
  }
  uVar9 = param_2 >> 3 & 0x1fffffff;
  switch(param_2 & 7) {
  case 0:
    pbVar1 = (byte *)*param_1;
    if ((pbVar1 < (byte *)param_1[1]) && (-1 < (char)*pbVar1)) {
      uVar5 = (ulong)*pbVar1;
      *param_1 = (ulong)(pbVar1 + 1);
    }
    else {
      auVar10 = FUN_0080d3e0(param_1);
      uVar5 = auVar10._0_8_;
      if ((auVar10._8_8_ & 1) == 0) {
        return false;
      }
    }
    if (param_3 != 0) {
      FUN_0080fc40(param_3,uVar9,uVar5);
      return true;
    }
    break;
  case 1:
    puVar7 = (undefined8 *)*param_1;
    if ((int)param_1[1] - (int)puVar7 < 8) {
      uVar5 = FUN_0080d2f0(param_1,&local_38);
      if ((uVar5 & 1) == 0) {
        return false;
      }
    }
    else {
      local_38 = *puVar7;
      *param_1 = (ulong)(puVar7 + 1);
    }
    if (param_3 != 0) {
      FUN_0080fee0(param_3,uVar9,local_38);
    }
    break;
  case 2:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar5 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_00810758;
      *param_1 = (ulong)(pbVar1 + 1);
    }
    else {
      uVar5 = 0;
LAB_00810758:
      uVar5 = FUN_0080d5d0(param_1,uVar5);
      if ((long)uVar5 < 0) {
        return false;
      }
    }
    if (param_3 == 0) {
      uVar9 = FUN_0080cca0(param_1,uVar5 & 0xffffffff);
    }
    else {
      uVar4 = FUN_00810030(param_3,uVar9);
      uVar9 = FUN_0080cff0(param_1,uVar4,uVar5 & 0xffffffff);
    }
    if ((uVar9 & 1) == 0) {
      return false;
    }
    break;
  case 3:
    uVar5 = param_1[7];
    *(int *)(param_1 + 7) = (int)uVar5 + -1;
    if ((int)uVar5 < 1) {
      return false;
    }
    if (param_3 != 0) {
      param_3 = FUN_00810180(param_3,uVar9);
    }
    do {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 < (byte *)param_1[1]) {
        uVar3 = (uint)*pbVar1;
        if ((char)*pbVar1 < '\0') goto LAB_008106a4;
        *(uint *)(param_1 + 4) = uVar3;
        *param_1 = (ulong)(pbVar1 + 1);
      }
      else {
        uVar3 = 0;
LAB_008106a4:
        uVar3 = FUN_0080d8c0(param_1,uVar3);
        *(uint *)(param_1 + 4) = uVar3;
      }
      uVar6 = 0;
      if ((uVar3 == 0) || (uVar6 = uVar3, (uVar3 & 7) == 4)) {
        if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        }
        return uVar6 == ((uint)param_2 & 0xfffffff8 | 4);
      }
      uVar9 = FUN_00810550(param_1,uVar3,param_3);
      if ((uVar9 & 1) == 0) {
        return false;
      }
    } while( true );
  case 4:
    goto switchD_00810598_caseD_4;
  case 5:
    puVar8 = (undefined4 *)*param_1;
    if ((int)param_1[1] - (int)puVar8 < 4) {
      uVar5 = FUN_0080d200(param_1,&local_3c);
      if ((uVar5 & 1) == 0) {
        return false;
      }
    }
    else {
      local_3c = *puVar8;
      *param_1 = (ulong)(puVar8 + 1);
    }
    if (param_3 != 0) {
      FUN_0080fd90(param_3,uVar9,local_3c);
    }
  }
  bVar2 = true;
switchD_00810598_caseD_4:
  return bVar2;
}


