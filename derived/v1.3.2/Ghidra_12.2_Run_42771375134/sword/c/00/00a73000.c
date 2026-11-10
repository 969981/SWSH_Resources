/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73000; name: FUN_00a73000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a73000(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x1e18) + 0x400);
  if (lVar2 == 0) {
    uVar1 = FUN_00da9310(_DAT_00000078);
    FUN_00dab320(param_1,0,uVar1);
    return;
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  lVar3 = *(long *)(*(long *)(param_2 + 0x1e18) + 0x400);
  if (lVar3 == 0) {
    uVar1 = FUN_00da9310(_DAT_00000078);
    FUN_00dab320(param_1,lVar2,uVar1);
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_00da9310(*(undefined4 *)(lVar3 + 0x78));
    FUN_00dab320(param_1,lVar2,uVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00a730dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


