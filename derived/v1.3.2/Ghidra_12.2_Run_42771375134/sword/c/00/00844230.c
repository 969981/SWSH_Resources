/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00844230; name: FUN_00844230
 */


bool FUN_00844230(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0xb8))();
  pbVar4 = *(byte **)(lVar3 + 8);
  uVar1 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar1 == 0x13) {
    iVar2 = std::string::compare
                      ((ulong)pbVar4,0,(char *)0xffffffffffffffff,
                       (ulong)PTR_s_google_protobuf_Any_02716f50);
    if (iVar2 != 0) {
      return false;
    }
    lVar5 = FUN_007e3b90(lVar3,1);
    *param_2 = lVar5;
    lVar3 = FUN_007e3b90(lVar3,2);
    *param_3 = lVar3;
    if (*param_2 == 0) {
      return false;
    }
    if ((lVar3 != 0) && (*(int *)(*param_2 + 0x3c) == 9)) {
      return *(int *)(lVar3 + 0x3c) == 0xc;
    }
  }
  return false;
}


