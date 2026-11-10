/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1010; name: FUN_00dc1010
 */


void FUN_00dc1010(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_38;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  local_24 = param_4;
  lVar2 = FUN_00db4870(auStack_28,*(undefined8 *)(param_1 + 8),param_1 + 0x288,&local_24);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = lVar2;
  FUN_006d9640(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(lVar2 + 0x80) == 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 8);
  if (*(int *)(*(long *)(lVar2 + 0x80) + 0x54) == 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x80) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x80) + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_00dc10f0;
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715290 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715290), iVar1 != 0)) {
      uVar4 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715298 = uVar4;
      __cxa_guard_release(PTR_DAT_02715290);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02715298) {
        puVar6 = puVar6 + -10;
        goto LAB_00dc10f0;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00dc10f0:
  FUN_006cb0d0(puVar6);
  FUN_006cb4e0(puVar6,PTR_DAT_02715088,lVar5 + 0x1b0);
  FUN_012c4020(lVar2,*(undefined4 *)(lVar2 + 0xa8));
  return;
}


