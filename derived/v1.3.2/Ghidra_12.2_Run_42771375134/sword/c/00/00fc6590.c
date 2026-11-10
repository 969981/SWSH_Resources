/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6590; name: FUN_00fc6590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fc6590(long param_1)

{
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x630) != 0) {
    pcStack_48 = (char *)_UNK_01d49dc8;
    local_50 = _DAT_01d49dc0;
    uStack_28 = _UNK_01d4b588;
    local_30 = _DAT_01d4b580;
    FUN_00895e30(*(long *)(param_1 + 0x630),param_1 + 0xb0,&local_50,&local_30);
    if (*(char *)(param_1 + 0x628) == '\0') {
      local_50 = 0x91265563f6f13845;
      pcStack_48 = "Play_Prop_Gimmik_G_nest";
      local_40 = 0x17;
    }
    else {
      local_50 = 0xdb32e9a30af25823;
      pcStack_48 = "Play_Prop_Gimmick_G_nest_Rare";
      local_40 = 0x1d;
    }
    local_38 = 0;
    FUN_00895fd0(*(undefined8 *)(param_1 + 0x630),&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


