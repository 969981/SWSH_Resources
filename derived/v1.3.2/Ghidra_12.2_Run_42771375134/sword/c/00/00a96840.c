/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a96840; name: FUN_00a96840
 */


void FUN_00a96840(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 extraout_var;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 in_q3 [16];
  undefined8 uVar9;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar9 = in_q3._8_8_;
  uVar8 = in_q3._0_8_;
  uVar4 = FUN_00a98070();
  uVar3 = FUN_00a97ee0(uVar4,param_2,uVar4 & 0xffffffff);
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = uVar8;
  *(uint *)(param_1 + 0x114) = uVar3;
  if (uVar3 == 0xff) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8 + 0x580);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    auVar7._8_8_ = uVar9;
    auVar7._0_8_ = uVar8;
  }
  if (param_3 < 4) {
    switch(param_3) {
    case 0:
      auVar7 = FUN_00ac5a80(lVar6);
      goto LAB_00a969b0;
    case 1:
      local_50 = 0xef9edd532fb85bc3;
      local_48 = "Waist";
      local_40 = 5;
      break;
    case 2:
      local_50 = 0x525829bbe8d0ab43;
      local_48 = "Head";
      local_40 = 4;
      break;
    case 3:
      local_50 = 0xe8611feb71e269c5;
      local_48 = "Spine3";
      local_40 = 6;
    }
    local_38 = 0;
    lVar5 = FUN_00aca6a0(lVar6,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    auVar7._8_8_ = uVar9;
    auVar7._0_8_ = uVar8;
    if (lVar5 != 0) {
      lVar1 = *(long *)(lVar5 + 0x120);
      iVar2 = *(int *)(*(long *)(lVar5 + 0x128) + 0x40);
      FUN_00723030(lVar1,iVar2);
      FUN_00ac6d40(*(undefined8 *)(*(long *)(lVar1 + 0x1b8) + (long)iVar2 * 0x130 + 0xd0),lVar6);
      auVar7._8_8_ = uVar9;
      auVar7._0_8_ = uVar8;
    }
  }
LAB_00a969b0:
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar7;
  FUN_00ac7640(lVar6);
  *(undefined4 *)(param_1 + 0xa0) = extraout_var;
  uVar4 = FUN_00a801e0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x114),
                       *(undefined4 *)(param_1 + 0x114));
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


