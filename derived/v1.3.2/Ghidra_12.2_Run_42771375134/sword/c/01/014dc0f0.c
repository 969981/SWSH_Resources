/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014dc0f0; name: FUN_014dc0f0
 */


undefined8 * FUN_014dc0f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long local_38;
  
  plVar1 = (long *)FUN_00ff5cf0();
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1,0x80,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1);
  }
  FUN_014e1880(plVar3,param_1);
  plVar3[1] = (long)plVar1;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x80;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  *(long **)(param_1 + 0x2c8) = plVar3;
  (**(code **)(*plVar3 + 0x10))(&local_38,plVar3);
  if (local_38 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(local_38 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar4)(puVar4);
      lVar2 = FUN_014dd1a0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar4 = puVar4 + -10;
          goto joined_r0x014dc26c;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
joined_r0x014dc26c:
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return puVar4;
}


