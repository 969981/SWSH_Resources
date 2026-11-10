/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b6f00; name: FUN_010b6f00
 */


void FUN_010b6f00(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  if (*(byte *)(param_1 + 0x620) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x620) = param_2 & 1;
    pcVar2 = "anime_new_in";
    if ((param_2 & 1) == 0) {
      pcVar2 = "anime_new_out";
    }
    FUN_00ffcf80(param_1 + 0x100,pcVar2);
  }
  lVar1 = param_1 + 0x100;
  if ((param_2 & 1) != 0) {
    FUN_00ffcf80(lVar1,"anime_ptn_new");
    FUN_00ffd450((float)(param_3 & 1),lVar1,"anime_ptn_new");
  }
  local_38 = 0xaa9746b0d29093b6;
  uVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  FUN_00ffd840(lVar1,uVar3);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x600),*(undefined1 *)(param_1 + 0x620));
  return;
}


