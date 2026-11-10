/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3710; name: FUN_014b3710
 */


undefined4 FUN_014b3710(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong local_70;
  byte *pbStack_68;
  undefined8 local_60;
  long local_58;
  byte local_50 [32];
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar3 = 0xcbf29ce484222645;
    snprintf((char *)local_50,0x20,"Play_PV_%03d_%02d_%02d",param_2,param_3,param_4);
    if (local_50[0] != 0) {
      pbVar2 = (byte *)((ulong)local_50 | 1);
      do {
        uVar3 = (uVar3 ^ local_50[0]) * 0x100000001b3;
        local_50[0] = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (local_50[0] != 0);
    }
    local_60 = 0x1f;
    local_58 = 0;
    local_70 = uVar3;
    pbStack_68 = local_50;
    uVar1 = FUN_00895fd0(param_1,&local_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  return uVar1;
}


