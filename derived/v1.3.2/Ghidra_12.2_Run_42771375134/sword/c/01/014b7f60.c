/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7f60; name: FUN_014b7f60
 */


undefined8 * FUN_014b7f60(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long local_38;
  
  plVar2 = (long *)FUN_00ff5cf0();
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x60,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN_00ff5da0(plVar4,param_1);
  puVar1 = PTR_DAT_0272a260;
  *plVar4 = (long)(PTR_DAT_0272a260 + 0x10);
  plVar4[1] = (long)plVar2;
  plVar4[9] = (long)(puVar1 + 0x58);
  plVar4[10] = (long)(puVar1 + 0x98);
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x60;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  *(long **)(param_1 + 0x2c8) = plVar4;
  (**(code **)(*plVar4 + 0x10))(&local_38,plVar4);
  if (local_38 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = *(undefined8 **)(local_38 + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_014b86e0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto joined_r0x014b80fc;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
joined_r0x014b80fc:
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return puVar5;
}


