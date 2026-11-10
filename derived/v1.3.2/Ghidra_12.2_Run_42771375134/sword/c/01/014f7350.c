/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f7350; name: FUN_014f7350
 */


void FUN_014f7350(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong local_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x618);
  bVar1 = *param_3;
  local_48 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    local_48 = 0xcbf29ce484222645;
    do {
      param_3 = param_3 + 1;
      local_48 = (local_48 ^ bVar1) * 0x100000001b3;
      bVar1 = *param_3;
    } while (bVar1 != 0);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar5 == 0) {
    FUN_0077eb10(uVar4,&local_48,0);
    lVar5 = *(long *)(param_1 + 0x610);
    bVar1 = *param_2;
    local_48 = 0xcbf29ce484222645;
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar4,&local_48,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *(long *)(param_1 + 0x610);
    bVar1 = *param_2;
    local_48 = 0xcbf29ce484222645;
  }
  while (bVar1 != 0) {
    uVar2 = (ulong)bVar1;
    param_2 = param_2 + 1;
    local_48 = (local_48 ^ uVar2) * 0x100000001b3;
    bVar1 = *param_2;
  }
  lVar3 = *(long *)(lVar5 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0167c9b0(lVar5,&local_48,0,10);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0167c9b0(lVar5,&local_48,lVar3,10);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


