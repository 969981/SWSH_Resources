/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fef60; name: FUN_009fef60
 */


void FUN_009fef60(long *param_1,long param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long local_58;
  
  if (*(long *)(param_2 + 0x188) == 0) {
    *param_1 = 0;
  }
  else {
    if ((param_3 & 0xff) < 5) {
      uVar3 = *(undefined4 *)(&DAT_021535f0 + (long)(char)param_3 * 4);
    }
    else {
      uVar3 = 0;
    }
    plVar4 = *(long **)(param_2 + 0x60);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar2,uVar3);
    *(long **)(lVar2 + 8) = plVar4;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x80;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    if (lVar2 == 0) {
      local_58 = 0;
      FUN_009fee40(param_2,param_3,param_4,&local_58);
    }
    else {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      local_58 = lVar2;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_009fee40(param_2,param_3,param_4,&local_58);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    *param_1 = lVar2;
  }
  return;
}


