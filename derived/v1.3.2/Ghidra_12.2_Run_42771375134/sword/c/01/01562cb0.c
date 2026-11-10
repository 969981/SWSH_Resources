/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01562cb0; name: FUN_01562cb0
 */


void FUN_01562cb0(undefined8 *param_1)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  nn::crypto::detail::Sha256Impl::Initialize();
  local_50 = DAT_02173270;
  uStack_48 = DAT_02173278;
  local_60 = DAT_02173260;
  uStack_58 = DAT_02173268;
  local_30 = DAT_02173290;
  uStack_28 = DAT_02173298;
  local_40 = DAT_02173280;
  uStack_38 = DAT_02173288;
  nn::crypto::detail::Sha256Impl::Update(param_1 + 2,(ulong)&local_60);
  return;
}


