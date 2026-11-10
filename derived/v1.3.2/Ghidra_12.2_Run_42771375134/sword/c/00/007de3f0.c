/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007de3f0; name: FUN_007de3f0
 */


void FUN_007de3f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ApplicationErrorArg aAStack_1058 [4120];
  
  nn::err::ApplicationErrorArg::ApplicationErrorArg(aAStack_1058);
  nn::err::ApplicationErrorArg::SetApplicationErrorCodeNumber((uint)aAStack_1058);
  nn::err::ApplicationErrorArg::SetDialogMessage((char *)aAStack_1058);
  if (param_3 != 0) {
    nn::err::ApplicationErrorArg::SetFullScreenMessage((char *)aAStack_1058);
  }
  nn::err::ApplicationErrorArg::SetLanguageCode((LanguageCode *)aAStack_1058);
  nn::err::ShowApplicationError(aAStack_1058);
  return;
}


