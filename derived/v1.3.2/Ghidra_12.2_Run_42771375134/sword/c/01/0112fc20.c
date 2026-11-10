/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112fc20; name: FUN_0112fc20
 */


void FUN_0112fc20(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0112fc78;
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0112bfd0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_0112fc78;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0112fc78:
  FUN_0112d180(&local_50,puVar5);
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = local_50;
  FUN_0112d0e0(&local_50,puVar5);
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = local_50;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar4 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar4;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  local_50 = 0xa9f57b8d956ed09;
  local_48 = "ViewNestholeTimer";
  local_40 = 0x11;
  local_38 = 0;
  uVar4 = FUN_0112f590(puVar5[0x9f],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  return;
}


