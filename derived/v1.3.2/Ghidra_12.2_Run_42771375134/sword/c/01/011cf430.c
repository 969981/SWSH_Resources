/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cf430; name: FUN_011cf430
 */


bool FUN_011cf430(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_50 [20];
  int local_3c;
  undefined1 local_38;
  
  lVar3 = *param_1;
  FUN_007a3db0(auStack_50);
  local_3c = (int)*(short *)(lVar3 + 0x84);
  local_38 = 0;
  uVar2 = FUN_009b7230(*(undefined8 *)(lVar3 + 0x2b8),auStack_50,param_1[1]);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_007a24a0(*(undefined8 *)(lVar3 + 0x2a0),param_1[1],0);
  }
  FUN_007a3e20(auStack_50);
  return bVar1;
}


