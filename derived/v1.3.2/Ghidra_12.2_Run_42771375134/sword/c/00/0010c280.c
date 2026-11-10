/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010c280; name: FUN_0010c280
 */


void FUN_0010c280(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar6 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar6;
  puVar2 = PTR_DAT_02710b30;
  puVar1 = PTR_DAT_02710b28;
  *PTR_DAT_02710b20 = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x40);
  param_1[10] = (long)(puVar1 + 0x10);
  param_1[0xb] = param_2;
  FUN_002f45a0(param_1 + 0xc);
  lVar3 = FUN_00400d50(0x1000000,param_1 + 10,param_1 + 0xc);
  plVar5 = param_1 + 0xe;
  *plVar5 = 0;
  param_1[0xd] = lVar3;
  param_1[0xf] = 0;
  local_38 = 0x41200000;
  local_40 = 0x447a000042c80000;
  lVar3 = FUN_001b4080(0x3040200,lVar3,&local_40,1,0);
  if (lVar3 != 0) {
    FUN_001b4090(lVar3);
    FUN_001b40b0(lVar3);
    thunk_FUN_001b3670(lVar3);
    FUN_001b40e0(lVar3);
  }
  plVar4 = (long *)*plVar5;
  *plVar5 = lVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  lVar3 = FUN_002f3390(0,0);
  plVar5 = (long *)param_1[0xf];
  param_1[0xf] = lVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  return;
}


