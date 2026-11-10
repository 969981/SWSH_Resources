/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f32b0; name: FUN_006f32b0
 */


void FUN_006f32b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined2 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_0199c930();
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_006f331c;
  }
  lVar2 = FUN_0075ecb0();
LAB_006f331c:
  *(long *)(param_1 + 0x100) = lVar2;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  *(long *)(param_1 + 0x130) = lVar2;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = param_6;
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x150) = param_3;
  *(undefined8 *)(param_1 + 0x158) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x160) = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_0199bf20(&local_70);
  local_70._0_4_ = CONCAT22(param_5,(undefined2)local_70);
  local_70 = CONCAT71(local_70._1_7_,param_4);
  FUN_0199c980(param_1,PTR_DAT_027155e8,&local_70);
  *(long *)(param_1 + 0xe0) = param_1;
  FUN_0199cb30(param_1,PTR_LAB_027157a0);
  FUN_0199cb40(param_1,PTR_LAB_027157a8);
  FUN_0199cb50(param_1);
  *(undefined4 *)(param_1 + 0x160) = 0;
  FUN_006f3580(param_1);
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_006f3720(param_1);
  FUN_0199cb60(param_1);
  FUN_0199cbc0(param_1);
  return;
}


