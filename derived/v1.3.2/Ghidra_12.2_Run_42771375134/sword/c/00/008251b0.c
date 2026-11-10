/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008251b0; name: FUN_008251b0
 */


void FUN_008251b0(string *param_1,string *param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte local_48 [16];
  void *local_38;
  
  std::string::string(param_1,param_2);
  if (*(char *)((long)param_3 + 0x44) == '\0') {
    pbVar3 = (byte *)*param_3;
    pbVar1 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar1 = pbVar3 + 1;
    }
    std::string::append((char *)param_1,(ulong)pbVar1);
  }
  else {
    std::string::append((char *)param_1);
    pbVar3 = (byte *)param_3[1];
    pbVar1 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar1 = pbVar3 + 1;
    }
    std::string::append((char *)param_1,(ulong)pbVar1);
    std::string::append((char *)param_1);
  }
  if (param_4 != -1) {
    std::string::append((char *)param_1);
    FUN_007ffba0(local_48,param_4);
    pvVar2 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      pvVar2 = local_38;
    }
    std::string::append((char *)param_1,(ulong)pvVar2);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
    std::string::append((char *)param_1);
  }
  std::string::append((char *)param_1);
  return;
}


