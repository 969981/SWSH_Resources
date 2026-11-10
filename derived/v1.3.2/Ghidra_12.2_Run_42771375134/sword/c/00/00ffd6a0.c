/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd6a0; name: FUN_00ffd6a0
 */


void FUN_00ffd6a0(long param_1,byte *param_2)

{
  byte bVar1;
  ulong local_18;
  
  local_18 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_18 = (local_18 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  FUN_0167c770(*(undefined8 *)(param_1 + 0x1b0),&local_18);
  return;
}


