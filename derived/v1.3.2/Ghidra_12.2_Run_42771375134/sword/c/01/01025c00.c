/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025c00; name: FUN_01025c00
 */


undefined8 FUN_01025c00(long param_1)

{
  int iVar1;
  undefined8 local_28;
  bool local_14 [4];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    local_14[0] = false;
    iVar1 = nn::account::IsNetworkServiceAccountAvailable(local_14,(UserHandle *)(param_1 + 0x58));
    if ((local_14[0] != false) && (iVar1 == 0)) {
      local_28 = 0;
      iVar1 = nn::account::GetNetworkServiceAccountId
                        ((NetworkServiceAccountId *)&local_28,(UserHandle *)(param_1 + 0x58));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


