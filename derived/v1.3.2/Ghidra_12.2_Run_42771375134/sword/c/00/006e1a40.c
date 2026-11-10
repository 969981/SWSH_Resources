/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1a40; name: FUN_006e1a40
 */


void FUN_006e1a40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      *(undefined8 *)(param_1 + 0x160) = uVar5;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      bVar4 = false;
      lVar1 = *(long *)(param_1 + 0x168);
      *(long *)(param_1 + 0x168) = lVar3;
      goto joined_r0x006e1abc;
    }
  }
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  bVar4 = true;
  lVar1 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
joined_r0x006e1abc:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (bVar4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e1af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


