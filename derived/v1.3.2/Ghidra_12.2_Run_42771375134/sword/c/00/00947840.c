/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947840; name: FUN_00947840
 */


void FUN_00947840(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  char local_60 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined1 local_48;
  
  *param_2 = 0;
  FUN_00943e60(auStack_88);
  if (param_3[0x42] != '\0') {
    uVar5 = FUN_009423b0(param_1);
    FUN_00938900(uVar5,*param_3);
  }
  if (*(int *)(param_3 + 4) == 8) {
    local_90 = *(undefined8 *)(param_3 + 0x10);
    uVar5 = FUN_009423e0(param_1);
    FUN_0092c5a0(uVar5,*param_3,param_3[8],&local_90);
    local_58 = *param_3;
    local_57 = param_3[8];
    local_48 = param_3[9];
    local_50 = local_90;
    FUN_00942450(param_1);
    uVar5 = FUN_00925090();
    FUN_00947db0(uVar5,local_60,&local_58);
    bVar1 = param_3[8];
    bVar4 = local_60[0] != '\0';
    cVar2 = param_3[9];
    FUN_00943e70(auStack_88);
    if (3 < bVar1 - 1) goto LAB_0094796c;
    puVar3 = &DAT_0214ae90;
    if (cVar2 != '\x01') {
      puVar3 = &DAT_0214ae8c;
    }
    if (*(int *)(puVar3 + ((ulong)(bVar1 - 1) & 0xff) * 0xc) < 0) goto LAB_0094796c;
    FUN_00943f20(auStack_88,1);
    cVar2 = param_3[0x42];
  }
  else {
    bVar4 = FUN_00947ab0(param_1,*(int *)(param_3 + 4),param_3 + 0x10,param_3[0x41]);
LAB_0094796c:
    cVar2 = param_3[0x42];
  }
  if (cVar2 != '\0') {
    uVar5 = FUN_009423b0(param_1);
    FUN_009389c0(uVar5,*param_3);
  }
  if ((bVar4 & 1) == 0) goto LAB_00947a84;
  if (param_3[0x40] == '\0') {
    if (*(short *)(param_3 + 0x18) != 0xf9) {
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a160(uVar5,*(undefined2 *)(param_3 + 0x18));
    }
    uVar6 = FUN_00943f10(param_3 + 0x1c);
    uVar5 = FUN_009423b0(param_1);
    if ((uVar6 & 1) == 0) {
      FUN_00935bf0(uVar5,auStack_88);
      iVar7 = *(int *)(param_3 + 4);
      goto joined_r0x00947a0c;
    }
    FUN_00935bf0(uVar5,param_3 + 0x1c);
    if (*(int *)(param_3 + 4) == 8) goto LAB_00947a10;
LAB_0094799c:
    if (*(int *)(param_3 + 4) == 8) {
      iVar7 = 8;
    }
    else {
LAB_00947a30:
      uVar5 = FUN_009423e0(param_1);
      FUN_0092c760(uVar5,*param_3,*(undefined4 *)(param_3 + 4));
      iVar7 = *(int *)(param_3 + 4);
      if (iVar7 == 9) {
        FUN_00947b80(param_1);
        iVar7 = *(int *)(param_3 + 4);
      }
    }
  }
  else {
    iVar7 = *(int *)(param_3 + 4);
joined_r0x00947a0c:
    if (iVar7 != 8) goto LAB_0094799c;
LAB_00947a10:
    uVar5 = FUN_009423e0(param_1);
    FUN_0092c650(uVar5,*param_3,param_3[8]);
    iVar7 = *(int *)(param_3 + 4);
    if (iVar7 != 8) goto LAB_00947a30;
  }
  if (iVar7 == 2) {
    local_58 = *param_3;
    FUN_00942450(param_1);
    uVar5 = FUN_00925550();
    FUN_00947f10(uVar5,&local_90,&local_58);
  }
LAB_00947a84:
  *param_2 = bVar4 & 1;
  return;
}


