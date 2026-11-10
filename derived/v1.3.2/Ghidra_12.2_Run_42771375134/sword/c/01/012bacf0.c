/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012bacf0; name: FUN_012bacf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_012bacf0(void)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *local_170;
  char *local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined8 local_28;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(_DAT_00000790 + 0x10);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x790) + 0x10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_170 = (undefined *)0xb059dd7e20c2c317;
  local_168 = "script/place_name.dat";
  local_160 = 0x15;
  local_158 = (code *)0x0;
  local_28 = uVar6;
  FUN_014bfd20(local_60,&local_170,10);
  if (local_158 != (code *)0x0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = (code *)0x0;
  }
  FUN_014cd600(&local_170,*(undefined8 *)PTR_DAT_02710890,local_60);
  iVar3 = 4;
  if ((local_168 != (char *)0x0) && (iVar3 = FUN_006e7220(local_168,&local_28), iVar3 < 0)) {
    iVar3 = 4;
  }
  local_170 = PTR_DAT_02710ad8 + 0x10;
  if (local_168 == (char *)0x0) {
    local_168 = (char *)0x0;
    pcVar1 = local_d8;
  }
  else {
    FUN_006e2100(local_168,&local_170);
    pcVar2 = local_168;
    local_168 = (char *)0x0;
    pcVar1 = local_d8;
    if (pcVar2 != (char *)0x0) {
      (**(code **)(*(long *)(pcVar2 + 0x48) + 0x18))();
      pcVar1 = local_d8;
    }
  }
  local_d8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  pcVar1 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar1)(auStack_140);
  }
  if (local_168 != (char *)0x0) {
    (**(code **)(*(long *)((long)local_168 + 0x48) + 0x18))();
    local_168 = (char *)0x0;
  }
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
  return iVar3;
}


