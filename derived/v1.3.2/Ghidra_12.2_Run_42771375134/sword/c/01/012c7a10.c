/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c7a10; name: FUN_012c7a10
 */


void FUN_012c7a10(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  
  FUN_00773ce0();
  puVar2 = PTR_DAT_027275c0;
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x78);
  param_1[10] = (long)(puVar2 + 0xb8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0x2a8,8);
  if (lVar4 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  plVar1 = param_1 + 0x25;
  FUN_012c80a0(lVar4,param_1);
  *(long **)(lVar4 + 8) = param_3;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x2a8;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_006d1120(lVar4);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar4;
  lVar3 = FUN_012c8750(auStack_38,param_3);
  FUN_006d1120();
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[0x26] = lVar3;
  *(ulong *)(param_1[0x25] + 0x130) = *(ulong *)(param_1[0x25] + 0x130) | 2;
  *(ulong *)(param_1[0x26] + 0x130) = *(ulong *)(param_1[0x26] + 0x130) | 2;
  return;
}


