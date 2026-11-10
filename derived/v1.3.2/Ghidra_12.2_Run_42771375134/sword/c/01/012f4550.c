/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f4550; name: FUN_012f4550
 */


long * FUN_012f4550(long param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = param_2;
  if (param_3 != param_4) {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                               (*(long **)(param_1 + 0x18),0x18,8);
    if (plVar2 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))();
    }
    *plVar2 = 0;
    puVar1 = PTR_DAT_02710860;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_012f46d8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar6 = 1;
    plVar2[2] = *param_3;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    plVar7 = plVar2;
    while (param_3 = param_3 + 1, param_3 != param_4) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),0x18,8);
      if (puVar4 == (undefined8 *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_012f46d8;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar6 = lVar6 + 1;
      puVar4[2] = *param_3;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      plVar7[1] = (long)puVar4;
      *puVar4 = plVar7;
      plVar7 = (long *)plVar7[1];
    }
    *(long **)(*param_2 + 8) = plVar2;
    *plVar2 = *param_2;
    *param_2 = (long)plVar7;
    plVar7[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar6;
  }
  return plVar2;
}


