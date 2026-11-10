/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c1e40; name: FUN_008c1e40
 */


void FUN_008c1e40(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_18;
  
  if (param_2 == 1) {
    FUN_00ffcf80(param_1 + 0x100,"anime_f_out");
    return;
  }
  if (param_2 == 0) {
    FUN_00ffcf80(param_1 + 0x100,"anime_f_in");
    local_18 = 0x40a8bc4b5ca60901;
    lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  }
  return;
}


