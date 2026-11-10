/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01472540; name: FUN_01472540
 */


void FUN_01472540(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 != -1) {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    plVar3 = *(long **)(lVar2 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x10))();
    }
    uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    FUN_014ad910(&local_50,uVar1);
    FUN_01713f70(*(undefined8 *)(param_1 + 0x70),&local_50,1);
  }
  return;
}


