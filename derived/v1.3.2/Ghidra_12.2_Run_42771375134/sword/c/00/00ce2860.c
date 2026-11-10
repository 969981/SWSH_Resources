/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce2860; name: FUN_00ce2860
 */


void FUN_00ce2860(long param_1,char param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long local_78;
  long local_70 [2];
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_70[1] = 0xb77c5ddd9ef78c2b;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c0),local_70 + 1,lVar4);
  lVar5 = *(long *)(lVar3 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_014ca220(lVar5,0,param_4,3,1,1);
  puVar1 = PTR_DAT_0271c9b8;
  puVar6 = PTR_DAT_0271c9b8 + (long)param_2 * 0x18;
  FUN_0167cce0(lVar3,puVar6,10);
  local_70[0] = *(long *)(param_1 + 0x6c0);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  FUN_008c4e70(param_1 + 0x100,puVar6 + 8,local_70,PTR_DAT_0271c9c0 + ((param_3 << 0x38) >> 0x35),10
              );
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  local_78 = *(long *)(param_1 + 0x6c0);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  local_70[1] = 0xa2899bc0a0bedc04;
  FUN_008c4e70(param_1 + 0x100,puVar1 + (long)param_2 * 0x18 + 0x10,&local_78,local_70 + 1,10);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar6);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar6 + 8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + (long)param_2 * 0x18 + 0x10);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


