/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141a260; name: FUN_0141a260
 */


void FUN_0141a260(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = 0x17cb87db2dc3a2ee;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_00ffd450((float)param_2,param_1 + 0x100,"anime_g_text");
  return;
}


