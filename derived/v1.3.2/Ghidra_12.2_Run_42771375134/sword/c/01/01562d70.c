/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01562d70; name: FUN_01562d70
 */


void FUN_01562d70(undefined8 *param_1,long param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_60 = DAT_021732b0;
    uStack_58 = DAT_021732b8;
    local_70 = DAT_021732a0;
    uStack_68 = DAT_021732a8;
    local_40 = DAT_021732d0;
    uStack_38 = DAT_021732d8;
    local_50 = DAT_021732c0;
    uStack_48 = DAT_021732c8;
    nn::crypto::detail::Sha256Impl::Update((void *)(param_2 + 0x10),(ulong)&local_70);
    *(undefined1 *)(param_2 + 8) = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::crypto::detail::Sha256Impl::GetHash((void *)(param_2 + 0x10),(ulong)param_1);
  return;
}


