/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a65b0; name: FUN_009a65b0
 */


void FUN_009a65b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                 char *param_5,char *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  char local_64 [4];
  
  *param_4 = 0;
  *param_5 = '\0';
  param_6[0] = '\x05';
  param_6[1] = '\0';
  param_6[2] = '\0';
  uVar5 = FUN_009a6b10(param_1,local_64,param_2);
  iVar3 = FUN_00942640(param_1);
  if (iVar3 != 0) {
    if (local_64[0] == '\x05') {
      return;
    }
    uVar5 = FUN_009423b0(param_1);
    FUN_0093a2e0(uVar5,local_64[0],param_3,0);
    return;
  }
  FUN_00942380(param_1);
  bVar1 = FUN_008f8960();
  bVar2 = FUN_008e12a0(uVar5,0x11);
  if (bVar1 < bVar2) {
    if (local_64[0] == '\x05') {
      return;
    }
    uVar5 = FUN_009423b0(param_1);
    FUN_0093a2e0(uVar5,local_64[0],param_3,1);
    return;
  }
  if (local_64[0] == '\x05') goto LAB_009a67a8;
  local_70 = 0;
  local_74 = 0x1000;
  local_98 = FUN_00942380(param_1);
  local_90 = FUN_00942390(param_1);
  local_78 = (undefined2)param_3;
  local_6f = 1;
  uStack_88 = param_2;
  local_80 = uVar5;
  FUN_00942380(param_1);
  uVar6 = FUN_008f8950();
  if ((uVar6 & 1) == 0) {
LAB_009a6710:
    local_74 = 0x1000;
  }
  else {
    bVar1 = FUN_008e12a0(param_2,0x11);
    bVar2 = FUN_008e12a0(uVar5,0x11);
    if (bVar2 <= bVar1) goto LAB_009a6710;
    local_74 = 0x19a;
  }
  FUN_009a7040(&local_a0,&local_98);
  if (local_a0 != '\0') {
    FUN_008e5650(uVar5,param_3);
  }
  uVar7 = FUN_00942380(param_1);
  bVar1 = FUN_008f9000(uVar7,uVar5);
  bVar1 = local_a0 != '\0' & (bVar1 ^ 1);
  uVar4 = FUN_00942540(param_1,param_2);
  uVar5 = FUN_009423b0(param_1);
  FUN_0093a280(uVar5,uVar4,local_64[0],local_9e,local_a0,bVar1,local_9f,param_3);
  *param_6 = local_64[0];
  param_6[1] = local_a0;
  param_6[2] = bVar1;
  *param_5 = local_a0;
LAB_009a67a8:
  *param_4 = 1;
  return;
}


