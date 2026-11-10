/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b1310; name: FUN_010b1310
 */


uint FUN_010b1310(long param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  ulong local_18;
  
  pcVar3 = "anime_select_menu";
  if (param_2 != 0) {
    pcVar3 = "anime_select_stamp";
  }
  local_18 = 0xcbf29ce484222645;
  bVar1 = *pcVar3;
  while (bVar1 != 0) {
    pcVar3 = pcVar3 + 1;
    local_18 = (local_18 ^ bVar1) * 0x100000001b3;
    bVar1 = *pcVar3;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  return uVar2 & 1;
}


