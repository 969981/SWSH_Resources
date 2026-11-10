/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c81e70; name: FUN_00c81e70
 */


void FUN_00c81e70(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_00c82ee0(lVar1,param_1,0x10);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *param_2;
  *param_2 = lVar1;
  if (lVar2 != 0) {
    FUN_00c83200(lVar2);
    (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],lVar2,param_2[2],param_2[3]);
    lVar1 = *param_2;
  }
  param_2[1] = (long)param_1;
  param_2[2] = 0x58;
  param_2[3] = 8;
  uVar3 = FUN_00c83340(lVar1,0,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,1,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,2,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,3,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,4,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,5,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,6,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,7,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,8,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,9,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,10,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,0xb,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,0xc,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,0xd,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,0xe,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  uVar3 = FUN_00c83340(*param_2,0xf,param_1,1);
  FUN_00c82500(uVar3,0,param_1);
  return;
}


