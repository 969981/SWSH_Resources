/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968560; name: FUN_00968560
 */


void FUN_00968560(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_58 [8];
  
  *param_2 = 0;
  uVar10 = param_3[3];
  FUN_00942390();
  uVar7 = FUN_009319a0();
  FUN_0093b8b0(uVar10,uVar7);
  FUN_00968920(param_1,param_3[3],param_3[2],param_3[1]);
  local_80 = (undefined4 *)param_3[1];
  local_88 = (undefined4 *)param_3[2];
  local_78 = param_3[3];
  FUN_00942450(param_1);
  uVar7 = FUN_009250f0();
  FUN_00969ba0(uVar7,local_58,&local_88);
  if (local_58[0] != '\0') {
    FUN_009423b0(param_1);
    FUN_009366b0();
    goto LAB_00968864;
  }
  local_88 = (undefined4 *)param_3[1];
  local_80 = (undefined4 *)param_3[2];
  local_78 = param_3[3];
  FUN_00942450(param_1);
  uVar7 = FUN_00925210();
  FUN_00969cc0(uVar7,local_58,&local_88);
  local_70 = param_3[6];
  local_88 = (undefined4 *)param_3[1];
  local_80 = (undefined4 *)param_3[2];
  local_78 = param_3[3];
  FUN_00942450(param_1);
  uVar7 = FUN_009251f0();
  FUN_00968f80(uVar7,local_58,&local_88);
  local_80 = (undefined4 *)param_3[1];
  local_88 = (undefined4 *)param_3[2];
  local_70 = param_3[3];
  local_68 = param_3[5];
  local_78 = param_3[6];
  FUN_00942450(param_1);
  uVar7 = FUN_009251b0();
  FUN_009693b0(uVar7,local_58,&local_88);
  local_80 = (undefined4 *)param_3[1];
  local_88 = (undefined4 *)param_3[2];
  local_70 = param_3[3];
  local_68 = param_3[5];
  local_78 = param_3[6];
  FUN_00942450(param_1);
  uVar7 = FUN_009251c0();
  FUN_00969f60(uVar7,local_58,&local_88);
  puVar1 = (undefined4 *)param_3[1];
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  uVar7 = param_3[5];
  uVar12 = param_3[6];
  cVar3 = *(char *)((long)param_3 + 0x21);
  uVar5 = FUN_00880b40(*puVar1);
  if ((uVar5 < 10) && ((1 << (ulong)(uVar5 & 0x1f) & 0x3d1U) != 0)) {
LAB_009686e4:
    local_88 = (undefined4 *)uVar10;
    local_80 = puVar1;
    local_78 = uVar12;
    local_70 = uVar11;
    local_68 = uVar7;
    FUN_00942450(param_1);
    uVar7 = FUN_00925190();
    FUN_0096adc0(uVar7,local_58,&local_88);
  }
  else {
    uVar9 = FUN_009423e0(param_1);
    uVar8 = FUN_0092a0f0(uVar9,puVar1,uVar10);
    if ((cVar3 != '\0') || ((uVar8 & 1) != 0)) goto LAB_009686e4;
  }
  local_80 = (undefined4 *)param_3[1];
  local_88 = (undefined4 *)param_3[2];
  local_70 = param_3[3];
  local_78 = param_3[6];
  FUN_00942450(param_1);
  uVar7 = FUN_009251a0();
  FUN_0096a0c0(uVar7,local_58,&local_88);
  puVar1 = (undefined4 *)param_3[1];
  puVar2 = (undefined4 *)param_3[2];
  uVar7 = param_3[3];
  iVar6 = FUN_00880b40(*puVar1);
  if (iVar6 == 1) {
    local_88 = puVar1;
    local_80 = puVar2;
    local_78 = uVar7;
    FUN_00942450(param_1);
    uVar7 = FUN_00925170();
    FUN_0096a3d0(uVar7,local_58,&local_88);
  }
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar7 = param_3[2];
  uVar10 = param_3[3];
  iVar6 = FUN_00880b40(*puVar2);
  if (iVar6 == 2) {
    local_88 = puVar1;
    local_80 = puVar2;
    local_78 = uVar7;
    local_70 = uVar10;
    FUN_00942450(param_1);
    uVar7 = FUN_00925160();
    FUN_0096a620(uVar7,local_58,&local_88);
  }
  puVar1 = (undefined4 *)param_3[1];
  uVar7 = param_3[2];
  uVar10 = param_3[3];
  uVar12 = param_3[5];
  uVar4 = *(undefined1 *)((long)param_3 + 0x22);
  iVar6 = FUN_00880b40(*puVar1);
  if (iVar6 == 9) {
    FUN_00968ae0(param_1,puVar1,uVar7,uVar10);
  }
  else {
    local_68 = CONCAT71(local_68._1_7_,uVar4);
    local_88 = (undefined4 *)uVar7;
    local_80 = puVar1;
    local_78 = uVar10;
    local_70 = uVar12;
    FUN_00942450(param_1);
    uVar7 = FUN_00925200();
    FUN_00968d40(uVar7,local_58,&local_88);
  }
  local_80 = (undefined4 *)param_3[1];
  local_88 = (undefined4 *)param_3[2];
  local_78 = param_3[3];
  FUN_00942450(param_1);
  uVar7 = FUN_009250f0();
  FUN_00969ba0(uVar7,local_58,&local_88);
  if (local_58[0] == '\0') {
    if (*(char *)(param_3 + 4) != '\0') {
      return;
    }
    FUN_009689f0(param_1,param_3[2],param_3[1],param_3[3]);
    local_80 = (undefined4 *)param_3[1];
    local_88 = (undefined4 *)param_3[2];
    local_78 = param_3[3];
    FUN_00942450(param_1);
    uVar7 = FUN_009250f0();
    FUN_00969ba0(uVar7,local_58,&local_88);
    if (local_58[0] == '\0') {
      return;
    }
    uVar10 = param_3[2];
    uVar7 = FUN_009423e0(param_1);
    uVar8 = FUN_00926920(uVar7,uVar10);
    if ((uVar8 & 1) != 0) {
      FUN_009423b0(param_1);
      FUN_009366b0();
    }
  }
  uVar7 = *param_3;
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = FUN_008e0a00(param_3[2]);
  local_88 = (undefined4 *)CONCAT71(local_88._1_7_,uVar4);
  local_88 = (undefined4 *)CONCAT44(*puVar1,(undefined4)local_88);
  local_80 = (undefined4 *)uVar7;
  FUN_00942450(param_1);
  uVar7 = FUN_00925de0();
  FUN_00969e70(uVar7,local_58,&local_88);
LAB_00968864:
  *param_2 = 1;
  return;
}


