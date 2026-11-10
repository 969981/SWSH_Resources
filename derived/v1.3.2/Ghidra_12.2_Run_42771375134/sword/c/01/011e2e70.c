/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e2e70; name: FUN_011e2e70
 */


uint FUN_011e2e70(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [8];
  string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined1 local_3f;
  undefined6 uStack_3e;
  void *local_38;
  
  plVar4 = *(long **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_011eeb40(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_50,plVar4,0,1);
  local_38 = (void *)0x0;
  uStack_3e = 0;
  local_48 = (string)0x10;
  uStack_47 = (undefined7)*(undefined8 *)(param_1 + 0x70);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x38);
  local_3f = 0;
  if ((string *)puVar2[3] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar2[3],&local_48);
  }
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  FUN_0075f0a0(auStack_50);
  uVar1 = FUN_011e3050(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_48,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_48);
  return uVar1 & 1;
}


