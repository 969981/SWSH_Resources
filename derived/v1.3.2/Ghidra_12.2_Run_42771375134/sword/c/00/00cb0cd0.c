/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb0cd0; name: FUN_00cb0cd0
 */


long * FUN_00cb0cd0(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0xd0,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = PTR_DAT_0271c478;
  *(undefined4 *)(plVar2 + 1) = 2;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_00cc10e0(plVar2 + 7);
  plVar2[0x19] = 0;
  *(undefined4 *)(plVar2 + 1) = 0xc;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar5 = (undefined8 *)*param_3;
  *param_3 = plVar2;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_3[1] + 0x18))((long *)param_3[1],puVar5,param_3[2],param_3[3]);
    plVar2 = (long *)*param_3;
  }
  param_3[1] = param_4;
  param_3[2] = 0xd0;
  param_3[3] = 8;
  lVar3 = *(long *)(param_2 + 0x10);
  plVar2[1] = *(long *)(param_2 + 8);
  plVar2[2] = lVar3;
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = plVar2[4];
  plVar2[4] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  memcpy(plVar2 + 5,(void *)(param_2 + 0x28),0xa8);
  return plVar2;
}


