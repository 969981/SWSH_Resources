/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfdd10; name: FUN_00bfdd10
 */


void FUN_00bfdd10(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  long local_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x604) = param_2;
  local_38 = 0xcbf29ce484222645;
  uVar2 = 0x9f181b2629018487;
  switch(param_2) {
  case 0x77:
    uVar2 = 0x7fa2cf2c4ea12021;
    break;
  case 0x78:
    cVar1 = FUN_008d4270();
    uVar2 = 0x3be5c526a8bd0c90;
    if (cVar1 != ',') {
      uVar2 = 0x5972c84ac240d3ed;
    }
    break;
  case 0x79:
    uVar2 = 0x9149a7ff51f32f37;
    break;
  case 0x7a:
    uVar2 = 0x5fc98d85c8841c6;
    break;
  case 0x7b:
    break;
  default:
    goto switchD_00bfdd6c_default;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e8);
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  local_38 = uVar2;
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&local_38,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_38,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_40 = 0;
  local_48[0] = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_40 = lVar4;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) | 1;
  FUN_01036240(param_1,local_48);
  *(undefined4 *)(param_1 + 0x608) = 0;
switchD_00bfdd6c_default:
  return;
}


