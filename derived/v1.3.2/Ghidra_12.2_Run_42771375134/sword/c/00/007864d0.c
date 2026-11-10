/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007864d0; name: FUN_007864d0
 */


void FUN_007864d0(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
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
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0199c0f0(&local_70);
  puVar1 = PTR_DAT_027155e8;
  local_70 = local_70 & 0xfffffffcffffffff;
  FUN_019a4760(*(long *)(param_1 + 0x2b8) + 0xa0,PTR_DAT_027155e8,&local_70);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0199c030(&local_70);
  uVar3 = local_70;
  uVar2 = local_70._4_2_;
  local_70._0_3_ = (uint3)(ushort)local_70;
  uVar4 = local_70;
  local_70._6_2_ = SUB82(uVar3,6);
  local_70._0_4_ = (undefined4)uVar4;
  local_70 = CONCAT26(local_70._6_2_,CONCAT24(uVar2,(undefined4)local_70)) | 0xc00000000;
  FUN_019a42f0(*(long *)(param_1 + 0x2b8) + 0xbc,puVar1,&local_70);
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
  FUN_0199c0b0(&local_70);
  FUN_0199c080(&local_90);
  uVar3 = local_90;
  local_90 = CONCAT17(7,(undefined7)local_90);
  uVar4 = local_90;
  local_90._0_1_ = (byte)uVar3;
  local_90._0_1_ = (byte)local_90 | 1;
  local_90._4_4_ = SUB84(uVar4,4);
  local_90._0_4_ = (uint)CONCAT21(0x706,(byte)local_90);
  local_70 = CONCAT71(local_70._1_7_,1);
  local_58 = (undefined1 *)&local_90;
  uVar3 = FUN_019a44d0(&local_70);
  plVar6 = *(long **)(param_1 + 8);
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar3,8);
  lVar7 = *(long *)(param_1 + 0x2b8);
  lVar5 = *(long *)(lVar7 + 0x58);
  *(undefined8 *)(lVar7 + 0x58) = uVar4;
  if (lVar5 != 0) {
    (**(code **)(**(long **)(lVar7 + 0x60) + 0x18))
              (*(long **)(lVar7 + 0x60),lVar5,*(undefined8 *)(lVar7 + 0x68),
               *(undefined8 *)(lVar7 + 0x70));
  }
  *(long **)(lVar7 + 0x60) = plVar6;
  *(undefined8 *)(lVar7 + 0x68) = uVar3;
  *(undefined8 *)(lVar7 + 0x70) = 8;
  FUN_019a4500(*(long *)(param_1 + 0x2b8) + 0x78,*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x58),
               uVar3);
  FUN_019a4520(*(long *)(param_1 + 0x2b8) + 0x78,PTR_DAT_027155e8,&local_70);
  return;
}


