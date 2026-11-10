/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fa3e0; name: FUN_011fa3e0
 */


void FUN_011fa3e0(undefined1 *param_1,int *param_2)

{
  ulong uVar1;
  ErrorResultVariant *pEVar2;
  int local_48 [4];
  undefined4 local_38 [2];
  
  local_48[0] = 0x6c51;
  pEVar2 = (ErrorResultVariant *)((ulong)local_48 | 4);
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar2);
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=(pEVar2,(Result *)local_38);
  if (*param_2 == local_48[0]) {
    uVar1 = 0xaf9a0ca0f452;
  }
  else {
    local_48[0] = 0x6c4c;
    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar2);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=(pEVar2,(Result *)local_38);
    if (*param_2 == local_48[0]) {
      uVar1 = 0xac9a0ca0ef39;
    }
    else {
      local_48[0] = 0x6c53;
      pEVar2 = (ErrorResultVariant *)((ulong)local_48 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(pEVar2);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(pEVar2,(Result *)local_38);
      if (*param_2 == local_48[0]) {
        uVar1 = 0xae9a0ca0f29f;
      }
      else {
        local_48[0] = 0x6c4b;
        nn::err::ErrorResultVariant::ErrorResultVariant(pEVar2);
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(pEVar2,(Result *)local_38);
        if (*param_2 == local_48[0]) {
          uVar1 = 0xab9a0ca0ed86;
        }
        else {
          local_48[0] = 0x6c4b;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4));
          local_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
          if (*param_2 != local_48[0]) {
            return;
          }
          uVar1 = 0xad9a0ca0f0ec;
        }
      }
    }
  }
  *(ulong *)(param_1 + 8) = uVar1 | 0xf02a000000000000;
  *param_1 = 1;
  return;
}


