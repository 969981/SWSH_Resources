/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb0b70; name: FUN_00cb0b70
 */


long * FUN_00cb0b70(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x48,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_4;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar3[2] = 0;
  puVar2 = PTR_DAT_0271c400;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar6 = (undefined8 *)*param_3;
  *param_3 = plVar3;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_3[1] + 0x18))((long *)param_3[1],puVar6,param_3[2],param_3[3]);
    plVar3 = (long *)*param_3;
  }
  param_3[1] = param_4;
  param_3[2] = 0x48;
  param_3[3] = 8;
  lVar4 = *(long *)(param_2 + 0x10);
  plVar3[1] = *(long *)(param_2 + 8);
  plVar3[2] = lVar4;
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = plVar3[4];
  plVar3[4] = lVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x40);
  plVar3[7] = *(long *)(param_2 + 0x38);
  plVar3[8] = lVar1;
  plVar3[5] = lVar4;
  plVar3[6] = lVar5;
  return plVar3;
}


