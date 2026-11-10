/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131e290; name: FUN_0131e290
 */


void FUN_0131e290(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)(param_2 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(long *)(param_1 + 8) = lVar2;
  local_50 = 0x2d40ab2aef24467d;
  local_48 = "eye01";
  local_40 = 5;
  local_38 = 0;
  uVar1 = FUN_0069d0f0(param_2,&local_50);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_50 = 0x2f610c81ad42ffef;
  local_48 = "mouth01";
  local_40 = 7;
  local_38 = 0;
  uVar1 = FUN_0069d0f0(param_2,&local_50);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


