/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b38b0; name: FUN_012b38b0
 */


void FUN_012b38b0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long local_40;
  undefined1 auStack_38 [8];
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar4 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  puVar1 = PTR_DAT_02727438;
  *PTR_DAT_02727440 = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  plVar3 = param_1 + 10;
  *plVar3 = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = param_2;
  param_1[0xc] = 0;
  FUN_01064460(&local_40,param_2,0);
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = local_40;
  *(undefined4 *)(local_40 + 0x140) = 200;
  plVar3 = (long *)FUN_012b3c60(auStack_38,*plVar5,plVar5,plVar3);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x70))(plVar3);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = (long)plVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  return;
}


