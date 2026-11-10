/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007765f0; name: FUN_007765f0
 */


undefined8 FUN_007765f0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  long local_50;
  char local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x80) + 0x50))
            (*(long **)(param_1 + 0x80),param_2,*(undefined8 *)(param_3 + 8));
  local_50 = 0;
  local_40 = 0x42c8000000000000;
  local_38 = 0x13f800000;
  local_30 = 0x3f800000ffffffff;
  local_48 = '\0';
  local_28 = 0xff;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),param_2,&local_50);
  if ((local_50 != 0) && (local_48 != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    local_48 = '\0';
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x68))
                    (*(long **)(param_1 + 0x80),param_2,PTR_DAT_027161a8,1);
  if (iVar1 == 1) {
    local_78 = 0;
    uStack_70 = 0x3f800000;
    local_68 = 0x3f800000;
    local_5c = 0;
    local_64 = 0;
    FUN_007757e0(*(undefined8 *)(param_1 + 0x20),param_2,&local_78);
    return 1;
  }
  return 0;
}


