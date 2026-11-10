/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7d50; name: FUN_012e7d50
 */


uint FUN_012e7d50(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_30 [2];
  
  *(undefined4 *)(param_1 + 0x820) = param_2;
  *(undefined8 *)(param_1 + 0x828) = param_3;
  FUN_0130f9a0(local_30);
  if (local_30[0] != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(local_30[0] + 0x50))();
    if (((*PTR_DAT_02727ad0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02727ad0), iVar2 != 0)) {
      uVar4 = FUN_012ec770();
      *(undefined8 *)PTR_DAT_02727ad8 = uVar4;
      __cxa_guard_release(PTR_DAT_02727ad0);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02727ad8) {
        if (local_30[0] != 0) {
          (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
        }
        uVar1 = 1;
        goto LAB_012e7dec;
      }
    }
    if (local_30[0] != 0) {
      (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
    }
  }
  local_30[0] = -0x54d8da8604729467;
  local_30[1] = 0;
  uVar1 = FUN_0130ff30(param_1,local_30);
LAB_012e7dec:
  return uVar1 & 1;
}


