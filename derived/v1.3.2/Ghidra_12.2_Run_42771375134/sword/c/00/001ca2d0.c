/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ca2d0; name: FUN_001ca2d0
 */


void FUN_001ca2d0(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar1 != 4) {
    FUN_001e4f00(param_1 + 0x10,
                 (long)param_2 +
                 *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_2 + 1) * 8 + 0x98));
    FUN_001f72b0(param_3,param_2);
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (lVar2 != 0) {
    return;
  }
  plVar4 = (long *)param_2[0x30];
  lVar2 = plVar4[0x11];
  iVar1 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_001e4f00(param_1 + 0x10,*(long *)(lVar2 + uVar5 * 8) + 0x60);
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    } while (uVar5 < (uVar3 & 0xffffffff));
  }
  FUN_001f8d00(param_3,plVar4);
  return;
}


