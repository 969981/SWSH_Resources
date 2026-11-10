/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cd030; name: FUN_010cd030
 */


void FUN_010cd030(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long local_38;
  
  lVar2 = *(long *)(param_2 + 0x2b0);
  if (3 < param_3) {
    param_3 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e8);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0077eb10(lVar2,&DAT_02163dc0 + (long)(int)param_3 * 8,lVar1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


