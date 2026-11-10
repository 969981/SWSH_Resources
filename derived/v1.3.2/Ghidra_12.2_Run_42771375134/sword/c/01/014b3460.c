/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3460; name: FUN_014b3460
 */


undefined4 FUN_014b3460(int param_1,int param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  ulong local_70;
  byte *local_68;
  undefined8 local_60;
  long local_58;
  byte local_50 [32];
  
  snprintf((char *)local_50,0x20,"Play_PV_EV_%03d_%02d_%02d",param_1,param_2,param_3);
  puVar1 = PTR_DAT_027107a8;
  local_88 = 0xf85ca2fdd6cfceb4;
  puStack_80 = &DAT_01d0a936;
  lVar3 = *(long *)PTR_DAT_027107a8;
  local_78 = 4;
  uVar5 = 0x3f800000;
  if ((param_4 & 1) == 0) {
    uVar5 = 0;
  }
  FUN_006cf0a0(&local_70,&local_88);
  FUN_00896220(uVar5,lVar3 + 0x108,&local_70,0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  local_70 = 0xcbf29ce484222645;
  if (local_50[0] != 0) {
    pbVar4 = (byte *)((ulong)local_50 | 1);
    do {
      local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
      local_50[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_50[0] != 0);
  }
  local_68 = local_50;
  local_60 = 0x1f;
  local_58 = 0;
  uVar2 = FUN_008962c0(*(long *)puVar1 + 0x108,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return uVar2;
}


