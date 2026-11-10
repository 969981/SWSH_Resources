/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006db5e0; name: FUN_006db5e0
 */


void FUN_006db5e0(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  
  (**(code **)(*param_2 + 0x10))(&local_38,param_2);
  if (*(long *)(param_1 + 0x108) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined8 *)(param_1 + 0x108) = local_38;
  (**(code **)(*param_4 + 0x10))(&local_38,param_4);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = local_38;
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,param_3);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  lVar3 = *(long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if ((param_2[0xd] != 0) &&
     (puVar6 = *(undefined8 **)(param_2[0xd] + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_02715080) {
        puVar6 = puVar6 + -10;
        goto LAB_006db708;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_006db708:
  FUN_006db260(param_1,puVar6,param_4);
  return;
}


