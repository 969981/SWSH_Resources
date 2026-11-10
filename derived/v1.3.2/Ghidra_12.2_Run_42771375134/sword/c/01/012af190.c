/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012af190; name: FUN_012af190
 */


void FUN_012af190(long param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  
  sVar2 = strlen(param_2);
  if ((sVar2 == 0) || (*(long *)(param_1 + 0x168) != 0)) {
    return;
  }
  plVar6 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x380,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_006d00e0(plVar4,0x8000);
  puVar1 = PTR_DAT_02716798;
  *plVar4 = (long)(PTR_DAT_02716798 + 0x10);
  plVar4[1] = (long)plVar6;
  plVar4[9] = (long)(puVar1 + 0x70);
  plVar4[0xb] = (long)(puVar1 + 0xa0);
  plVar4[99] = 0;
  plVar4[0x62] = 0;
  plVar4[0x61] = 0;
  plVar4[0x60] = 0;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x380;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(long **)(param_1 + 0x168) = plVar4;
  memcpy((void *)(param_1 + 0x60),param_2,0x100);
  *(undefined4 *)(param_1 + 0x160) = param_3;
  *(undefined4 *)(param_1 + 0x164) = param_4;
  pcVar5 = (code *)plVar4[0x61];
  if (pcVar5 != (code *)0x0) {
    plVar4[0x62] = 0;
    plVar4[99] = 0;
    plVar4[0x60] = 0;
    plVar4[0x61] = 0;
    (*pcVar5)(plVar4 + 100);
  }
  plVar4[100] = param_1;
  plVar4[0x60] = (long)FUN_012af3d0;
  plVar4[0x61] = (long)&LAB_012af450;
  plVar4[0x62] = (long)&LAB_012af460;
  plVar4[99] = (long)&LAB_012af470;
  FUN_006d0560(*(undefined8 *)(param_1 + 0x168),*(undefined8 *)PTR_PTR_027273b8,0xffffffff,0x10);
  return;
}


