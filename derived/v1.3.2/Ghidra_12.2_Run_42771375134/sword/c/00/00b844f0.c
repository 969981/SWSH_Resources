/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b844f0; name: FUN_00b844f0
 */


long FUN_00b844f0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x130,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_b0);
    local_d0 = *param_3;
    local_c8 = (code *)param_3[1];
    local_c0 = param_3[2];
    uStack_b8 = param_3[3];
  }
  FUN_00ab01f0(lVar3,&local_d0,param_4,param_5,*param_6,*param_7);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x130;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


