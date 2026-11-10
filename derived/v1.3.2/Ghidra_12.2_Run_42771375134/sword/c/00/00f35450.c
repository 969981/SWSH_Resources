/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35450; name: FUN_00f35450
 */


void FUN_00f35450(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  long *local_48;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,auStack_50);
  if (*(long *)(lVar1 + 0x1d8) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00f35a30(auStack_38);
    if (plVar2 != (long *)0x0) {
      (**(code **)(plVar2[9] + 0x10))();
    }
    plVar2[0xe] = lVar1;
    (**(code **)(*plVar2 + 0x38))(plVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x1e8);
    local_48 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(plVar2[9] + 0x10))();
    }
    FUN_01591030(lVar1 + 0x1e8,uVar3,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(local_48[9] + 0x18))();
      local_48 = (long *)0x0;
    }
    (**(code **)(plVar2[9] + 0x18))();
  }
  *(undefined4 *)((long)plVar2 + 0xe4) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(plVar2 + 0x1d) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)((long)plVar2 + 0xec) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)(plVar2 + 0x1f) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)((long)plVar2 + 0xfc) = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)((long)plVar2 + 0xf4) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(plVar2 + 0x1e) = *(undefined4 *)(param_1 + 0x48c);
  *(undefined4 *)(plVar2 + 0x20) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)((long)plVar2 + 0x104) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(plVar2 + 0x21) = *(undefined4 *)(param_1 + 0x490);
  *(byte *)(plVar2 + 0x22) = param_2 & 1;
  return;
}


