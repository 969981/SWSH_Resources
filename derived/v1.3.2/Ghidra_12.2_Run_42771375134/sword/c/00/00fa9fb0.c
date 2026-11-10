/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9fb0; name: FUN_00fa9fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa9fb0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 == 0) {
    lVar1 = *(long *)(_DAT_00000060 + 0x630);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = *(long *)(*(long *)(lVar1 + 0x60) + 0x630);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 != 0) {
    FUN_016b0af0(lVar1,param_1 + 0x68);
  }
  lVar1 = FUN_009e3950(auStack_50,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar1;
  local_68 = 0xf6b0b4b489f86246;
  local_60 = "script/common_scr.dat";
  local_58 = 0x15;
  FUN_006cf0a0(auStack_50,&local_68);
  FUN_014bc440(lVar1,auStack_50,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar2 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x90));
  while ((uVar2 & 1) == 0) {
    nn::os::SleepThread(&LAB_00f42400);
    uVar2 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x90));
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x90) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar1;
  return;
}


