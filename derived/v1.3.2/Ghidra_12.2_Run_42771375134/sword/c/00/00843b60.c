/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00843b60; name: FUN_00843b60
 */


undefined8 FUN_00843b60(string *param_1)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  string local_48 [8];
  ulong local_40;
  void *local_38;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar4 = (byte *)std::string::at((ulong)param_1);
    bVar3 = *pbVar4;
    if (((bVar3 - 0x61 < 0x1a) || (bVar3 == 0x5f)) || ((byte)(bVar3 + 0xbf) < 0x1a)) {
      std::string::string(local_48,param_1,1,0xffffffffffffffff,(allocator *)param_1);
      uVar1 = (ulong)((byte)local_48[0] >> 1);
      if (((byte)local_48[0] & 1) != 0) {
        uVar1 = local_40;
      }
      if (uVar1 != 0) {
        uVar5 = 0;
        pvVar2 = (void *)((ulong)local_48 | 1);
        if (((byte)local_48[0] & 1) != 0) {
          pvVar2 = local_38;
        }
        do {
          bVar3 = *(byte *)((long)pvVar2 + uVar5);
          if (((0x19 < (byte)((bVar3 & 0xdf) + 0xbf)) && (bVar3 != 0x5f)) &&
             (9 < (byte)(bVar3 - 0x30))) {
            uVar6 = 0;
            if (((byte)local_48[0] & 1) == 0) {
              return 0;
            }
            goto LAB_00843c64;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      uVar6 = 1;
      if (((byte)local_48[0] & 1) == 0) {
        return 1;
      }
LAB_00843c64:
      operator_delete(local_38);
      return uVar6;
    }
  }
  return 0;
}


