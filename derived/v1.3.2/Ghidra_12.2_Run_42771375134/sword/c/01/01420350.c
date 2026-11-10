/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01420350; name: FUN_01420350
 */


void FUN_01420350(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong local_58;
  
  FUN_00ffa290(param_1,0,1);
  lVar7 = *(long *)(param_1 + 0x528);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar1 = param_1 + 0x100;
  if (*(long *)(param_1 + 0x650) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x650) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x650) = 0;
  }
  *(long *)(param_1 + 0x650) = lVar7;
  puVar3 = PTR_PTR_02729a00;
  pbVar6 = *(byte **)PTR_PTR_02729a00;
  bVar2 = *pbVar6;
  local_58 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    local_58 = 0xcbf29ce484222645;
    do {
      pbVar6 = pbVar6 + 1;
      local_58 = (local_58 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
    } while (bVar2 != 0);
  }
  lVar7 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_0168b110(*(undefined8 *)(*(long *)(param_1 + 0x650) + 0x180),*(undefined8 *)(param_1 + 8),
               lVar7,0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  puVar4 = PTR_PTR_02729a08;
  FUN_00ffcf80(lVar1,*(undefined8 *)PTR_PTR_02729a08);
  puVar5 = PTR_PTR_02729a10;
  FUN_00ffd6a0(lVar1,*(undefined8 *)PTR_PTR_02729a10,&DAT_02158da8,10);
  pbVar6 = *(byte **)(puVar3 + 8);
  local_58 = 0xcbf29ce484222645;
  bVar2 = *pbVar6;
  if (bVar2 != 0) {
    local_58 = 0xcbf29ce484222645;
    do {
      pbVar6 = pbVar6 + 1;
      local_58 = (local_58 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
    } while (bVar2 != 0);
  }
  lVar7 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_0168b110(*(long *)(*(long *)(param_1 + 0x650) + 0x180) + 0x3d0,*(undefined8 *)(param_1 + 8),
               lVar7,0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  FUN_00ffcf80(lVar1,*(undefined8 *)(puVar4 + 0x10));
  FUN_00ffd6a0(lVar1,*(undefined8 *)(puVar5 + 8),&DAT_02158da8,10);
  pbVar6 = *(byte **)(puVar3 + 0x10);
  local_58 = 0xcbf29ce484222645;
  bVar2 = *pbVar6;
  if (bVar2 != 0) {
    local_58 = 0xcbf29ce484222645;
    do {
      pbVar6 = pbVar6 + 1;
      local_58 = (local_58 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
    } while (bVar2 != 0);
  }
  lVar7 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_0168b110(*(long *)(*(long *)(param_1 + 0x650) + 0x180) + 0x7a0,*(undefined8 *)(param_1 + 8),
               lVar7,0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  FUN_00ffcf80(lVar1,*(undefined8 *)(puVar4 + 0x20));
  FUN_00ffd6a0(lVar1,*(undefined8 *)(puVar5 + 0x10),&DAT_02158da8,10);
  pbVar6 = *(byte **)(puVar3 + 0x18);
  bVar2 = *pbVar6;
  local_58 = 0xcbf29ce484222645;
  while (bVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    local_58 = (local_58 ^ bVar2) * 0x100000001b3;
    bVar2 = *pbVar6;
  }
  lVar7 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_0168b110(*(long *)(*(long *)(param_1 + 0x650) + 0x180) + 0xb70,*(undefined8 *)(param_1 + 8),
               lVar7,0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  FUN_00ffcf80(lVar1,*(undefined8 *)(puVar4 + 0x30));
  FUN_00ffd6a0(lVar1,*(undefined8 *)(puVar5 + 0x18),&DAT_02158da8,10);
  return;
}


