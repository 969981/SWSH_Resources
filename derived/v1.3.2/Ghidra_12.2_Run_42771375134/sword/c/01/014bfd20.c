/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bfd20; name: FUN_014bfd20
 */


void FUN_014bfd20(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long local_90;
  undefined8 local_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  iVar1 = DAT_02a7496c;
  if (param_3 != 10) {
    iVar1 = param_3;
  }
  local_38 = 0;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_40 = 0;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  switch(iVar1) {
  case 1:
    FUN_014bffc0(&local_90,"bin/message/JPN_KANJI/");
    goto joined_r0x014bfdc4;
  case 2:
    FUN_014c00f0(&local_90,"bin/message/English/");
joined_r0x014bfdc4:
    if (local_48 == 0) goto LAB_014bfec0;
    goto LAB_014bfea8;
  case 3:
    FUN_014c0220(&local_90,"bin/message/French/");
    break;
  case 4:
    FUN_014c00f0(&local_90,"bin/message/Italian/");
    break;
  case 5:
    FUN_014c0220(&local_90,"bin/message/German/");
    break;
  case 6:
    FUN_014c00f0(&local_90,"bin/message/Spanish/");
    break;
  case 7:
    FUN_014c0220(&local_90,"bin/message/Korean/");
    break;
  case 8:
    FUN_014c0350(&local_90,"bin/message/Simp_Chinese/");
    break;
  case 9:
    FUN_014c0350(&local_90,"bin/message/Trad_Chinese/");
    break;
  default:
    FUN_006e3720(&local_90,"bin/message/JPN/");
  }
  if (local_48 != 0) {
LAB_014bfea8:
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
  }
LAB_014bfec0:
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = local_70;
  local_58 = local_88;
  local_50 = local_80;
  local_70 = 0;
  local_48 = local_78;
  local_38 = local_68;
  if (local_78 == 0) {
    local_60 = local_90;
  }
  else {
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    local_60 = local_90;
  }
  local_90 = 0;
  local_88 = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_006bbbf0(param_1,&local_60,param_2,&DAT_01d38550);
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


