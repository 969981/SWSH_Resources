/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094af90; name: FUN_0094af90
 */


void FUN_0094af90(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  *param_2 = 0;
  FUN_00942390();
  uVar7 = FUN_009319b0();
  uVar11 = *param_3;
  uVar3 = FUN_008e0a00(uVar11);
  uVar8 = FUN_00913330(uVar7,uVar3);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar8 = FUN_008e1600(uVar11);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar9 = FUN_009423b0(param_1);
  FUN_009390e0(uVar9,uVar11,param_3[2]);
  puVar12 = (undefined8 *)param_3[2];
  if (puVar12 != (undefined8 *)0x0) {
    uVar4 = FUN_008e0a00(*puVar12);
    uVar5 = FUN_008e2890(*puVar12,*(undefined4 *)(puVar12 + 1));
    uVar9 = FUN_009423b0(param_1);
    FUN_00939950(uVar9,uVar4,uVar5);
  }
  FUN_0094b2a0(param_1,uVar7,uVar3);
  if ((*(char *)(param_3 + 1) != '\0') &&
     (((uVar8 = FUN_00942670(param_1,0x400), (uVar8 & 1) == 0 ||
       (cVar2 = FUN_009425b0(param_1,uVar11), cVar2 != '\x01')) &&
      (uVar8 = FUN_008e0b50(uVar11), (uVar8 & 1) == 0)))) {
    uVar7 = FUN_009423b0(param_1);
    FUN_00936080(uVar7,uVar11,0);
  }
  uVar6 = FUN_008e15a0(uVar11);
  FUN_008e1590(uVar11);
  uVar8 = FUN_009426e0(param_1,uVar3,uVar6);
  if ((uVar8 & 1) == 0) {
    bVar1 = (uVar6 & 0xff) != (uVar3 & 0xff) && (uVar6 & 0xff) != 0x1f;
    uVar8 = FUN_00942670(param_1,0x400);
  }
  else {
    bVar1 = false;
    uVar8 = FUN_00942670(param_1,0x400);
  }
  if ((((uVar8 & 1) == 0) || (cVar2 = FUN_009425b0(param_1,uVar11), cVar2 != '\x01')) &&
     (uVar8 = FUN_008e0b50(uVar11), (uVar8 & 1) == 0)) {
    uVar7 = FUN_009423b0(param_1);
    FUN_0093a060(uVar7,uVar3,0);
  }
  local_58 = uVar11;
  FUN_00942450(param_1);
  uVar7 = FUN_00925250();
  FUN_00946e70(uVar7,auStack_60,&local_58);
  uVar7 = FUN_009423e0(param_1);
  FUN_0092cca0(uVar7,uVar3);
  uVar8 = FUN_008e0a10(uVar11);
  if ((uVar8 & 1) != 0) {
    uVar7 = FUN_009423b0(param_1);
    uVar4 = FUN_008e0a00(uVar11);
    FUN_00939e30(uVar7,uVar4);
  }
  FUN_0094b330(param_1,uVar11);
  uVar7 = FUN_009423b0(param_1);
  FUN_009386c0(uVar7,uVar3);
  FUN_0094b3c0(param_1,uVar11);
  if (bVar1) {
    uVar7 = FUN_009423b0(param_1);
    FUN_009378e0(uVar7,uVar6);
  }
  FUN_0094b450(param_1,uVar3);
  FUN_0094b500(param_1,uVar11);
  if ((uVar6 & 0xff) != 0x1f) {
    uVar8 = FUN_00942750(param_1,uVar3);
    if ((uVar8 & 1) != 0) {
      uVar7 = FUN_00942380(param_1);
      FUN_008fba50(uVar7,uVar6);
    }
    uVar8 = FUN_00942750(param_1,uVar6);
    if ((uVar8 & 1) != 0) {
      uVar7 = FUN_009424e0(param_1,uVar3);
      uVar9 = FUN_009424e0(param_1,uVar6);
      uVar10 = FUN_00942380(param_1);
      FUN_0094b970(uVar10,uVar9,uVar7);
    }
  }
  uVar7 = FUN_009423e0(param_1);
  FUN_0092ccf0(uVar7,uVar3);
  FUN_0094b580(param_1,uVar11);
  *param_2 = 1;
  return;
}


