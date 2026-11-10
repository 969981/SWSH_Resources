/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00844130; name: FUN_00844130
 */


undefined8 FUN_00844130(string *param_1,byte *param_2)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  psVar1 = *(string **)(param_1 + 0x10);
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) == 0) {
    psVar1 = param_1 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  uVar2 = uVar3;
  do {
    uVar4 = uVar2;
    if (uVar4 == 0) {
      return 0;
    }
    uVar2 = uVar4 - 1;
  } while (psVar1[uVar4 - 1] != (string)0x2f);
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar4 == uVar3) {
    return 0;
  }
  std::string::string((string *)&local_38,param_1,uVar4,0xffffffffffffffff,(allocator *)param_1);
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    if ((*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
  }
  *(undefined8 *)(param_2 + 8) = uStack_30;
  *(undefined8 *)(param_2 + 0x10) = local_28;
  *(undefined8 *)param_2 = local_38;
  return 1;
}


