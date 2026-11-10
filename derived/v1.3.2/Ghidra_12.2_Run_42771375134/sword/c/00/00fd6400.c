/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd6400; name: FUN_00fd6400
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00fd6400(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0x8e89686f5660e8f;
  FUN_0167ba30(param_1[0x34],&local_38);
  lVar2 = param_1[0x34];
  local_40 = 0x8e89686f5660e8f;
  local_38 = 0x8e89686f5660e8f;
  FUN_0167bf30(lVar2,&local_40);
  FUN_0167bdb0(lVar2,&local_38);
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  DAT_02a61820 = DAT_02a61820 | 1 << (ulong)(uVar1 & 0x1f);
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    plVar3 = *(long **)(*(long *)(lVar2 + 0x60) + 0x100);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar4 = plVar3 + 9;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar3 + 0x70))(plVar3,0,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  *(undefined1 *)((long)param_1 + 0x85) = 1;
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}


