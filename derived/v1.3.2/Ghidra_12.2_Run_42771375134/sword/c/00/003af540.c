/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003af540; name: FUN_003af540
 */


void FUN_003af540(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_68;
  
  if (param_2 == 0) {
    local_68 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x150))();
    local_68 = param_2 + (uVar2 & 0xffffffff) * 0x10;
  }
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x160))();
    lVar5 = param_3 + (ulong)(uint)(iVar1 << 1) * 4;
  }
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x170))();
    lVar6 = param_4 + (uVar2 & 0xffffffff) * 0x10;
  }
  if (param_5 == 0) {
    lVar7 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x180))();
    lVar7 = param_5 + (uVar2 & 0xffffffff) * 4;
  }
  if (param_6 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x198))();
    lVar4 = param_6 + (ulong)(uint)(iVar1 * 3) * 0xc;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  (**(code **)(*plVar3 + 0x38))
            (plVar3,*(undefined8 *)(param_1 + 0x20),param_2,local_68,param_3,lVar5,param_4,lVar6,
             param_5,lVar7,param_6,lVar4);
  return;
}


