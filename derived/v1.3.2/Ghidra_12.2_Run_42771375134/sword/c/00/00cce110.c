/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce110; name: FUN_00cce110
 */


/* WARNING: Removing unreachable block (ram,0x00cce280) */

void FUN_00cce110(long param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x6c8);
  local_f0 = 0x95fe7fda5f29b493;
  lVar6 = *(long *)(lVar3 + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar5,&local_f0,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar5,&local_f0,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_014c84c0(lVar4,0,param_2);
  puVar1 = PTR_DAT_0271c800;
  FUN_0167cce0(lVar3,PTR_DAT_0271c800 + (long)param_3 * 0x88 + 0x48,10);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_0168c890(*(long *)(param_1 + 0x4c8) + (ulong)((int)param_3 + 3) * 0x3e0,param_2,0,0,&local_f0)
  ;
  pcVar2 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
  }
  FUN_00ffd010(param_1 + 0x100,puVar1 + (long)param_3 * 0x88 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


