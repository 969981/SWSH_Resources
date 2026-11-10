/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3b580; name: FUN_00f3b580
 */


undefined8 * FUN_00f3b580(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar5 = *param_1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar5;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    plVar4 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x30,8);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 0xb8))();
    }
    *plVar4 = 0;
    uVar5 = param_1[6];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      plVar4[2] = (long)puVar2;
      plVar4[3] = (long)plVar6;
      plVar4[4] = 0x30;
      plVar4[5] = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      plVar4[1] = (long)(param_1 + 3);
      lVar3 = param_1[3];
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      param_1[3] = plVar4;
      param_1[5] = param_1[5] + 1;
      return puVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


