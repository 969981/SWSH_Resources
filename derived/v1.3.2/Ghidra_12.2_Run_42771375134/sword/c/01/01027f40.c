/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01027f40; name: FUN_01027f40
 */


bool FUN_01027f40(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  uVar2 = *(undefined8 *)PTR_DAT_02710890;
  local_80 = 0xb059dd7e20c2c317;
  local_78 = "script/place_name.dat";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014bfd20(local_60,&local_80,10);
  lVar1 = FUN_014cd1e0(uVar2,local_60);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar1 != 0) {
    FUN_0077e740(lVar1,param_1 & 0xffff,*param_2);
    FUN_0077e740(lVar1,(param_1 & 0xffff) + 1,*param_3);
  }
  return lVar1 != 0;
}


