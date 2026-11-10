/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d00e0; name: FUN_006d00e0
 */


void FUN_006d00e0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
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
  puVar1 = PTR_DAT_02715308;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[0xb] = (long)(puVar1 + 0xa0);
  FUN_006ceee0(param_1 + 0xc,param_1);
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  FUN_006cee90((long)param_1 + 0x2dc,1,0);
  plVar4 = (long *)param_1[1];
  param_1[0x5d] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0x100;
  *(undefined1 *)((long)param_1 + 0x2fa) = 0;
  param_1[0x5e] = param_2;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2,0x1000);
  lVar3 = param_1[0x57];
  param_1[0x57] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0x58] + 0x18))
              ((long *)param_1[0x58],lVar3,param_1[0x59],param_1[0x5a]);
  }
  param_1[0x58] = (long)plVar4;
  param_1[0x59] = param_2;
  param_1[0x5a] = 0x1000;
  return;
}


