/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e3d60; name: FUN_011e3d60
 */


uint FUN_011e3d60(long param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x380) = param_2;
  *(undefined1 *)(param_1 + 0x388) = param_3;
  *(undefined1 *)(param_1 + 0x389) = 1;
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_011ecab0(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_60,plVar4,0,1);
  uStack_46 = 0;
  local_58 = (string)0x20;
  uStack_4f = (undefined7)*(undefined8 *)(param_1 + 0x388);
  local_48 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x388) >> 0x38);
  uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0x380);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x380) >> 0x38);
  uStack_47 = 0;
  if ((string *)puVar2[3] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar2[3],&local_58);
  }
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,local_48)));
  }
  FUN_0075f0a0(auStack_60);
  uVar1 = FUN_011e3f00(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_58,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_58);
  return uVar1 & 1;
}


