/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7b710; name: FUN_00d7b710
 */


void FUN_00d7b710(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  ulong local_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      iVar1 = *(int *)(param_1 + 0x88);
      goto joined_r0x00d7b868;
    }
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_00d74330();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar6 = puVar6 + -10;
        iVar1 = *(int *)(param_1 + 0x88);
        goto joined_r0x00d7b8c8;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x88);
joined_r0x00d7b868:
  puVar6 = (undefined8 *)0x0;
joined_r0x00d7b8c8:
  if (iVar1 == 10) {
    uVar4 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar4 & 1) != 0) {
      iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
      if (iVar1 == 0) {
        FUN_00d81010(*(undefined8 *)(param_1 + 0x78));
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      FUN_00d7c010(param_1);
      return;
    }
  }
  else if (iVar1 == 0) {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
    local_28 = local_28 & 0xffffffffffffff00;
    FUN_00d7e7a0(*(undefined8 *)(param_1 + 0x78),&local_28);
    local_28 = local_28 & 0xffffffffffffff00;
    FUN_00d7d400(*(undefined8 *)(param_1 + 0x78),&local_28);
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar5 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar5;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
    }
    FUN_00d70930(&local_28,*(undefined8 *)(puVar7[0x9f] + 0xb0));
    local_38 = 0x16ad7faacf71f8fe;
    FUN_0077eb10(local_28,&local_38,puVar6[0x71]);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
              (*(long **)(param_1 + 0x80),puVar6 + 0x66,puVar6 + 0x69);
    *(undefined4 *)(param_1 + 0x88) = 10;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


