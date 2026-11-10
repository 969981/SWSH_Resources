/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dd210; name: FUN_010dd210
 */


void FUN_010dd210(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_58;
  long local_50;
  long local_48 [2];
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar3 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar3;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  local_48[1] = 0x1e0b16eaeac74211;
  local_38 = "OptionBar";
  local_30 = 9;
  local_28 = 0;
  uVar3 = FUN_0089c480(puVar4[0x9f],local_48 + 1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_01036e20(uVar3);
  FUN_010cd030(local_48,*(undefined8 *)(param_1 + 0x78),0);
  FUN_01036db0(uVar3,0,1,local_48);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
    local_48[0] = 0;
  }
  FUN_010cd030(&local_50,*(undefined8 *)(param_1 + 0x78),1);
  FUN_01036db0(uVar3,1,0,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_010cd030(&local_58,*(undefined8 *)(param_1 + 0x78),2);
  FUN_01036db0(uVar3,2,3,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


