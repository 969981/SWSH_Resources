/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7dc80; name: FUN_00d7dc80
 */


void FUN_00d7dc80(long param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  FUN_00d70930(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  FUN_00d70990(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar3 = local_40;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar4 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar4);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  bVar2 = *(byte *)(lVar5 + 4);
  local_48 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar5 + 5);
    do {
      local_48 = (local_48 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  local_58 = local_40;
  local_50 = 0x5242abbb709d5a24;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  local_60 = local_38;
  if (local_38 == 0) {
    local_68 = -0x372ac50e40bf892d;
    FUN_00d80740(param_1,&local_48,&local_50,&local_58,&local_60,&local_68);
  }
  else {
    plVar7 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_68 = -0x372ac50e40bf892d;
    FUN_00d80740(param_1,&local_48,&local_50,&local_58,&local_60,&local_68);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_60 = 0;
  }
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_58 = 0;
  }
  lVar3 = local_40;
  local_48 = 0xeaabdf606fc987ba;
  local_50 = -0x445bb3fe1dbf1b37;
  local_70 = local_40;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  local_78 = local_38;
  if (local_38 == 0) {
    local_68 = -0x372ac60e40bf8ae0;
    FUN_00d80740(param_1,&local_48,&local_50,&local_70,&local_78,&local_68);
  }
  else {
    plVar7 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_68 = -0x372ac60e40bf8ae0;
    FUN_00d80740(param_1,&local_48,&local_50,&local_70,&local_78,&local_68);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_78 = 0;
  }
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_70 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


