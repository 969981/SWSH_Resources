/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ff5d0; name: FUN_010ff5d0
 */


long FUN_010ff5d0(undefined8 param_1,long *param_2,char *param_3,char *param_4,long *param_5,
                 undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long local_58;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x300,0x10);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  cVar1 = *param_3;
  cVar2 = *param_4;
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_011908b0(lVar4,cVar1 != '\0',cVar2 != '\0',&local_58,*param_6,param_7);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x300;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


