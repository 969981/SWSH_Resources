/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d98e00; name: FUN_00d98e00
 */


void FUN_00d98e00(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x4d8);
  if (lVar2 == -0x340d631b7bddd9bb) {
    lVar2 = FUN_00e7e2e0();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  local_40 = lVar2;
  if (lVar3 == 0) {
    lVar3 = FUN_010096d0(0,&local_40);
    local_48 = lVar3;
    lVar2 = lVar3;
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar2 = FUN_010096d0(lVar3,&local_40);
    local_48 = lVar2;
    lVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar5 = &local_40;
  if (lVar2 != -0x340d631b7bddd9bb) {
    plVar5 = &local_48;
  }
  lVar4 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 400);
  local_38 = FUN_00d98f60(lVar3,lVar4);
  lVar2 = FUN_0167b6b0(uVar6,&local_38);
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 400);
    lVar4 = 0x19b5dc049d8cb3e;
    local_38 = FUN_00d98f60(0,0x19b5dc049d8cb3e);
    lVar2 = FUN_0167b6b0(uVar6,&local_38);
  }
  local_38 = 0x4f9df3c354ab690d;
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_38);
  uVar1 = *(undefined4 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
  *(undefined4 *)(lVar3 + 0x38) = uVar1;
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  *(long *)(param_1 + 0x4d0) = lVar4;
  return;
}


