/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce2f0; name: FUN_00cce2f0
 */


void FUN_00cce2f0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_48 = 0x9b5ff953376fe6fd;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c8),&local_48,lVar2);
  lVar3 = *(long *)(lVar1 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_014ca220(lVar3,0,(ulong)param_2 / 0x3c,2,1,1);
  local_48 = 0xcc7d5db2ff0c983c;
  FUN_0167cce0(lVar1,&local_48,10);
  FUN_014ca220(lVar3,0,param_2 % 0x3c,2,2,1);
  local_48 = 0xf38b975dd591280c;
  FUN_0167cce0(lVar1,&local_48,10);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


