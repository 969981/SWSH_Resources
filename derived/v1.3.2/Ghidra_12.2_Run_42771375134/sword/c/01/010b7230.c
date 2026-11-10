/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b7230; name: FUN_010b7230
 */


void FUN_010b7230(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_28;
  
  pcVar1 = "anime_net_on";
  if ((param_2 & 1) == 0) {
    pcVar1 = "anime_net_off";
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar1);
  FUN_00ff86a0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_28 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  uVar2 = 0x8c173dc0b3f40488;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x4f2904608ddc4c6;
  }
  local_38 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_010ad970(param_1,uVar2,0x8ed2da9135e89f43,&local_38,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


