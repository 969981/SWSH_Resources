/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71370; name: FUN_00d71370
 */


bool FUN_00d71370(undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined1 local_180 [4];
  undefined8 local_17c;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_148;
  long local_40;
  undefined8 local_38;
  
  uVar1 = *param_1;
  local_38 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar3 == 0) {
    FUN_00c58c10(&local_40,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00c58c10(&local_40,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_180[0] = 0;
  local_17c = 0x3ff00000000;
  local_148 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  FUN_00cc4490(local_40,uVar1,1,&local_38,local_180);
  uVar2 = local_148;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return (uVar2 & 0x80) == 0;
}


