/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01508260; name: FUN_01508260
 */


undefined4 FUN_01508260(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00866110(lVar3,param_2);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0xb8;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 == 0) {
    local_38 = 0;
    uVar1 = FUN_01508130(param_1,&local_38);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_38 = lVar3;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_01508130(param_1,&local_38);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar1;
}


