/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9d10; name: FUN_007a9d10
 */


void FUN_007a9d10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_027104a0;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar3 = param_1[1];
    lVar1 = *(long *)(lVar5 + 0x80);
    *(undefined8 *)(lVar5 + 0x80) = 0;
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = param_1[1];
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar1 = *(long *)(lVar5 + 0x80);
    *(long *)(lVar5 + 0x80) = lVar2;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar5 + 0x88) = lVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


