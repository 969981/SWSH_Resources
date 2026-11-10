/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ec2e0; name: FUN_007ec2e0
 */


void FUN_007ec2e0(undefined8 param_1,long param_2,int param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte local_60 [16];
  void *local_50;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  std::operator+("Import \"",*(string **)(*(long *)(param_2 + 0x38) + (long)param_3 * 8 + 8));
  puVar1 = (ulong *)std::string::append((char *)local_60);
  local_48 = *puVar1;
  local_40 = puVar1[1];
  local_38 = (void *)puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_007eaaf0(param_1,uVar2,param_2,9,&local_48);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  return;
}


