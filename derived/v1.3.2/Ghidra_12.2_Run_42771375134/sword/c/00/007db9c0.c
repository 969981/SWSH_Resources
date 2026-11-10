/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007db9c0; name: FUN_007db9c0
 */


undefined8 FUN_007db9c0(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ErrorResultVariant *this;
  undefined8 uVar2;
  uint local_70 [6];
  uint local_58 [4];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  
  local_48 = 0;
  local_34 = 0;
  lVar1 = *param_2;
  while ((**(code **)(lVar1 + 0x78))(local_58,param_2,&local_48,param_1 + 0xf0,&local_34,0x24000),
        local_58[0] == 0) {
    FUN_007db620(param_1,local_48,param_1 + 0xf0,local_34,param_3);
    lVar1 = *param_2;
  }
  local_70[0] = 0x2c09;
  this = (ErrorResultVariant *)((ulong)local_70 | 4);
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  local_38 = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)&local_38);
  if (local_58[0] == local_70[0]) {
    local_70[0] = 0x2c03;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_38 = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&local_38);
    if (local_58[0] == local_70[0]) {
      uVar2 = *(undefined8 *)PTR_DAT_027104a0;
      local_70[0] = local_70[0] & 0xffffff00;
      FUN_018724d0((ulong)local_70 | 4,local_58);
      local_70[0] = CONCAT31(local_70[0]._1_3_,1);
      FUN_007a8040(uVar2,local_70);
      return 0;
    }
  }
  return 1;
}


