/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073840; name: FUN_01073840
 */


void FUN_01073840(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 local_28;
  
  switch(param_2) {
  case 0:
    pcVar3 = "anime_in";
    break;
  case 1:
    pcVar3 = "anime_out";
    break;
  case 2:
    pcVar3 = "anime_keep";
    break;
  case 3:
    pcVar3 = "anime_f_in";
    break;
  case 4:
    pcVar3 = "anime_f_out";
    break;
  case 5:
    FUN_00ffcf80(param_1 + 0x100,"anime_win_in");
    iVar1 = FUN_0106f480(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60));
    FUN_00ffd450((float)((iVar1 - (uint)*(byte *)(param_1 + 0x690) & 0xff) - 1),param_1 + 0x100,
                 "anime_ptn_win");
    local_28 = 0x26cacedb1bb27824;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    return;
  case 6:
    pcVar3 = "anime_win_out";
    break;
  default:
    return;
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar3);
  return;
}


