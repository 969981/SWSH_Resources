/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c013a0; name: FUN_00c013a0
 */


void FUN_00c013a0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0x860) + 0x58);
  if (((bVar1 & 1) == 0) && ((*(byte *)(*(long *)(param_1 + 0x868) + 0x58) & 1) == 0)) {
    *(byte *)(*(long *)(param_1 + 0x860) + 0x58) = bVar1 | 1;
    *(byte *)(*(long *)(param_1 + 0x868) + 0x58) = *(byte *)(*(long *)(param_1 + 0x868) + 0x58) | 1;
    FUN_00ffcf80(param_1 + 0x100,"anime_L_card_rival_search_P_matchmake_icon_00_in");
    FUN_00ffcf80(param_1 + 0x100,"anime_L_card_rival_search_P_matchmake_icon_00_keep");
    return;
  }
  return;
}


