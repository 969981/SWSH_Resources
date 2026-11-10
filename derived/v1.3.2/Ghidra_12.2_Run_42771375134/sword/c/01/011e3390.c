/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e3390; name: FUN_011e3390
 */


uint FUN_011e3390(long param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x88) = param_2;
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_011e9240(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_50,plVar4,0,1);
  local_38 = (void *)0x0;
  uStack_40 = 0;
  local_48 = (ulong)CONCAT11(*(undefined1 *)(param_1 + 0x88),2);
  if ((string *)puVar2[3] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar2[3],(string *)&local_48);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  FUN_0075f0a0(auStack_50);
  uVar1 = FUN_011e3510(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_48,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_48);
  return uVar1 & 1;
}


