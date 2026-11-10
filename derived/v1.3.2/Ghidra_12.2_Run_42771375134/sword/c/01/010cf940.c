/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cf940; name: FUN_010cf940
 */


undefined8 FUN_010cf940(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_29a8 [10600];
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = FUN_009fec70(lVar4);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    else {
      uVar2 = FUN_009fecc0(lVar4);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar3);
      if ((uVar2 & 1) != 0) {
        iVar1 = FUN_009fe1a0(*param_2,0xc);
        if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
          memset(auStack_29a8,0,0x2961);
        }
        return 0;
      }
    }
  }
  return 1;
}


