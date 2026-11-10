/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00743d10; name: FUN_00743d10
 */


void FUN_00743d10(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = FUN_007442a0(&local_70,*(undefined8 *)(param_1 + 0x10));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x878) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x878) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x878) = 0;
  }
  *(long *)(param_1 + 0x878) = lVar7;
  if (lVar7 != 0) {
    pcVar8 = *(code **)(lVar7 + 0x2b8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x2c0) = 0;
      *(undefined8 *)(lVar7 + 0x2c8) = 0;
      *(undefined8 *)(lVar7 + 0x2b0) = 0;
      *(undefined8 *)(lVar7 + 0x2b8) = 0;
      (*pcVar8)(lVar7 + 0x2d0);
    }
    puVar4 = PTR_LAB_02715d40;
    puVar3 = PTR_LAB_02715d38;
    puVar2 = PTR_LAB_02715d30;
    *(undefined **)(lVar7 + 0x2d0) = PTR_LAB_02715d28;
    *(undefined **)(lVar7 + 0x2b0) = puVar2;
    *(undefined **)(lVar7 + 0x2b8) = puVar3;
    *(undefined **)(lVar7 + 0x2c0) = puVar4;
    *(undefined **)(lVar7 + 0x2c8) = PTR_LAB_02715d48;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0199c030(&local_70);
  puVar2 = PTR_DAT_027155e8;
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3010002);
  FUN_019a42f0(*(long *)(param_1 + 0x878) + 0x278,PTR_DAT_027155e8,&local_70);
  FUN_0199c030(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3020002);
  FUN_019a42f0(*(long *)(param_1 + 0x878) + 0x248,puVar2,&local_70);
  FUN_0199c030(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3000002);
  FUN_019a42f0(*(long *)(param_1 + 0x878) + 0x218,puVar2,&local_70);
  FUN_0199c030(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x2000001);
  FUN_019a42f0(*(long *)(param_1 + 0x878) + 0x1e8,puVar2,&local_70);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0199c0f0(&local_70);
  local_70 = local_70 & 0xfffffffcffffffff;
  FUN_019a4760(*(long *)(param_1 + 0x878) + 0x178,puVar2,&local_70);
  FUN_0199c0f0(&local_70);
  local_70 = local_70 & 0xfffffffcffffffff | 0x100000000;
  FUN_019a4760(*(long *)(param_1 + 0x878) + 0x194,puVar2,&local_70);
  FUN_0199c0f0(&local_70);
  uVar1 = local_70;
  uVar6 = local_70._4_2_;
  local_70 = CONCAT71(local_70._1_7_,7);
  uVar5 = local_70;
  local_70._6_2_ = SUB82(uVar1,6);
  local_70._0_4_ = (undefined4)uVar5;
  local_70 = CONCAT26(local_70._6_2_,CONCAT24(uVar6,(undefined4)local_70)) | 0x300000000;
  FUN_019a4760(*(long *)(param_1 + 0x878) + 0x1b0,puVar2,&local_70);
  FUN_0199c0f0(&local_70);
  local_70 = local_70 | 0x300000000;
  FUN_019a4760(*(long *)(param_1 + 0x878) + 0x1cc,puVar2,&local_70);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0199c080(&local_90);
  local_90 = local_90 & 0xfffffffffffffffe;
  FUN_0199c0b0(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN_00744170(param_1,0,&local_70);
  FUN_0199c080(&local_90);
  local_90._0_7_ = (uint7)local_90 | 1;
  local_90 = CONCAT17(7,(uint7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_3_ = CONCAT21(0x706,(undefined1)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN_0199c0b0(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN_00744170(param_1,1,&local_70);
  FUN_0199c080(&local_90);
  local_90._0_7_ = (uint7)local_90 | 1;
  local_90 = CONCAT17(7,(uint7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_3_ = CONCAT21(0x101,(undefined1)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN_0199c0b0(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN_00744170(param_1,2,&local_70);
  FUN_0199c080(&local_90);
  local_90._0_7_ = (uint7)local_90 | 1;
  local_90 = CONCAT17(7,(uint7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_3_ = CONCAT21(0x200,(undefined1)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN_0199c0b0(&local_70);
  local_70 = CONCAT71(local_70._1_7_,1);
  local_58 = (undefined1 *)&local_90;
  FUN_00744170(param_1,3,&local_70);
  return;
}


