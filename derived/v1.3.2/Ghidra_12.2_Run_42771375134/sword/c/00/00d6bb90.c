/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6bb90; name: FUN_00d6bb90
 */


void FUN_00d6bb90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  FUN_0101bf00();
  plVar1 = param_1 + 0x11;
  puVar2 = PTR_DAT_0271e290 + 0xb8;
  puVar3 = PTR_DAT_0271e290 + 0xf8;
  *param_1 = (long)(PTR_DAT_0271e290 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  FUN_01565c40(plVar1);
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  FUN_013d8680(plVar1,param_2);
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = param_1[0xf];
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  plVar4 = (long *)param_1[0x15];
  local_50 = lVar5;
  lStack_48 = lVar6;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar4;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,0x588,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_00d6aa00(lVar6,plVar1,&local_50);
  *(long **)(lVar6 + 8) = plVar4;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x588;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x99] != 0) {
    (**(code **)(*(long *)(param_1[0x99] + 0x48) + 0x18))();
    param_1[0x99] = 0;
  }
  param_1[0x99] = lVar6;
  return;
}


