/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01183360; name: FUN_01183360
 */


uint FUN_01183360(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x230) = param_2;
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_0118fac0(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_60,plVar4,0,1);
  local_48 = (void *)0x0;
  uStack_50 = 0;
  local_58 = (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x230),8);
  if ((string *)puVar2[3] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar2[3],(string *)&local_58);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  FUN_0075f0a0(auStack_60);
  uVar1 = FUN_011834f0(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_58,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_58);
  return uVar1 & 1;
}


