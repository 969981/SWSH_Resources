/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e3120; name: FUN_011e3120
 */


uint FUN_011e3120(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_60 [8];
  string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  
  *(undefined8 *)(param_1 + 0x78) = param_2;
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x80) = param_3;
  *(undefined1 *)(param_1 + 0x81) = param_4;
  puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_011e8230(puVar3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  FUN_0075efb0(auStack_60,plVar5,0,1);
  uStack_46 = 0;
  local_58 = (string)0x20;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_4f = (undefined7)*(undefined8 *)(param_1 + 0x80);
  local_48 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x38);
  uStack_57 = (undefined7)uVar1;
  uStack_50 = (undefined1)((ulong)uVar1 >> 0x38);
  uStack_47 = 0;
  if ((string *)puVar3[3] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar3[3],&local_58);
  }
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,local_48)));
  }
  FUN_0075f0a0(auStack_60);
  uVar2 = FUN_011e32c0(*(undefined8 *)(param_1 + 0x68),puVar3);
  FUN_0075efb0(&local_58,plVar5,0,1);
  (**(code **)*puVar3)(puVar3);
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x28,8);
  FUN_0075f0a0(&local_58);
  return uVar2 & 1;
}


