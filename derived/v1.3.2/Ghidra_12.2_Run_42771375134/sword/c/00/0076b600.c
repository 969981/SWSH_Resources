/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b600; name: FUN_0076b600
 */


void FUN_0076b600(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x148,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_00701720(lVar3,1);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x148;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_38 = lVar3;
  if (lVar3 == 0) {
    FUN_0076b730(param_1,&local_38);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0076b730(param_1,&local_38);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return;
}


