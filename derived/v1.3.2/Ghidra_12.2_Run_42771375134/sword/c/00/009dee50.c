/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dee50; name: FUN_009dee50
 */


long FUN_009dee50(long param_1,char param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_48;
  
  plVar1 = (long *)(param_1 + (param_3 & 0xff) * 0x20);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_4 + 0x10))(param_4,0x4e68,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    local_48 = *(long *)(param_1 + 0xa0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_009c4df0(lVar3,param_3 & 0xffffffff,param_2 != '\0',&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar2 = *plVar1;
    *plVar1 = lVar3;
    if (lVar2 != 0) {
      FUN_009c4e80(lVar2);
      (**(code **)(*(long *)plVar1[1] + 0x18))((long *)plVar1[1],lVar2,plVar1[2],plVar1[3]);
      lVar3 = *plVar1;
    }
    plVar1[1] = (long)param_4;
    plVar1[2] = 0x4e68;
    plVar1[3] = 8;
  }
  return lVar3;
}


