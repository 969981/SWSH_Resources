/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00803ce0; name: FUN_00803ce0
 */


void FUN_00803ce0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  pbVar2 = (byte *)(param_1 + 0x18);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00803d38;
  }
  else if (*(long *)(param_1 + 0x20) == 0) goto LAB_00803d38;
  if ((bVar1 & 1) == 0) {
    if ((ulong)(bVar1 >> 1) < (ulong)((long)*(int *)(param_1 + 0x30) << 1)) {
LAB_00803d38:
      FUN_00801270(auStack_40,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                   ,0x497);
      uVar3 = FUN_00800f30(auStack_40," Outdent() without matching Indent().");
      FUN_00800fa0(auStack_48,uVar3);
      FUN_00801290(auStack_40);
      return;
    }
  }
  else if (*(ulong *)(param_1 + 0x20) < (ulong)((long)*(int *)(param_1 + 0x30) << 1))
  goto LAB_00803d38;
  if ((bVar1 & 1) == 0) {
    std::string::resize((ulong)pbVar2,(bVar1 >> 1) - 2);
    return;
  }
  std::string::resize((ulong)pbVar2,(char)*(undefined8 *)(param_1 + 0x20) + -2);
  return;
}


