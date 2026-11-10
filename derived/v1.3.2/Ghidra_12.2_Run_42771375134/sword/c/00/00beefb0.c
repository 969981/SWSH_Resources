/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beefb0; name: FUN_00beefb0
 */


void FUN_00beefb0(long param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_40;
  ulong local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_38 = (local_38 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,&local_38,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x840);
  local_40 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_016bbe20(uVar2,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


