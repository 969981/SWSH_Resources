/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786650; name: FUN_00786650
 */


void FUN_00786650(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  long lStack_60;
  ushort local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0199bf50(&local_50);
  puVar3 = PTR_DAT_027155e8;
  local_50 = CONCAT44(local_50._4_4_,0x22);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar4 = FUN_0199e7c0(PTR_DAT_027155e8,&local_50);
  uVar5 = FUN_0199e7b0(puVar3,&local_50);
  FUN_006f1b70(&local_90,*(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10),0,
               (lVar4 + (lVar2 + lVar1) * 2) - 1U & -lVar4,uVar5);
  lVar4 = *(long *)(param_1 + 0x2b8);
  *(undefined8 *)(lVar4 + 0xf0) = local_90;
  if (*(long *)(lVar4 + 0xf8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0xf8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0xf8) = 0;
  }
  *(long *)(lVar4 + 0xf8) = local_88;
  *(undefined8 *)(lVar4 + 0x100) = local_80;
  *(undefined8 *)(lVar4 + 0x108) = local_78;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  local_78 = 0;
  FUN_006f6820(&local_90);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  local_58 = 0;
  local_90 = CONCAT44(local_90._4_4_,0x10);
  local_68 = (undefined *)0x0;
  lStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_78 = FUN_006f6880(*(long *)(param_1 + 0x2b8) + 0xf0);
  uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x100);
  local_80 = CONCAT44(local_80._4_4_,2);
  local_68 = PTR_LAB_02716300;
  local_58 = local_58 & 0xff00;
  local_88 = lVar2 + lVar1;
  lStack_60 = param_1;
  FUN_0198f1b0(param_1 + 0x2c0,PTR_DAT_027155e8,&local_90);
  return;
}


