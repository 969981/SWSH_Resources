/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fafe0; name: FUN_013fafe0
 */


void FUN_013fafe0(long param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  byte local_47;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 local_38;
  
  local_47 = param_3 & 1;
  local_58 = 0;
  local_46 = 0;
  local_48 = 0;
  switch(param_4) {
  default:
    local_50 = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x188);
    break;
  case 1:
    local_50 = 1;
    lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x188);
    break;
  case 2:
    local_50 = 0x1e00000002;
    goto LAB_013fb12c;
  case 3:
    local_50 = 0x3c00000003;
LAB_013fb12c:
    lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x188);
  }
  local_40 = param_2;
  local_38 = param_2;
  if ((lVar2 == 0) || (iVar1 = FUN_006e7220(lVar2,&local_38), iVar1 < 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 200) + 0x188);
    if ((lVar2 == 0) || (iVar1 = FUN_006e7220(lVar2,&local_38), iVar1 < 0)) goto LAB_013fb0f8;
    lVar2 = *(long *)(*(long *)(param_1 + 200) + 0x60);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar2,&local_40,*(undefined8 *)(param_1 + 0xb0));
    FUN_014c62d0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8),*(undefined8 *)(param_1 + 0xb8),
                 *(undefined8 *)(param_1 + 0xb0));
    local_58 = *(undefined8 *)(param_1 + 0xb8);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
  }
LAB_013fb0f8:
  FUN_01038170(*(undefined8 *)(param_1 + 0xa8),&local_58);
  return;
}


