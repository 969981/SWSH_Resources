/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d78d0; name: FUN_006d78d0
 */


void FUN_006d78d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  param_1[1] = (long)plVar5;
  *PTR_DAT_027153c8 = 1;
  puVar1 = PTR_DAT_027153d0 + 0x40;
  *param_1 = (long)(PTR_DAT_027153d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x358,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_006d7be0(lVar4,0x100000);
  *(long **)(lVar4 + 8) = plVar5;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x358;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[10] != 0) {
    (**(code **)(*(long *)(param_1[10] + 0x48) + 0x18))();
    param_1[10] = 0;
  }
  param_1[10] = lVar4;
  FUN_006d0560(lVar4,"GenericWorkerService",0xffffffff,0x10);
  return;
}


