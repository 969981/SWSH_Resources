/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01166040; name: FUN_01166040
 */


uint FUN_01166040(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_01153d60();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        uVar4 = FUN_01164670(puVar5 + -10);
        goto joined_r0x01166118;
      }
    }
  }
  uVar4 = FUN_01164670(0);
joined_r0x01166118:
  if (((uVar4 & 1) == 0) && (FUN_011ffb60(&local_28,*(undefined8 *)PTR_DAT_02718f20), local_28 != 0)
     ) {
    lVar3 = *(long *)(local_28 + 0x10);
    uVar1 = 0;
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x288);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      uVar4 = FUN_014fbc10(lVar6,lVar3 + 0x60);
      if ((uVar4 & 1) == 0) {
        uVar1 = FUN_014fbbd0(lVar6);
        uVar1 = uVar1 ^ 1;
      }
      else {
        uVar1 = 0;
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


