/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011952c0; name: FUN_011952c0
 */


void FUN_011952c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x380,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_006d00e0(plVar3,0x8000);
  puVar1 = PTR_DAT_02716798;
  *plVar3 = (long)(PTR_DAT_02716798 + 0x10);
  plVar3[1] = (long)plVar5;
  plVar3[9] = (long)(puVar1 + 0x70);
  plVar3[0xb] = (long)(puVar1 + 0xa0);
  plVar3[99] = 0;
  plVar3[0x62] = 0;
  plVar3[0x61] = 0;
  plVar3[0x60] = 0;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x380;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(long **)(param_1 + 0x60) = plVar3;
  *(undefined4 *)(param_1 + 0x68) = 1;
  pcVar4 = (code *)plVar3[0x61];
  if (pcVar4 != (code *)0x0) {
    plVar3[0x62] = 0;
    plVar3[99] = 0;
    plVar3[0x60] = 0;
    plVar3[0x61] = 0;
    (*pcVar4)(plVar3 + 100);
  }
  plVar3[100] = param_1;
  plVar3[0x60] = (long)&LAB_011954c0;
  plVar3[0x61] = (long)&LAB_01195500;
  plVar3[0x62] = (long)&LAB_01195510;
  plVar3[99] = (long)&LAB_01195520;
  FUN_006d0560(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)PTR_PTR_027252b8,0xffffffff,0x10);
  return;
}


