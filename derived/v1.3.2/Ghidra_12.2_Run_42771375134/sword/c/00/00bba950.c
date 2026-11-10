/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bba950; name: FUN_00bba950
 */


void FUN_00bba950(long param_1,int param_2,ulong param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  ulong local_18;
  
  if (param_2 - 1U < 0x12) {
    if ((param_3 & 1) == 0) {
      pcVar2 = "anime_L_bg_box_list_01_bg_%02d";
    }
    else {
      pcVar2 = "anime_L_bg_box_list_02_bg_%02d";
    }
    snprintf((char *)&local_60,0x40,pcVar2);
  }
  else {
    if ((param_3 & 1) == 0) {
      pcVar2 = "anime_L_bg_box_list_01_bg_default";
    }
    else {
      pcVar2 = "anime_L_bg_box_list_02_bg_default";
    }
    local_40 = 0x74;
    local_50 = *(undefined8 *)(pcVar2 + 0x10);
    uStack_48 = *(undefined8 *)(pcVar2 + 0x18);
    local_60 = *(undefined8 *)pcVar2;
    uStack_58 = *(undefined8 *)(pcVar2 + 8);
  }
  local_18 = 0xcbf29ce484222645;
  if ((byte)local_60 != 0) {
    pbVar3 = (byte *)((ulong)&local_60 | 1);
    bVar1 = (byte)local_60;
    do {
      local_18 = (local_18 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd010(param_1 + 0x100,&local_18);
  return;
}


