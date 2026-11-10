/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007de4a0; name: FUN_007de4a0
 */


void FUN_007de4a0(int *param_1)

{
  ulong uVar1;
  int local_48 [4];
  ErrorResultVariant aEStack_38 [16];
  undefined4 local_28 [2];
  
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_38);
  FUN_01872680(local_48,param_1,aEStack_38);
  if (local_48[0] != 0) {
    return;
  }
  local_48[0] = 0xa46e;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  if (*param_1 != local_48[0]) {
    nn::err::ErrorResultVariant::operator_cast_to_ErrorCode(aEStack_38);
    uVar1 = nn::err::IsNetworkServiceError();
    if ((uVar1 & 1) != 0) {
      nn::err::ErrorResultVariant::operator_cast_to_ErrorCode(aEStack_38);
      nn::err::ShowNetworkServiceError();
      return;
    }
  }
  nn::err::ShowError(aEStack_38);
  return;
}


