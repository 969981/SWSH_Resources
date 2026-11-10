/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095e6a0; name: FUN_0095e6a0
 */


void FUN_0095e6a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 local_d8 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined1 local_48;
  undefined1 auStack_38 [8];
  
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar9 = param_3[4];
  uVar4 = FUN_009423e0();
  FUN_0092b370(uVar4,uVar6,uVar5,uVar9);
  uVar6 = *param_3;
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined1 *)(param_3 + 5);
  uVar5 = FUN_009423e0(param_1);
  FUN_0092dfd0(uVar5,uVar6,*puVar1,auStack_78,uVar2);
  local_c8 = *param_3;
  uStack_c0 = param_3[1];
  local_b8 = param_3[4];
  FUN_00942450(param_1);
  uVar6 = FUN_00925410();
  FUN_009608c0(uVar6,&local_68,&local_c8);
  FUN_0093b070(&local_c8);
  FUN_0095ee00(auStack_d0);
  local_d8[0] = 0;
  iVar3 = FUN_0095e840(param_1,param_3,auStack_78,&local_c8,auStack_d0,local_d8);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = CONCAT44(local_58._4_4_,iVar3);
  FUN_00942450(param_1);
  uVar6 = FUN_00925490();
  FUN_00960660(uVar6,auStack_38,&local_68);
  uStack_60 = param_3[1];
  local_68 = param_3[2];
  local_58 = *param_3;
  local_48 = *(undefined1 *)(param_3 + 5);
  puStack_50 = &local_c8;
  FUN_00942450(param_1);
  uVar6 = FUN_00925440();
  FUN_0095ef10(uVar6,auStack_38,&local_68);
  uVar6 = param_3[1];
  uVar7 = FUN_0095ee10(auStack_d0);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00942400(param_1);
    lVar8 = lVar8 + 0x10;
    FUN_0093af20(lVar8);
    FUN_0093afe0(lVar8);
    uVar5 = FUN_009423c0(param_1);
    FUN_0095ed00(uVar5,uVar6,lVar8,auStack_d0);
  }
  if ((char)local_d8[0] != '\0') {
    FUN_00942450(param_1);
    uVar6 = FUN_00925aa0();
    FUN_0095f390(uVar6,&local_68,auStack_38);
  }
  if (iVar3 != 0) {
    FUN_0095e9d0(param_1,&local_c8);
  }
  return;
}


