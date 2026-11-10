/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1f010; name: FUN_00a1f010
 */


uint FUN_00a1f010(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  if ((param_2 & 1) == 0) {
    if (lVar3 == 0) goto LAB_00a1f0ec;
    uVar1 = FUN_0167bc20(lVar3,&DAT_021546e8);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_021546f0);
      uVar1 = uVar1 & uVar2;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_021546c0);
        lVar3 = *(long *)(param_1 + 0x2b0);
        uVar1 = uVar1 & uVar2;
        if (lVar3 != 0) {
          puVar4 = &DAT_021546d0;
          goto LAB_00a1f0e4;
        }
      }
    }
  }
  else if (lVar3 == 0) {
LAB_00a1f0ec:
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0167bc20(lVar3,&DAT_021546d8);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_021546e0);
      uVar1 = uVar1 & uVar2;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_021546b8);
        lVar3 = *(long *)(param_1 + 0x2b0);
        uVar1 = uVar1 & uVar2;
        if (lVar3 != 0) {
          puVar4 = &DAT_021546c8;
LAB_00a1f0e4:
          uVar2 = FUN_0167bc20(lVar3,puVar4);
          goto LAB_00a1f0f4;
        }
      }
    }
  }
  uVar2 = 1;
LAB_00a1f0f4:
  return uVar1 & uVar2 & 1;
}


