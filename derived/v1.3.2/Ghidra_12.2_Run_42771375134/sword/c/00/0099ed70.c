/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099ed70; name: FUN_0099ed70
 */


void FUN_0099ed70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar11;
  undefined8 uVar12;
  char local_b0 [80];
  byte local_54 [4];
  
  uVar6 = FUN_00942380();
  FUN_008f8110();
  local_54[0] = 0;
  uVar11 = (uint)*(byte *)(param_3 + 2);
  if ((*(byte *)(param_3[1] + 0x24) & 1) == 0) {
    uVar7 = FUN_009423e0(param_1);
    uVar3 = FUN_0092eb60(uVar7,*param_3,param_3[1]);
  }
  else {
    uVar3 = 0x1f;
  }
  FUN_0093b090(param_3[3]);
  uVar7 = *param_3;
  uVar10 = param_3[1];
  cVar1 = FUN_00942580(param_1,*(undefined1 *)((long)param_3 + 0x11));
  if (cVar1 != '\x05') {
    uVar8 = FUN_009423e0(param_1);
    uVar9 = FUN_0092eef0(uVar8,uVar7,uVar10);
    if ((uVar9 & 1) != 0) {
      uVar11 = FUN_00942580(param_1,*(undefined1 *)((long)param_3 + 0x11));
    }
  }
  uVar8 = FUN_00942390(param_1);
  uVar7 = *param_3;
  uVar10 = param_3[1];
  uVar12 = param_3[3];
  iVar4 = FUN_008f8110(uVar6);
  if (iVar4 == 1) {
    FUN_0099f540(param_1,uVar6,uVar8,uVar7,uVar11,uVar10,uVar3,uVar12,local_54);
  }
  else if (iVar4 == 2) {
    FUN_0099f840(param_1,uVar6,uVar8,uVar7,uVar11,uVar10,uVar3,uVar12,local_54);
  }
  else {
    FUN_0099f3d0(param_1,uVar6,uVar8,uVar7);
  }
  bVar2 = local_54[0];
  uVar7 = *param_3;
  uVar6 = FUN_009423e0(param_1);
  bVar2 = FUN_0092ec20(uVar6,uVar7,bVar2);
  local_54[0] = bVar2 & 1;
  iVar4 = FUN_0093b420(param_3[3]);
  if ((iVar4 == 1) && ((bVar2 & 1) != 0)) {
    uVar10 = FUN_0093b2c0(param_3[3],0);
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar3 = FUN_008e0a00();
    uVar8 = FUN_009423e0(param_1);
    uVar5 = FUN_0092ecb0(uVar8,uVar6,uVar7,uVar3,local_b0);
    uVar8 = FUN_009423e0(param_1);
    FUN_0092edb0(uVar8,uVar6,uVar5 & 0xff,uVar7,local_b0[0]);
    if ((uVar5 & 0xff) != 0x1f) {
      uVar10 = FUN_009424e0(param_1,uVar5);
    }
    FUN_0093b090(param_3[3]);
    FUN_0093b0b0(param_3[3],uVar10);
    uVar6 = extraout_x1;
    if (local_b0[0] != '\0') goto LAB_0099efa8;
  }
  FUN_0099f030(param_1,*param_3,param_3[3]);
  uVar6 = extraout_x1_00;
LAB_0099efa8:
  FUN_0099f110(param_1,uVar6,*param_3,param_3[1],uVar11,param_3[3]);
  uVar7 = param_3[3];
  FUN_0093b070(local_b0);
  FUN_0093ba70(local_b0,uVar7);
  uVar3 = FUN_0093b430(local_b0);
  FUN_00942390(param_1);
  uVar6 = FUN_009319a0();
  FUN_0093b8b0(local_b0,uVar6);
  FUN_0093b510(local_b0,uVar7);
  FUN_0093b4d0(uVar7,uVar3);
  return;
}


