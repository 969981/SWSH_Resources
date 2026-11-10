/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e5aa0; name: FUN_011e5aa0
 */


void FUN_011e5aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  undefined1 auStack_48 [8];
  
  *param_1 = param_4;
  uVar1 = (**(code **)(*param_4 + 0x10))(param_4,0x28,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_011efc30(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = 0x28;
  param_1[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = param_1[1];
  FUN_0075efb0(auStack_48,*param_1,0,1);
  if (*(int *)(lVar2 + 0x24) == 0xe) {
    pvVar3 = *(void **)(lVar2 + 0x18);
  }
  else {
    FUN_011f0380(lVar2);
    *(undefined4 *)(lVar2 + 0x24) = 0xe;
    pvVar3 = operator_new(0x28);
    FUN_011eeb40();
    *(void **)(lVar2 + 0x18) = pvVar3;
  }
  FUN_011ef290(pvVar3,param_3);
  FUN_0075f0a0(auStack_48);
  return;
}


