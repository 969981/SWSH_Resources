/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e49f0; name: FUN_007e49f0
 */


uint FUN_007e49f0(long param_1,string *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  std::string::string((string *)&local_48,param_2);
  uVar2 = std::string::rfind((char)&local_48,0x2e);
  if (uVar2 != 0xffffffffffffffff) {
    do {
      std::string::string((string *)&local_60,(string *)&local_48,0,uVar2,(allocator *)&local_48);
      if ((local_48 & 1) != 0) {
        *local_38 = 0;
        local_40 = 0;
        if ((local_48 & 1) != 0) {
          operator_delete(local_38);
        }
      }
      local_38 = local_50;
      local_40 = local_58;
      local_48 = local_60;
      uVar1 = FUN_007e2eb0(*(undefined8 *)(param_1 + 0x20),&local_48);
      if ((uVar1 | 8) != 8) {
        uVar1 = 1;
        goto joined_r0x007e4b0c;
      }
      uVar2 = std::string::rfind((char)&local_48,0x2e);
    } while (uVar2 != 0xffffffffffffffff);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007e49f0(*(long *)(param_1 + 0x18),param_2);
  }
joined_r0x007e4b0c:
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar1 & 1;
}


